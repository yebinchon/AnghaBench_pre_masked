
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int32 ;
typedef int int16 ;
struct TYPE_9__ {int es_query_cxt; } ;
struct TYPE_8__ {int * ps_ExprContext; } ;
typedef TYPE_1__ PlanState ;
typedef int Oid ;
typedef int Node ;
typedef int MemoryContext ;
typedef int ExprState ;
typedef int ExprContext ;
typedef int Expr ;
typedef TYPE_2__ EState ;
typedef int Datum ;


 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (int *,int *,int*) ;
 int * FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int * FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int*,int*) ;
 scalar_t__ FUNC_11 (int ,int ,int ,int,int ,int,int) ;

__attribute__((used)) static Expr *
FUNC_12(Expr *VAR_0, Oid VAR_1, int32 VAR_2,
     Oid VAR_3, PlanState *VAR_4)
{
 EState *VAR_5;
 ExprState *VAR_6;
 ExprContext *VAR_7;
 MemoryContext VAR_8;
 Datum VAR_9;
 bool VAR_10;
 int16 VAR_11;
 bool VAR_12;




 VAR_5 = FUNC_0();


 VAR_8 = FUNC_5(VAR_5->es_query_cxt);


 FUNC_9((Node *) VAR_0);





 VAR_6 = FUNC_2(VAR_0, VAR_4);

 if (VAR_4 != ((void*)0))
 {

  VAR_7 = VAR_4->ps_ExprContext;
 }
 else
 {

  VAR_7 = FUNC_4(VAR_5);
 }




 VAR_9 = FUNC_1(VAR_6, VAR_7, &VAR_10);


 FUNC_10(VAR_1, &VAR_11, &VAR_12);


 FUNC_5(VAR_8);
 if (!VAR_10)
 {
  if (VAR_11 == -1)
   VAR_9 = FUNC_7(FUNC_6(VAR_9));
  else
   VAR_9 = FUNC_8(VAR_9, VAR_12, VAR_11);
 }


 FUNC_3(VAR_5);




 return (Expr *) FUNC_11(VAR_1, VAR_2, VAR_3,
         VAR_11,
         VAR_9, VAR_10,
         VAR_12);
}
