
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int cmdline ;
typedef scalar_t__ UINT ;
struct TYPE_6__ {int DummyMark; int DummyDestIP; int DummySrcIp; int Chain; int ConditionAndArgs; } ;
struct TYPE_5__ {int HasError; int EntryList; } ;
typedef TYPE_1__ IPTABLES_STATE ;
typedef TYPE_2__ IPTABLES_ENTRY ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,int,char*,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int *,int *,int ) ;
 TYPE_2__* FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_0 ;
 int FUNC_5 (char*) ;

bool FUNC_6(IPTABLES_STATE *VAR_1)
{
 UINT VAR_2;
 bool VAR_3 = 0;
 if (VAR_1 == ((void*)0))
 {
  return 0;
 }

 if (VAR_1->HasError)
 {
  return 0;
 }


 for (VAR_2 = 0; VAR_2 < FUNC_4(VAR_1->EntryList);VAR_2++)
 {
  IPTABLES_ENTRY *VAR_4 = FUNC_3(VAR_1->EntryList, VAR_2);

  if (FUNC_2(VAR_4->Chain, &VAR_4->DummySrcIp, &VAR_4->DummyDestIP, VAR_4->DummyMark) == 0)
  {
   char VAR_5[VAR_0];

   FUNC_1(VAR_5, sizeof(VAR_5),
    "iptables -I %s %s",
    VAR_4->Chain, VAR_4->ConditionAndArgs);

   FUNC_5(VAR_5);

   if (FUNC_2(VAR_4->Chain, &VAR_4->DummySrcIp, &VAR_4->DummyDestIP, VAR_4->DummyMark) == 0)
   {
    FUNC_0("Run \"%s\" failed.\n", VAR_5);
    VAR_1->HasError = 1;
    break;
   }
   else
   {
    FUNC_0("Run \"%s\" ok.\n", VAR_5);
    VAR_3 = 1;
   }
  }
 }

 return VAR_3;
}
