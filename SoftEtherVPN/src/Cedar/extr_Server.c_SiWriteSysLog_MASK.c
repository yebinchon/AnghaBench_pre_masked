
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp ;
typedef int machinename ;
typedef int datetime ;
struct TYPE_3__ {int Syslog; scalar_t__ StrictSyslogDatetimeFormat; } ;
typedef int SYSTEMTIME ;
typedef TYPE_1__ SERVER ;


 int FUNC_0 (char*,int *) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int,int *) ;
 int FUNC_3 (char*,int,int *,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int *,int,char*,char*,char*,char*,char*,...) ;

void FUNC_10(SERVER *VAR_3, char *VAR_4, char *VAR_5, wchar_t *VAR_6)
{
 wchar_t VAR_7[1024];
 char VAR_8[VAR_1 + 1];
 char VAR_9[VAR_2];
 SYSTEMTIME VAR_10;

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0) || VAR_6 == ((void*)0))
 {
  return;
 }

 if (FUNC_4(VAR_0) != 0)
 {
  return;
 }


 FUNC_5(VAR_8, sizeof(VAR_8));


 FUNC_7(&VAR_10);
 if(VAR_3->StrictSyslogDatetimeFormat){
  FUNC_3(VAR_9, sizeof(VAR_9), &VAR_10, FUNC_1());
 }else{
  FUNC_2(VAR_9, sizeof(VAR_9), &VAR_10);
 }

 if (FUNC_6(VAR_5) == 0)
 {
  FUNC_9(VAR_7, sizeof(VAR_7), L"[%S/VPN/%S] (%S) <%S>: %s",
   VAR_8, VAR_5, VAR_9, VAR_4, VAR_6);
 }
 else
 {
  FUNC_9(VAR_7, sizeof(VAR_7), L"[%S/VPN] (%S) <%S>: %s",
   VAR_8, VAR_9, VAR_4, VAR_6);
 }

 FUNC_0("Syslog send: %S\n",VAR_7);

 FUNC_8(VAR_3->Syslog, VAR_7);
}
