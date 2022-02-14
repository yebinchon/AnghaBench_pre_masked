
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ color; struct TYPE_4__** child; } ;
typedef TYPE_1__ CheckasmFunc ;



__attribute__((used)) static CheckasmFunc *FUNC_0(CheckasmFunc *VAR_0, int VAR_1)
{
    CheckasmFunc *VAR_2 = VAR_0->child[VAR_1^1];
    VAR_0->child[VAR_1^1] = VAR_2->child[VAR_1];
    VAR_2->child[VAR_1] = VAR_0;
    VAR_2->color = VAR_0->color;
    VAR_0->color = 0;
    return VAR_2;
}
