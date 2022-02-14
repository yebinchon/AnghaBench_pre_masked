
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp ;
typedef int UINT ;
struct TYPE_4__ {int (* Write ) (TYPE_1__*,int ) ;} ;
typedef TYPE_1__ CONSOLE ;


 int VAR_0 ;
 int FUNC_0 (char*,int *,int *) ;
 int FUNC_1 (char*,int,int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*,int ) ;

bool FUNC_4(CONSOLE *VAR_1, wchar_t *VAR_2, void *VAR_3)
{
 char VAR_4[VAR_0];
 UINT VAR_5, VAR_6;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }

 FUNC_1(VAR_4, sizeof(VAR_4), VAR_2);

 if (FUNC_0(VAR_4, &VAR_5, &VAR_6) == 0)
 {
  VAR_1->Write(VAR_1, FUNC_2("CMD_PARSE_IP_MASK_ERROR_1"));
  return 0;
 }

 return 1;
}
