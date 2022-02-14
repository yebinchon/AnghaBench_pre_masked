
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_exch {int state; int timeout_work; } ;


 int FUNC_0 (struct fc_exch*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct fc_exch*) ;
 int VAR_2 ;
 int FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (int ,int *,int ) ;

__attribute__((used)) static inline void FUNC_4(struct fc_exch *VAR_3,
         unsigned int VAR_4)
{
 if (VAR_3->state & (VAR_1 | VAR_0))
  return;

 FUNC_0(VAR_3, "Exchange timer armed\n");

 if (FUNC_3(VAR_2, &VAR_3->timeout_work,
          FUNC_2(VAR_4)))
  FUNC_1(VAR_3);
}
