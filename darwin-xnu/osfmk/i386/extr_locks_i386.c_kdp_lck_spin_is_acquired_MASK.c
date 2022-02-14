
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ interlock; } ;
typedef TYPE_1__ lck_spin_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;

boolean_t
FUNC_1(lck_spin_t *VAR_3) {
 if (VAR_2) {
  FUNC_0("panic: spinlock acquired check done outside of kernel debugger");
 }
 return (VAR_3->interlock != 0)? VAR_1 : VAR_0;
}
