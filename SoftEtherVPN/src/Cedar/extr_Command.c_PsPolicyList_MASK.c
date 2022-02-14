
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wchar_t ;
typedef int args ;
typedef int UINT ;
struct TYPE_3__ {char* member_0; int * member_4; int * member_3; int * member_2; int * member_1; } ;
typedef TYPE_1__ PARAM ;
typedef int LIST ;
typedef int CONSOLE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int * FUNC_2 (int *,char*,int *,TYPE_1__*,int) ;
 int FUNC_3 (int *,int ) ;

UINT FUNC_4(CONSOLE *VAR_2, char *VAR_3, wchar_t *VAR_4, void *VAR_5)
{
 LIST *VAR_6;
 PARAM VAR_7[] =
 {

  {"[name]", ((void*)0), ((void*)0), ((void*)0), ((void*)0)}
 };

 VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_7, sizeof(VAR_7) / sizeof(VAR_7[0]));
 if (VAR_6 == ((void*)0))
 {
  return VAR_0;
 }

 FUNC_3(VAR_2, FUNC_1(VAR_6, "[name]"));

 FUNC_0(VAR_6);

 return VAR_1;
}
