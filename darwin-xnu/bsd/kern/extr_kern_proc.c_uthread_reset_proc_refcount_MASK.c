
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef TYPE_1__* uthread_t ;
struct TYPE_2__ {scalar_t__ uu_pindex; scalar_t__ uu_proc_refcount; } ;


 scalar_t__ VAR_0 ;

void
FUNC_0(void *VAR_1) {
 uthread_t VAR_2;

 VAR_2 = (uthread_t) VAR_1;
 VAR_2->uu_proc_refcount = 0;
}
