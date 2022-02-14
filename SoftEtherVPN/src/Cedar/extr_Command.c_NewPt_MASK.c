
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_4__ {int CmdLine; int * Console; } ;
typedef TYPE_1__ PT ;
typedef int CONSOLE ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int) ;

PT *FUNC_3(CONSOLE *VAR_0, wchar_t *VAR_1)
{
 PT *VAR_2;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 if (FUNC_1(VAR_1))
 {
  VAR_1 = ((void*)0);
 }

 VAR_2 = FUNC_2(sizeof(PT));
 VAR_2->Console = VAR_0;
 VAR_2->CmdLine = FUNC_0(VAR_1);

 return VAR_2;
}
