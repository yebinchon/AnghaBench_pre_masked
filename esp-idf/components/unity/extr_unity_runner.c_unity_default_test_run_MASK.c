
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int (* UnityTestFunction ) () ;
typedef scalar_t__ UNITY_LINE_TYPE ;
struct TYPE_2__ {char const* CurrentTestName; int NumberOfTests; scalar_t__ CurrentTestLineNumber; } ;


 scalar_t__ FUNC_0 () ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(UnityTestFunction VAR_1, const char* VAR_2, const int VAR_3)
{
    VAR_0.CurrentTestName = VAR_2;
    VAR_0.CurrentTestLineNumber = (UNITY_LINE_TYPE)VAR_3;
    VAR_0.NumberOfTests++;
    if (FUNC_0())
    {
        FUNC_2();
        VAR_1();
    }
    if (FUNC_0())
    {
        FUNC_3();
    }
    FUNC_1();
}
