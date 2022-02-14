
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int dtrace_state_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 () ;
 int * FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;

void
FUNC_5(void)
{
 int VAR_2;
 uint32_t VAR_3 = FUNC_0(&VAR_1, 0);
 if (VAR_3 == 0)
  return;





 FUNC_1();
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_3 & (1 << VAR_2)) {
   dtrace_state_t *VAR_4 = FUNC_2(VAR_2);
   if (VAR_4) {
    FUNC_4(VAR_4);
   }

  }
 }
 FUNC_3();
}
