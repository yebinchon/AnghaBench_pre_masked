
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void const* elem; struct TYPE_3__** child; } ;
typedef TYPE_1__ AVTreeNode ;



void *FUNC_0(const AVTreeNode *VAR_0, void *VAR_1,
                   int (*VAR_2)(const void *VAR_3, const void *VAR_4), void *VAR_5[2])
{
    if (VAR_0) {
        unsigned int VAR_6 = VAR_2(VAR_1, VAR_0->elem);
        if (VAR_6) {
            if (VAR_5)
                VAR_5[VAR_6 >> 31] = VAR_0->elem;
            return FUNC_0(VAR_0->child[(VAR_6 >> 31) ^ 1], VAR_1, VAR_2, VAR_5);
        } else {
            if (VAR_5) {
                FUNC_0(VAR_0->child[0], VAR_1, VAR_2, VAR_5);
                FUNC_0(VAR_0->child[1], VAR_1, VAR_2, VAR_5);
            }
            return VAR_0->elem;
        }
    }
    return ((void*)0);
}
