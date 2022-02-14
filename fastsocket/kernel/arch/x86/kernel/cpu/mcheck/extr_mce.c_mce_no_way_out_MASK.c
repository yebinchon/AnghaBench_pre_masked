
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
struct mce {int status; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,unsigned long*) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct mce*,int ,char**) ;
 int FUNC_4 (int,struct mce*,struct pt_regs*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct mce *VAR_4, char **VAR_5, unsigned long *VAR_6,
     struct pt_regs *VAR_7)
{
 int VAR_8, VAR_9 = 0;

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  VAR_4->status = FUNC_2(FUNC_0(VAR_8));
  if (VAR_4->status & VAR_1) {
   FUNC_1(VAR_8, VAR_6);
   if (&FUNC_4)
    FUNC_4(VAR_8, VAR_4, VAR_7);
  }
  if (FUNC_3(VAR_4, VAR_3, VAR_5) >= VAR_0)
   VAR_9 = 1;
 }
 return VAR_9;
}
