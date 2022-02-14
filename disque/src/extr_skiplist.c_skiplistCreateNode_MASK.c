
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct skiplistLevel {int dummy; } ;
struct TYPE_4__ {void* obj; } ;
typedef TYPE_1__ skiplistNode ;


 TYPE_1__* FUNC_0 (int) ;

skiplistNode *FUNC_1(int VAR_0, void *VAR_1) {
    skiplistNode *VAR_2 = FUNC_0(sizeof(*VAR_2)+VAR_0*sizeof(struct skiplistLevel));
    VAR_2->obj = VAR_1;
    return VAR_2;
}
