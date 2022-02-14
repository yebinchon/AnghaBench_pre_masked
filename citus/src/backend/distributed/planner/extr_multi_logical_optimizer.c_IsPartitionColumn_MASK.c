
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ varattno; } ;
typedef TYPE_1__ Var ;
typedef int Query ;
typedef scalar_t__ Oid ;
typedef int Expr ;


 TYPE_1__* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int ,int *,scalar_t__*,TYPE_1__**) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

bool
FUNC_2(Expr *VAR_2, Query *VAR_3)
{
 bool VAR_4 = 0;
 Oid VAR_5 = VAR_0;
 Var *VAR_6 = ((void*)0);

 FUNC_1(VAR_2, VAR_1, VAR_3, &VAR_5, &VAR_6);

 if (VAR_5 != VAR_0 && VAR_6 != ((void*)0))
 {
  Var *VAR_7 = FUNC_0(VAR_5);


  if (VAR_7 != ((void*)0) && VAR_6->varattno == VAR_7->varattno)
  {
   VAR_4 = 1;
  }
 }

 return VAR_4;
}
