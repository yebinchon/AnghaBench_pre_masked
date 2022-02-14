
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int set ;
struct TYPE_8__ {scalar_t__ Port; int Hostname; int SaveType; } ;
struct TYPE_9__ {int SyslogLock; int Syslog; TYPE_1__ SyslogSetting; } ;
typedef TYPE_1__ SYSLOG_SETTING ;
typedef TYPE_2__ SERVER ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,int) ;

void FUNC_6(SERVER *VAR_1, SYSLOG_SETTING *VAR_2)
{
 SYSLOG_SETTING VAR_3;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 FUNC_5(&VAR_3, sizeof(VAR_3));
 FUNC_0(&VAR_3, VAR_2, sizeof(SYSLOG_SETTING));

 if (FUNC_1(VAR_3.Hostname) || VAR_3.Port == 0)
 {
  VAR_3.SaveType = VAR_0;
 }

 FUNC_2(VAR_1->SyslogLock);
 {
  FUNC_0(&VAR_1->SyslogSetting, &VAR_3, sizeof(SYSLOG_SETTING));

  FUNC_3(VAR_1->Syslog, VAR_3.Hostname, VAR_3.Port);
 }
 FUNC_4(VAR_1->SyslogLock);
}
