
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp ;
typedef int UINT ;
struct TYPE_5__ {int (* Write ) (TYPE_1__*,int ) ;} ;
typedef TYPE_1__ CONSOLE ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int *,int *) ;
 int FUNC_2 (char*,int,int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;

bool FUNC_6(CONSOLE *VAR_1, wchar_t *VAR_2, void *VAR_3)
{
 char VAR_4[VAR_0];
 UINT VAR_5, VAR_6;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }

 FUNC_2(VAR_4, sizeof(VAR_4), VAR_2);

 if (FUNC_1(VAR_4, &VAR_5, &VAR_6) == 0)
 {
  VAR_1->Write(VAR_1, FUNC_3("CMD_PARSE_IP_SUBNET_ERROR_1"));
  return 0;
 }

 if (FUNC_0(VAR_5, VAR_6) == 0)
 {
  VAR_1->Write(VAR_1, FUNC_3("CMD_PARSE_IP_SUBNET_ERROR_2"));
  return 0;
 }

 return 1;
}
