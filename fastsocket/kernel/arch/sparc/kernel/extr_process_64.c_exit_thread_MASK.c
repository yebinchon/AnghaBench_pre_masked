
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_info {int* utraps; scalar_t__ pcr_reg; int * user_cntd1; int user_cntd0; } ;


 int VAR_0 ;
 struct thread_info* FUNC_0 () ;
 int FUNC_1 (int*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(void)
{
 struct thread_info *VAR_1 = FUNC_0();

 if (VAR_1->utraps) {
  if (VAR_1->utraps[0] < 2)
   FUNC_1 (VAR_1->utraps);
  else
   VAR_1->utraps[0]--;
 }

 if (FUNC_2(VAR_0)) {
  VAR_1->user_cntd0 = *(VAR_1->user_cntd1 = ((void*)0));
  VAR_1->pcr_reg = 0;
  FUNC_3(0);
 }
}
