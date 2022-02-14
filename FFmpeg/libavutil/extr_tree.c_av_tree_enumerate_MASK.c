
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* elem; struct TYPE_3__** child; } ;
typedef TYPE_1__ AVTreeNode ;



void FUNC_0(AVTreeNode *VAR_0, void *VAR_1,
                       int (*VAR_2)(void *VAR_3, void *VAR_4),
                       int (*VAR_5)(void *VAR_6, void *VAR_7))
{
    if (VAR_0) {
        int VAR_8 = VAR_2 ? VAR_2(VAR_1, VAR_0->elem) : 0;
        if (VAR_8 >= 0)
            FUNC_0(VAR_0->child[0], VAR_1, VAR_2, VAR_5);
        if (VAR_8 == 0)
            VAR_5(VAR_1, VAR_0->elem);
        if (VAR_8 <= 0)
            FUNC_0(VAR_0->child[1], VAR_1, VAR_2, VAR_5);
    }
}
