
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct encode_state {int* parent; int* rchild; int* lchild; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct encode_state *VAR_1, int VAR_2)
{
    int VAR_3;

    if (VAR_1->parent[VAR_2] == VAR_0)
        return;
    if (VAR_1->rchild[VAR_2] == VAR_0)
        VAR_3 = VAR_1->lchild[VAR_2];
    else if (VAR_1->lchild[VAR_2] == VAR_0)
        VAR_3 = VAR_1->rchild[VAR_2];
    else {
        VAR_3 = VAR_1->lchild[VAR_2];
        if (VAR_1->rchild[VAR_3] != VAR_0) {
            do {
                VAR_3 = VAR_1->rchild[VAR_3];
            } while (VAR_1->rchild[VAR_3] != VAR_0);
            VAR_1->rchild[VAR_1->parent[VAR_3]] = VAR_1->lchild[VAR_3];
            VAR_1->parent[VAR_1->lchild[VAR_3]] = VAR_1->parent[VAR_3];
            VAR_1->lchild[VAR_3] = VAR_1->lchild[VAR_2];
            VAR_1->parent[VAR_1->lchild[VAR_2]] = VAR_3;
        }
        VAR_1->rchild[VAR_3] = VAR_1->rchild[VAR_2];
        VAR_1->parent[VAR_1->rchild[VAR_2]] = VAR_3;
    }
    VAR_1->parent[VAR_3] = VAR_1->parent[VAR_2];
    if (VAR_1->rchild[VAR_1->parent[VAR_2]] == VAR_2)
        VAR_1->rchild[VAR_1->parent[VAR_2]] = VAR_3;
    else
        VAR_1->lchild[VAR_1->parent[VAR_2]] = VAR_3;
    VAR_1->parent[VAR_2] = VAR_0;
}
