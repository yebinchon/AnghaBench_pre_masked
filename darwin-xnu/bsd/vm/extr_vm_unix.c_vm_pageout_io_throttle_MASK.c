
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uthread {scalar_t__ uu_lowpri_window; } ;


 int FUNC_0 () ;
 struct uthread* FUNC_1 (int ) ;
 int FUNC_2 (int) ;

void FUNC_3(void) {
 struct uthread *VAR_0 = FUNC_1(FUNC_0());
 if (VAR_0->uu_lowpri_window) {
  FUNC_2(1);
 }

}
