
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state; struct TYPE_3__** child; } ;
typedef TYPE_1__ AVTreeNode ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(AVTreeNode *VAR_0)
{
    if (VAR_0) {
        int VAR_1 = FUNC_1(VAR_0->child[0]);
        int VAR_2 = FUNC_1(VAR_0->child[1]);

        if (VAR_1 > 999 || VAR_2 > 999)
            return 1000;
        if (VAR_2 - VAR_1 != VAR_0->state)
            return 1000;
        if (VAR_0->state > 1 || VAR_0->state < -1)
            return 1000;
        return FUNC_0(VAR_1, VAR_2) + 1;
    }
    return 0;
}
