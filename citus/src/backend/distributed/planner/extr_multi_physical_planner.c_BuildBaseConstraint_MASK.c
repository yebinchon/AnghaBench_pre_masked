
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Var ;
typedef int OpExpr ;
typedef int Node ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,int ) ;
 int * FUNC_1 (int *,int *) ;

Node *
FUNC_2(Var *VAR_2)
{
 Node *VAR_3 = ((void*)0);
 OpExpr *VAR_4 = ((void*)0);
 OpExpr *VAR_5 = ((void*)0);


 VAR_4 = FUNC_0(VAR_2, VAR_1);
 VAR_5 = FUNC_0(VAR_2, VAR_0);


 VAR_3 = FUNC_1((Node *) VAR_4, (Node *) VAR_5);

 return VAR_3;
}
