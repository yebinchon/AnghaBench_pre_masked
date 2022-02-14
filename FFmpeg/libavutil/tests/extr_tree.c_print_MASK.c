
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__** child; int elem; int state; } ;
typedef TYPE_1__ AVTreeNode ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,...) ;

__attribute__((used)) static void FUNC_1(AVTreeNode *VAR_1, int VAR_2)
{
    int VAR_3;
    for (VAR_3 = 0; VAR_3 < VAR_2 * 4; VAR_3++)
        FUNC_0(((void*)0), VAR_0, " ");
    if (VAR_1) {
        FUNC_0(((void*)0), VAR_0, "Node %p %2d %p\n", VAR_1, VAR_1->state, VAR_1->elem);
        FUNC_1(VAR_1->child[0], VAR_2 + 1);
        FUNC_1(VAR_1->child[1], VAR_2 + 1);
    } else
        FUNC_0(((void*)0), VAR_0, "NULL\n");
}
