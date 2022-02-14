
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int name ;
typedef int hubname ;
struct TYPE_8__ {int Cedar; } ;
struct TYPE_7__ {int BridgeMode; int LinkModeServer; int SecureNATMode; } ;
typedef TYPE_1__ SESSION ;
typedef TYPE_2__ SERVER ;
typedef int PACK ;
typedef int HUB ;


 int * FUNC_0 (int ,char*) ;
 TYPE_1__* FUNC_1 (int *,char*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,char*,char*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ) ;

void FUNC_8(SERVER *VAR_2, PACK *VAR_3)
{
 char VAR_4[VAR_1 + 1];
 char VAR_5[VAR_0 + 1];
 HUB *VAR_6;
 SESSION *VAR_7;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }

 if (FUNC_3(VAR_3, "HubName", VAR_5, sizeof(VAR_5)) == 0)
 {
  return;
 }
 if (FUNC_3(VAR_3, "SessionName", VAR_4, sizeof(VAR_4)) == 0)
 {
  return;
 }

 FUNC_2(VAR_2->Cedar);
 {
  VAR_6 = FUNC_0(VAR_2->Cedar, VAR_5);
 }
 FUNC_7(VAR_2->Cedar);

 if (VAR_6 == ((void*)0))
 {
  return;
 }

 VAR_7 = FUNC_1(VAR_6, VAR_4);

 if (VAR_7 != ((void*)0))
 {
  if (VAR_7->BridgeMode == 0 && VAR_7->LinkModeServer == 0 && VAR_7->SecureNATMode == 0)
  {
   FUNC_6(VAR_7);
  }
  FUNC_5(VAR_7);
 }

 FUNC_4(VAR_6);
}
