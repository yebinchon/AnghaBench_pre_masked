
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_6__ {int * (* ReadLine ) (TYPE_1__*,char*,int) ;int (* Write ) (TYPE_1__*,char*) ;} ;
typedef TYPE_1__ CONSOLE ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int * FUNC_3 (TYPE_1__*,char*,int) ;

wchar_t *FUNC_4(CONSOLE *VAR_0, void *VAR_1)
{
 wchar_t *VAR_2;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_0->Write(VAR_0, FUNC_0("CMD_ClusterSettingMember_Prompt_PORT_1"));
 VAR_0->Write(VAR_0, L"");

 VAR_2 = VAR_0->ReadLine(VAR_0, FUNC_0("CMD_ClusterSettingMember_Prompt_PORT_2"), 1);

 return VAR_2;
}
