
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ refcount; struct TYPE_4__* root; } ;
typedef TYPE_1__ buffer_t ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(buffer_t *VAR_0)
{
    if (!VAR_0) {
        return;
    }

    if (VAR_0->root != VAR_0) {

        if (--VAR_0->root->refcount == 0) {
            FUNC_0(VAR_0->root);
        }
        FUNC_0(VAR_0);
    } else if (--VAR_0->refcount == 0) {

        FUNC_0(VAR_0);
    }
}
