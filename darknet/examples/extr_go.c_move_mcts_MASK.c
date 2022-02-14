
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__** children; } ;
typedef TYPE_1__ mcts_tree ;


 int FUNC_0 (TYPE_1__*) ;

mcts_tree *FUNC_1(mcts_tree *VAR_0, int VAR_1)
{
    if(VAR_1 < 0 || VAR_1 > 19*19 || !VAR_0 || !VAR_0->children[VAR_1]) {
        FUNC_0(VAR_0);
        VAR_0 = 0;
    } else {
        mcts_tree *VAR_2 = VAR_0;
        VAR_0 = VAR_0->children[VAR_1];
        VAR_2->children[VAR_1] = 0;
        FUNC_0(VAR_2);
    }
    return VAR_0;
}
