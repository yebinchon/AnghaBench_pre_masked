
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int hubname ;
typedef scalar_t__ UINT ;
struct TYPE_7__ {int IpTable; } ;
struct TYPE_6__ {int Cedar; } ;
typedef TYPE_1__ SERVER ;
typedef int PACK ;
typedef int IP_TABLE_ENTRY ;
typedef TYPE_2__ HUB ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int ,void*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,char*,char*,int) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

void FUNC_11(SERVER *VAR_1, PACK *VAR_2)
{
 UINT VAR_3;
 char VAR_4[VAR_0 + 1];
 HUB *VAR_5;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 if (FUNC_7(VAR_2, "HubName", VAR_4, sizeof(VAR_4)) == 0)
 {
  return;
 }
 VAR_3 = FUNC_6(VAR_2, "Key");

 FUNC_4(VAR_1->Cedar);
 {
  VAR_5 = FUNC_2(VAR_1->Cedar, VAR_4);
 }
 FUNC_9(VAR_1->Cedar);

 if (VAR_5 == ((void*)0))
 {
  return;
 }

 FUNC_5(VAR_5->IpTable);
 {
  if (FUNC_3(VAR_5->IpTable, (void *)VAR_3))
  {
   IP_TABLE_ENTRY *VAR_6 = (IP_TABLE_ENTRY *)VAR_3;
   FUNC_0(VAR_5->IpTable, VAR_6);
   FUNC_1(VAR_6);
  }
 }
 FUNC_10(VAR_5->IpTable);

 FUNC_8(VAR_5);
}
