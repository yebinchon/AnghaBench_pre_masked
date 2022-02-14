
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Hostname; void* Port; void* SaveType; } ;
typedef TYPE_1__ SYSLOG_SETTING ;
typedef int PACK ;


 void* FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int ,int) ;
 int FUNC_2 (TYPE_1__*,int) ;

void FUNC_3(SYSLOG_SETTING *VAR_0, PACK *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_2(VAR_0, sizeof(SYSLOG_SETTING));
 VAR_0->SaveType = FUNC_0(VAR_1, "SaveType");
 VAR_0->Port = FUNC_0(VAR_1, "Port");
 FUNC_1(VAR_1, "Hostname", VAR_0->Hostname, sizeof(VAR_0->Hostname));
}
