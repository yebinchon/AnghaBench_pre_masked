
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp2 ;
typedef int tmp ;
struct TYPE_5__ {int (* Write ) (TYPE_1__*,int *) ;} ;
typedef TYPE_1__ CONSOLE ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int,int *,int *) ;
 int FUNC_3 (int *,int,int *) ;
 int * FUNC_4 (char*) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (TYPE_1__*,int *) ;

bool FUNC_7(CONSOLE *VAR_2, wchar_t *VAR_3, void *VAR_4)
{
 wchar_t VAR_5[VAR_0];

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return 0;
 }

 FUNC_3(VAR_5, sizeof(VAR_5), VAR_3);

 if (FUNC_0(VAR_5))
 {
  VAR_2->Write(VAR_2, FUNC_4("CMD_FILE_NAME_EMPTY"));
  return 0;
 }

 if (FUNC_1(VAR_5) == 0)
 {
  wchar_t VAR_6[VAR_1];

  FUNC_2(VAR_6, sizeof(VAR_6), FUNC_4("CMD_FILE_NOT_FOUND"), VAR_5);
  VAR_2->Write(VAR_2, VAR_6);

  return 0;
 }

 return 1;
}
