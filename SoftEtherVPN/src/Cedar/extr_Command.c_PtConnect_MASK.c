
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int wchar_t ;
typedef int UINT ;
struct TYPE_5__ {int LastError; } ;
typedef TYPE_1__ PT ;
typedef int CONSOLE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_1__*) ;

UINT FUNC_3(CONSOLE *VAR_1, wchar_t *VAR_2)
{
 PT *VAR_3;
 UINT VAR_4 = 0;

 if (VAR_1 == ((void*)0))
 {
  return VAR_0;
 }

 VAR_3 = FUNC_1(VAR_1, VAR_2);

 FUNC_2(VAR_3);

 VAR_4 = VAR_3->LastError;

 FUNC_0(VAR_3);

 return VAR_4;
}
