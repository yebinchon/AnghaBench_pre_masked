
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
typedef scalar_t__ UINT ;
struct TYPE_23__ {scalar_t__ num_item; } ;
struct TYPE_22__ {int HubList; } ;
struct TYPE_21__ {int Halting; TYPE_8__* TaskQueue; int TaskPostEvent; int HubList; } ;
struct TYPE_20__ {int CompleteEvent; int * Response; int * Request; } ;
struct TYPE_19__ {int Offline; scalar_t__ Type; int Name; } ;
struct TYPE_18__ {int DynamicHub; int Name; TYPE_5__* FarmMember; } ;
struct TYPE_17__ {scalar_t__ Halt; TYPE_6__* Cedar; } ;
typedef int SOCK ;
typedef TYPE_1__ SERVER ;
typedef int PACK ;
typedef TYPE_2__ HUB_LIST ;
typedef TYPE_3__ HUB ;
typedef TYPE_4__ FARM_TASK ;
typedef TYPE_5__ FARM_MEMBER ;
typedef TYPE_6__ CEDAR ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 TYPE_4__* FUNC_4 (TYPE_8__*) ;
 scalar_t__ VAR_1 ;
 int * FUNC_5 (int *) ;
 int * FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int *) ;
 TYPE_3__* FUNC_8 (int ,scalar_t__) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_8__*) ;
 int * FUNC_12 () ;
 int FUNC_13 (int *,char*,char*) ;
 int VAR_2 ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *,TYPE_3__*) ;
 int FUNC_16 (int ,int,int ) ;
 scalar_t__ FUNC_17 () ;
 int FUNC_18 (int ) ;
 int FUNC_19 (TYPE_8__*) ;
 int FUNC_20 (int ,int) ;
 TYPE_2__* FUNC_21 (int) ;

void FUNC_22(SERVER *VAR_3, SOCK *VAR_4, FARM_MEMBER *VAR_5)
{
 UINT VAR_6 = VAR_2 / 2;
 bool VAR_7 = 0;
 UINT VAR_8;
 CEDAR *VAR_9;

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
 {
  FUNC_1("SiFarmServMain Failed.\n");
  return;
 }

 FUNC_1("SiFarmServMain Started.\n");

 VAR_9 = VAR_3->Cedar;



 FUNC_10(VAR_9->HubList);
 {
  for (VAR_8 = 0;VAR_8 < FUNC_9(VAR_9->HubList);VAR_8++)
  {
   HUB *VAR_10 = FUNC_8(VAR_9->HubList, VAR_8);
   if (VAR_10->Offline == 0)
   {
    if (VAR_10->Type == VAR_1)
    {
     PACK *VAR_11;
     HUB_LIST *VAR_12;
     VAR_11 = FUNC_12();
     FUNC_15(VAR_11, VAR_10);
     FUNC_13(VAR_11, "taskname", "createhub");
     FUNC_7(VAR_4, VAR_11);
     FUNC_3(VAR_11);
     VAR_11 = FUNC_5(VAR_4);
     FUNC_3(VAR_11);

     VAR_11 = FUNC_12();
     FUNC_15(VAR_11, VAR_10);
     FUNC_13(VAR_11, "taskname", "updatehub");
     FUNC_7(VAR_4, VAR_11);
     FUNC_3(VAR_11);
     VAR_11 = FUNC_5(VAR_4);
     FUNC_3(VAR_11);

     VAR_12 = FUNC_21(sizeof(HUB_LIST));
     VAR_12->DynamicHub = 0;
     VAR_12->FarmMember = VAR_5;
     FUNC_16(VAR_12->Name, sizeof(VAR_12->Name), VAR_10->Name);
     FUNC_10(VAR_5->HubList);
     {
      FUNC_0(VAR_5->HubList, VAR_12);
     }
     FUNC_18(VAR_5->HubList);
    }
   }
  }
 }
 FUNC_18(VAR_9->HubList);

 FUNC_1("SiFarmServMain: while (true)\n");

 while (1)
 {
  FARM_TASK *VAR_13;
  UINT64 VAR_14;

  do
  {

   FUNC_11(VAR_5->TaskQueue);
   {
    VAR_13 = FUNC_4(VAR_5->TaskQueue);
   }
   FUNC_19(VAR_5->TaskQueue);

   if (VAR_13 != ((void*)0))
   {

    PACK *VAR_15 = VAR_13->Request;
    bool VAR_16;


    VAR_16 = FUNC_7(VAR_4, VAR_15);
    VAR_7 = 0;

    if (VAR_16 == 0)
    {


     FUNC_14(VAR_13->CompleteEvent);
     goto DISCONNECTED;
    }


    VAR_15 = FUNC_6(VAR_4, VAR_0);

    VAR_13->Response = VAR_15;
    FUNC_14(VAR_13->CompleteEvent);

    if (VAR_15 == ((void*)0))
    {

     FUNC_2(VAR_4);
     goto DISCONNECTED;
    }
   }
  }
  while (VAR_13 != ((void*)0));

  if (VAR_7)
  {

   PACK *VAR_17;
   bool VAR_18;
   VAR_17 = FUNC_12();
   FUNC_13(VAR_17, "taskname", "noop");

   VAR_18 = FUNC_7(VAR_4, VAR_17);
   FUNC_3(VAR_17);

   if (VAR_18 == 0)
   {
    goto DISCONNECTED;
   }

   VAR_17 = FUNC_5(VAR_4);
   if (VAR_17 == ((void*)0))
   {
    goto DISCONNECTED;
   }

   FUNC_3(VAR_17);
  }

  VAR_14 = FUNC_17();

  while (1)
  {
   bool VAR_19;
   if ((VAR_14 + VAR_6) <= FUNC_17())
   {
    break;
   }

   FUNC_20(VAR_5->TaskPostEvent, 250);

   VAR_19 = 0;
   FUNC_11(VAR_5->TaskQueue);
   {
    if (VAR_5->TaskQueue->num_item != 0)
    {
     VAR_19 = 1;
    }
   }
   FUNC_19(VAR_5->TaskQueue);

   if (VAR_19 || VAR_5->Halting || VAR_3->Halt)
   {
    break;
   }
  }
  VAR_7 = 1;
 }

DISCONNECTED:

 FUNC_1("SiFarmServMain: DISCONNECTED\n");

 VAR_5->Halting = 1;

 FUNC_11(VAR_5->TaskQueue);
 {
  FARM_TASK *VAR_20;

  while ((VAR_20 = FUNC_4(VAR_5->TaskQueue)))
  {
   FUNC_14(VAR_20->CompleteEvent);
  }
 }
 FUNC_19(VAR_5->TaskQueue);
}
