
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int outerJoinQualifierList; int baseQualifierList; } ;
typedef TYPE_1__ QualifierWalkerContext ;
typedef int Node ;
typedef int List ;
typedef int FromExpr ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int * VAR_0 ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *,int ) ;
 TYPE_1__* FUNC_3 (int) ;

List *
FUNC_4(FromExpr *VAR_1)
{
 FromExpr *VAR_2 = FUNC_1(VAR_1);
 QualifierWalkerContext *VAR_3 = FUNC_3(sizeof(QualifierWalkerContext));
 List *VAR_4 = VAR_0;

 FUNC_0((Node *) VAR_2, VAR_3);
 VAR_4 = FUNC_2(VAR_4, VAR_3->baseQualifierList);
 VAR_4 = FUNC_2(VAR_4, VAR_3->outerJoinQualifierList);

 return VAR_4;
}
