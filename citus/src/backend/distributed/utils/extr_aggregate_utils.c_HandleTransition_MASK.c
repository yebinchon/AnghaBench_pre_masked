
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int eoh_context; } ;
struct TYPE_10__ {int isnull; } ;
struct TYPE_9__ {int valueNull; int value; int transtypeLen; int transtypeByVal; } ;
typedef TYPE_1__ StypeBox ;
typedef int MemoryContext ;
typedef TYPE_2__* FunctionCallInfo ;
typedef int Datum ;


 int FUNC_0 (TYPE_2__*,int *) ;
 scalar_t__ VAR_0 ;
 TYPE_7__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int,int ) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (scalar_t__) ;

__attribute__((used)) static void
FUNC_11(StypeBox *VAR_2, FunctionCallInfo VAR_3, FunctionCallInfo VAR_4)
{
 Datum VAR_5 = FUNC_5(VAR_4);
 bool VAR_6 = VAR_4->isnull;

 if (!VAR_2->transtypeByVal &&
  FUNC_2(VAR_5) != FUNC_2(VAR_2->value))
 {
  if (!VAR_6)
  {
   MemoryContext VAR_7;
   MemoryContext VAR_8;

   if (!FUNC_0(VAR_3, &VAR_7))
   {
    FUNC_9(VAR_1,
      "HandleTransition called from non aggregate context");
   }

   VAR_8 = FUNC_7(VAR_7);
   if (!(FUNC_3(VAR_5,
             0, VAR_2->transtypeLen) &&
      FUNC_6(FUNC_1(VAR_5)->eoh_context) ==
      VAR_0))
   {
    VAR_5 = FUNC_8(VAR_5, VAR_2->transtypeByVal, VAR_2->transtypeLen);
   }
   FUNC_7(VAR_8);
  }

  if (!VAR_2->valueNull)
  {
   if (FUNC_3(VAR_2->value,
              0, VAR_2->transtypeLen))
   {
    FUNC_4(VAR_2->value);
   }
   else
   {
    FUNC_10(FUNC_2(VAR_2->value));
   }
  }
 }

 VAR_2->value = VAR_5;
 VAR_2->valueNull = VAR_6;
}
