
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_7__ {int ServerAdmin; int * Server; } ;
struct TYPE_6__ {scalar_t__ SaveType; scalar_t__ Port; int Hostname; } ;
typedef TYPE_1__ SYSLOG_SETTING ;
typedef int SERVER ;
typedef TYPE_2__ ADMIN ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int ,int,char*) ;

UINT FUNC_2(ADMIN *VAR_2, SYSLOG_SETTING *VAR_3)
{
 SERVER *VAR_4 = VAR_2->Server;

 FUNC_0(VAR_4, VAR_3);

 if (VAR_2->ServerAdmin == 0)
 {

  if (VAR_3->SaveType == VAR_1)
  {
   FUNC_1(VAR_3->Hostname, sizeof(VAR_3->Hostname), "");
   VAR_3->Port = 0;
  }
  else
  {
   FUNC_1(VAR_3->Hostname, sizeof(VAR_3->Hostname), "Secret");
   VAR_3->Port = 0;
  }
 }

 return VAR_0;
}
