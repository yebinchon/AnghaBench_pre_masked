
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int cmdline ;
typedef scalar_t__ UINT ;
struct TYPE_7__ {int ConditionAndArgs; int Chain; int DummyMark; int DummyDestIP; int DummySrcIp; } ;
struct TYPE_6__ {int EntryList; } ;
typedef TYPE_1__ IPTABLES_STATE ;
typedef TYPE_2__ IPTABLES_ENTRY ;


 int FUNC_0 (char*,int,char*,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,int *,int *,int ) ;
 TYPE_2__* FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_0 ;
 int FUNC_5 (char*) ;

void FUNC_6(IPTABLES_STATE *VAR_1)
{
 UINT VAR_2;
 if (VAR_1 == ((void*)0))
 {
  return;
 }


 for (VAR_2 = 0; VAR_2 < FUNC_4(VAR_1->EntryList);VAR_2++)
 {
  IPTABLES_ENTRY *VAR_3 = FUNC_3(VAR_1->EntryList, VAR_2);
  UINT VAR_4;

  for (VAR_4 = 0;VAR_4 < 100;VAR_4++)
  {
   if (FUNC_2(VAR_3->Chain, &VAR_3->DummySrcIp, &VAR_3->DummyDestIP, VAR_3->DummyMark) != 0)
   {
    char VAR_5[VAR_0];

    FUNC_0(VAR_5, sizeof(VAR_5),
     "iptables -D %s %s",
     VAR_3->Chain, VAR_3->ConditionAndArgs);

    FUNC_5(VAR_5);
   }
   else
   {
    break;
   }
  }
 }

 FUNC_1(VAR_1);
}
