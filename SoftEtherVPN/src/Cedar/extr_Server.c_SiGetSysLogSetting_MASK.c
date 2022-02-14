
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int SyslogSetting; } ;
typedef int SYSLOG_SETTING ;
typedef TYPE_1__ SERVER ;


 int FUNC_0 (int *,int *,int) ;

void FUNC_1(SERVER *VAR_0, SYSLOG_SETTING *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }


 {
  FUNC_0(VAR_1, &VAR_0->SyslogSetting, sizeof(SYSLOG_SETTING));
 }

}
