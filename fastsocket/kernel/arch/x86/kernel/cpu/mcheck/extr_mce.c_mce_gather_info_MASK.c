
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int cs; void* ip; } ;
struct mce {int mcgstatus; void* ip; int cs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct mce*) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static inline void FUNC_2(struct mce *VAR_4, struct pt_regs *VAR_5)
{
 FUNC_1(VAR_4);

 VAR_4->mcgstatus = FUNC_0(VAR_2);
 if (VAR_5) {




  if (VAR_4->mcgstatus & (VAR_1|VAR_0)) {
   VAR_4->ip = VAR_5->ip;
   VAR_4->cs = VAR_5->cs;
  }

  if (VAR_3)
   VAR_4->ip = FUNC_0(VAR_3);
 }
}
