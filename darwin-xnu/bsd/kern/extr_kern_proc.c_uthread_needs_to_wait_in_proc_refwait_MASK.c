
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* uthread_t ;
typedef int boolean_t ;
struct TYPE_3__ {scalar_t__ uu_proc_refcount; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 () ;

__attribute__((used)) static boolean_t
FUNC_1(void) {
 uthread_t VAR_2 = FUNC_0();







 if (VAR_2->uu_proc_refcount == 0)
  return VAR_1;

 return VAR_0;
}
