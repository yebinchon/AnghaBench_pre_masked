
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; int refcount; scalar_t__ notused; void* ptr; int encoding; } ;
typedef TYPE_1__ robj ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;

robj *FUNC_1(int VAR_1, void *VAR_2) {
    robj *VAR_3 = FUNC_0(sizeof(*VAR_3));
    VAR_3->type = VAR_1;
    VAR_3->encoding = VAR_0;
    VAR_3->ptr = VAR_2;
    VAR_3->refcount = 1;
    VAR_3->notused = 0;
    return VAR_3;
}
