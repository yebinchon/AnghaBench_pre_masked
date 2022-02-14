
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int type; int value; struct TYPE_6__** param; } ;
typedef TYPE_1__ AVExpr ;


 TYPE_1__* FUNC_0 (int) ;

__attribute__((used)) static AVExpr *FUNC_1(int VAR_0, int VAR_1, AVExpr *VAR_2, AVExpr *VAR_3)
{
    AVExpr *VAR_4 = FUNC_0(sizeof(AVExpr));
    if (!VAR_4)
        return ((void*)0);
    VAR_4->type =VAR_0 ;
    VAR_4->value =VAR_1 ;
    VAR_4->param[0] =VAR_2 ;
    VAR_4->param[1] =VAR_3 ;
    return VAR_4;
}
