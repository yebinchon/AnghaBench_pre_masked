
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int wchar_t ;
typedef int buf ;
typedef scalar_t__ UINT ;
struct TYPE_7__ {int * Server; } ;
struct TYPE_5__ {int SaveSecurityLog; } ;
struct TYPE_6__ {int SecurityLogger; int Name; TYPE_1__ LogSetting; TYPE_3__* Cedar; } ;
typedef int SERVER ;
typedef TYPE_2__ HUB ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int ,int *) ;
 int FUNC_3 (int *,int,char*,int ,int *) ;
 int FUNC_4 (TYPE_3__*,int *) ;

void FUNC_5(HUB *VAR_4, wchar_t *VAR_5)
{
 wchar_t VAR_6[VAR_0 * 2];
 UINT VAR_7;
 SERVER *VAR_8;

 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
 {
  return;
 }

 VAR_8 = VAR_4->Cedar->Server;
 VAR_7 = FUNC_1(VAR_8);

 FUNC_3(VAR_6, sizeof(VAR_6), L"[HUB \"%S\"] %s", VAR_4->Name, VAR_5);

 if (VAR_7 == VAR_1)
 {
  FUNC_4(VAR_4->Cedar, VAR_6);
 }

 if (VAR_4->LogSetting.SaveSecurityLog == 0)
 {
  return;
 }

 if (VAR_7 == VAR_3
  || VAR_7 == VAR_2)
 {
  FUNC_2(VAR_8, "SECURITY_LOG", VAR_4->Name, VAR_5);
 }
 else
 {
  FUNC_0(VAR_4->SecurityLogger, VAR_5);
 }
}
