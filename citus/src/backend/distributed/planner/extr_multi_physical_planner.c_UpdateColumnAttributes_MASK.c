
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int varattno; int varno; int varoattno; int varnoold; } ;
typedef TYPE_1__ Var ;
typedef int RangeTblEntry ;
typedef int List ;
typedef int Index ;
typedef int AttrNumber ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int *,int *) ;
 int FUNC_2 (int ,int *) ;
 int * FUNC_3 (int ,int *) ;

__attribute__((used)) static void
FUNC_4(Var *VAR_1, List *VAR_2, List *VAR_3)
{
 Index VAR_4 = VAR_1->varnoold;
 AttrNumber VAR_5 = VAR_1->varoattno;


 Index VAR_6 = FUNC_2(VAR_4, VAR_2);
 AttrNumber VAR_7 = VAR_5;


 RangeTblEntry *VAR_8 = FUNC_3(VAR_6, VAR_2);
 if (FUNC_0(VAR_8) == VAR_0)
 {
  VAR_7 = FUNC_1(VAR_4, VAR_5,
          VAR_8, VAR_3);
 }

 VAR_1->varno = VAR_6;
 VAR_1->varattno = VAR_7;
}
