
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state; int (* reset_func ) () ;} ;
typedef TYPE_1__ YuiWindow ;


 int VAR_0 ;
 int FUNC_0 () ;

void FUNC_1(YuiWindow * VAR_1) {
 if (VAR_1->state & VAR_0) {
  VAR_1->reset_func();
 }
}
