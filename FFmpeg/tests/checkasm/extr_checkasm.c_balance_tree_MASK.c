
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int color; struct TYPE_7__** child; } ;
struct TYPE_6__ {int color; TYPE_4__** child; } ;
typedef TYPE_1__ CheckasmFunc ;


 scalar_t__ FUNC_0 (TYPE_4__*) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_2(CheckasmFunc **VAR_0)
{
    CheckasmFunc *VAR_1 = *VAR_0;

    if (FUNC_0(VAR_1->child[0]) && FUNC_0(VAR_1->child[1])) {
        VAR_1->color ^= 1;
        VAR_1->child[0]->color = VAR_1->child[1]->color = 1;
    }

    if (!FUNC_0(VAR_1->child[0]) && FUNC_0(VAR_1->child[1]))
        *VAR_0 = FUNC_1(VAR_1, 0);
    else if (FUNC_0(VAR_1->child[0]) && FUNC_0(VAR_1->child[0]->child[0]))
        *VAR_0 = FUNC_1(VAR_1, 1);
}
