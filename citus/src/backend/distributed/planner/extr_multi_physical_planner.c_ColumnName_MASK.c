
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int varattno; int varno; } ;
typedef TYPE_1__ Var ;
typedef int Value ;
struct TYPE_9__ {int * colnames; } ;
struct TYPE_8__ {int relid; TYPE_3__* eref; } ;
typedef TYPE_2__ RangeTblEntry ;
typedef int Oid ;
typedef int List ;
typedef int Index ;
typedef scalar_t__ CitusRTEKind ;
typedef int AttrNumber ;
typedef TYPE_3__ Alias ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 char* FUNC_2 (int ,int,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 TYPE_2__* FUNC_4 (int ,int *) ;
 char* FUNC_5 (int *) ;

__attribute__((used)) static char *
FUNC_6(Var *VAR_2, List *VAR_3)
{
 char *VAR_4 = ((void*)0);
 Index VAR_5 = VAR_2->varno;
 AttrNumber VAR_6 = VAR_2->varattno;
 RangeTblEntry *VAR_7 = FUNC_4(VAR_5, VAR_3);

 CitusRTEKind VAR_8 = FUNC_1(VAR_7);
 if (VAR_8 == VAR_1)
 {
  Alias *VAR_9 = VAR_7->eref;
  List *VAR_10 = VAR_9->colnames;
  int VAR_11 = VAR_6 - 1;

  Value *VAR_12 = (Value *) FUNC_3(VAR_10, VAR_11);
  VAR_4 = FUNC_5(VAR_12);
 }
 else if (VAR_8 == VAR_0)
 {
  Oid VAR_13 = VAR_7->relid;
  VAR_4 = FUNC_2(VAR_13, VAR_6, 0);
 }

 FUNC_0(VAR_4 != ((void*)0));
 return VAR_4;
}
