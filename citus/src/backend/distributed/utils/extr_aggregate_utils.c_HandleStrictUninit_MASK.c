
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int valueNull; int valueInit; int transtypeLen; int transtypeByVal; int value; } ;
typedef TYPE_1__ StypeBox ;
typedef int MemoryContext ;
typedef int FunctionCallInfo ;
typedef int Datum ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void
FUNC_4(StypeBox *VAR_1, FunctionCallInfo VAR_2, Datum VAR_3)
{
 MemoryContext VAR_4;
 MemoryContext VAR_5;

 if (!FUNC_0(VAR_2, &VAR_4))
 {
  FUNC_3(VAR_0, "HandleStrictUninit called from non aggregate context");
 }

 VAR_5 = FUNC_1(VAR_4);
 VAR_1->value = FUNC_2(VAR_3, VAR_1->transtypeByVal, VAR_1->transtypeLen);
 FUNC_1(VAR_5);

 VAR_1->valueNull = 0;
 VAR_1->valueInit = 1;
}
