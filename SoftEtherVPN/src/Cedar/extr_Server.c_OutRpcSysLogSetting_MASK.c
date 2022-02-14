
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Hostname; int Port; int SaveType; } ;
typedef TYPE_1__ SYSLOG_SETTING ;
typedef int PACK ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int ) ;

void FUNC_2(PACK *VAR_0, SYSLOG_SETTING *VAR_1)
{

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_0, "SaveType", VAR_1->SaveType);
 FUNC_0(VAR_0, "Port", VAR_1->Port);
 FUNC_1(VAR_0, "Hostname", VAR_1->Hostname);
}
