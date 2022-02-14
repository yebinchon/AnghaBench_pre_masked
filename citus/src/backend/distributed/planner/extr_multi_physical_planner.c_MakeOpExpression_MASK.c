
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int16 ;
struct TYPE_7__ {scalar_t__ vartype; scalar_t__ vartypmod; scalar_t__ varcollid; } ;
typedef TYPE_1__ Var ;
struct TYPE_9__ {int opfuncid; int opresulttype; } ;
struct TYPE_8__ {scalar_t__ operatorId; scalar_t__ operatorClassInputType; char typeType; } ;
typedef TYPE_2__ OperatorCacheEntry ;
typedef TYPE_3__ OpExpr ;
typedef scalar_t__ Oid ;
typedef int Expr ;
typedef int Const ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* FUNC_0 (scalar_t__,scalar_t__,int ) ;
 char VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int * FUNC_3 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (int *,scalar_t__,int,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__,int,int *,int *,scalar_t__,scalar_t__) ;

OpExpr *
FUNC_6(Var *VAR_4, int16 VAR_5)
{
 Oid VAR_6 = VAR_4->vartype;
 Oid VAR_7 = VAR_4->vartypmod;
 Oid VAR_8 = VAR_4->varcollid;

 OperatorCacheEntry *VAR_9 = ((void*)0);
 Oid VAR_10 = VAR_0;
 Oid VAR_11 = VAR_2;
 Oid VAR_12 = VAR_2;
 Const *VAR_13 = ((void*)0);
 OpExpr *VAR_14 = ((void*)0);
 char VAR_15 = 0;

 VAR_9 = FUNC_0(VAR_6, VAR_10, VAR_5);

 VAR_11 = VAR_9->operatorId;
 VAR_12 = VAR_9->operatorClassInputType;
 VAR_15 = VAR_9->typeType;






 if (VAR_12 != VAR_6 && VAR_15 != VAR_3)
 {
  VAR_4 = (Var *) FUNC_4((Expr *) VAR_4, VAR_12,
             -1, VAR_8, VAR_1);
 }

 VAR_13 = FUNC_3(VAR_12, VAR_7, VAR_8);


 VAR_14 = (OpExpr *) FUNC_5(VAR_11,
            VAR_2,
            0,
            (Expr *) VAR_4,
            (Expr *) VAR_13,
            VAR_2, VAR_8);


 VAR_14->opfuncid = FUNC_2(VAR_11);
 VAR_14->opresulttype = FUNC_1(VAR_14->opfuncid);

 return VAR_14;
}
