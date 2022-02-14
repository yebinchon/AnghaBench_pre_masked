
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int cmdline ;
typedef scalar_t__ UINT ;
struct TYPE_9__ {int DummyMark; int DummyDestIP; int DummySrcIp; int Chain; int ConditionAndArgs; } ;
struct TYPE_8__ {int EntryList; int SeedHash; } ;
typedef TYPE_1__ IPTABLES_STATE ;
typedef TYPE_2__ IPTABLES_ENTRY ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*,int,char*,int ,int ,...) ;
 int FUNC_4 (int ,TYPE_2__*,int) ;
 scalar_t__ FUNC_5 (int ,int *,int *,int ) ;
 scalar_t__ FUNC_6 () ;
 TYPE_2__* FUNC_7 (int ,scalar_t__) ;
 scalar_t__ FUNC_8 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,void*,scalar_t__) ;
 int FUNC_11 (int ,int,char*) ;
 void* FUNC_12 (int) ;
 int FUNC_13 (char*) ;

IPTABLES_STATE *FUNC_14(void *VAR_3, UINT VAR_4)
{
 IPTABLES_STATE *VAR_5 = ((void*)0);
 bool VAR_6 = 0;

 if (FUNC_6())
 {
  IPTABLES_ENTRY *VAR_7;
  UINT VAR_8;

  VAR_5 = FUNC_12(sizeof(IPTABLES_STATE));

  VAR_5->EntryList = FUNC_9(((void*)0));

  FUNC_10(VAR_5->SeedHash, VAR_3, VAR_4);


  VAR_7 = FUNC_12(sizeof(IPTABLES_ENTRY));
  FUNC_4(VAR_5->SeedHash, VAR_7, 0);
  FUNC_11(VAR_7->Chain, sizeof(VAR_7->Chain), "OUTPUT");
  FUNC_3(VAR_7->ConditionAndArgs, sizeof(VAR_7->ConditionAndArgs),
   "-p tcp --tcp-flags RST RST --sport %u:%u ! -s %r/32 ! -d %r/32 -m connmark ! --mark 0x%x -j DROP",
   VAR_2, VAR_1,
   &VAR_7->DummySrcIp, &VAR_7->DummyDestIP, VAR_7->DummyMark);
  FUNC_0(VAR_5->EntryList, VAR_7);

  VAR_7 = FUNC_12(sizeof(IPTABLES_ENTRY));
  FUNC_4(VAR_5->SeedHash, VAR_7, 1);
  FUNC_11(VAR_7->Chain, sizeof(VAR_7->Chain), "OUTPUT");
  FUNC_3(VAR_7->ConditionAndArgs, sizeof(VAR_7->ConditionAndArgs),
   "-p icmp --icmp-type 3/3 ! -s %r/32 ! -d %r/32 -m connmark ! --mark 0x%x -j DROP",
   VAR_7->DummySrcIp, VAR_7->DummyDestIP, VAR_7->DummyMark);
  FUNC_0(VAR_5->EntryList, VAR_7);

  VAR_6 = 1;


  for (VAR_8 = 0; VAR_8 < FUNC_8(VAR_5->EntryList);VAR_8++)
  {
   UINT VAR_9;
   IPTABLES_ENTRY *VAR_10 = FUNC_7(VAR_5->EntryList, VAR_8);

   for (VAR_9 = 0;VAR_9 < 100;VAR_9++)
   {
    if (FUNC_5(VAR_10->Chain, &VAR_10->DummySrcIp, &VAR_10->DummyDestIP, VAR_10->DummyMark) != 0)
    {
     char VAR_11[VAR_0];

     FUNC_3(VAR_11, sizeof(VAR_11),
      "iptables -D %s %s",
      VAR_10->Chain, VAR_10->ConditionAndArgs);

     FUNC_13(VAR_11);
    }
    else
    {
     break;
    }
   }

   if (FUNC_5(VAR_10->Chain, &VAR_10->DummySrcIp, &VAR_10->DummyDestIP, VAR_10->DummyMark) == 0)
   {
    char VAR_12[VAR_0];

    FUNC_3(VAR_12, sizeof(VAR_12),
     "iptables -I %s %s",
     VAR_10->Chain, VAR_10->ConditionAndArgs);

    FUNC_13(VAR_12);

    if (FUNC_5(VAR_10->Chain, &VAR_10->DummySrcIp, &VAR_10->DummyDestIP, VAR_10->DummyMark) == 0)
    {
     FUNC_1("Run \"%s\" failed.\n", VAR_12);
     VAR_6 = 0;
     break;
    }
    else
    {
     FUNC_1("Run \"%s\" ok.\n", VAR_12);
    }
   }
  }
 }

 if (VAR_6 == 0)
 {
  FUNC_2(VAR_5);
  VAR_5 = ((void*)0);
 }

 return VAR_5;
}
