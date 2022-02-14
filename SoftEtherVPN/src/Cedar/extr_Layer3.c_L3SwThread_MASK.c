
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_17__ {scalar_t__ Halt; } ;
struct TYPE_16__ {int HubList; } ;
struct TYPE_15__ {scalar_t__ Type; scalar_t__ Offline; } ;
struct TYPE_14__ {TYPE_9__* Session; TYPE_1__* Hub; int HubName; } ;
struct TYPE_13__ {int Active; int Halt; int Online; int Name; TYPE_5__* Cedar; int lock; int * IfList; } ;
struct TYPE_12__ {int Offline; } ;
typedef int THREAD ;
typedef int SESSION ;
typedef int LIST ;
typedef TYPE_2__ L3SW ;
typedef TYPE_3__ L3IF ;
typedef TYPE_4__ HUB ;


 TYPE_4__* FUNC_0 (TYPE_5__*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,TYPE_9__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 void* FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_5__*,char*,int ) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;

void FUNC_17(THREAD *VAR_1, void *VAR_2)
{
 L3SW *VAR_3;
 bool VAR_4 = 0;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 VAR_3 = (L3SW *)VAR_2;

 VAR_3->Active = 1;

 FUNC_9(VAR_1);


 FUNC_12(VAR_3->Cedar, "L3_SWITCH_START", VAR_3->Name);

 while (VAR_3->Halt == 0)
 {
  if (VAR_3->Online == 0)
  {


   FUNC_7(VAR_3->Cedar->HubList);
   {
    FUNC_6(VAR_3->lock);
    {
     UINT VAR_5;
     UINT VAR_6 = 0;
     bool VAR_7 = 1;
     if (FUNC_5(VAR_3->IfList) == 0)
     {

      VAR_7 = 0;
     }
     for (VAR_5 = 0;VAR_5 < FUNC_5(VAR_3->IfList);VAR_5++)
     {
      L3IF *VAR_8 = FUNC_4(VAR_3->IfList, VAR_5);
      HUB *VAR_9 = FUNC_0(VAR_3->Cedar, VAR_8->HubName);

      if (VAR_9 != ((void*)0))
      {
       if (VAR_9->Offline || VAR_9->Type == VAR_0)
       {
        VAR_7 = 0;
       }
       else
       {
        VAR_6++;
       }
       FUNC_10(VAR_9);
      }
      else
      {
       VAR_7 = 0;
      }
     }

     if (VAR_7 && VAR_6 >= 1)
     {


      FUNC_12(VAR_3->Cedar, "L3_SWITCH_ONLINE", VAR_3->Name);
      FUNC_3(VAR_3);
      VAR_3->Online = 1;
     }
    }
    FUNC_15(VAR_3->lock);
   }
   FUNC_16(VAR_3->Cedar->HubList);
  }
  else
  {

   UINT VAR_10;
   bool VAR_11 = 0;
   LIST *VAR_12 = ((void*)0);

SHUTDOWN:

   FUNC_6(VAR_3->lock);
   {
    for (VAR_10 = 0;VAR_10 < FUNC_5(VAR_3->IfList);VAR_10++)
    {
     L3IF *VAR_13 = FUNC_4(VAR_3->IfList, VAR_10);
     if (VAR_13->Session->Halt || VAR_13->Hub->Offline != 0)
     {
      VAR_11 = 1;
      break;
     }
    }

    if (VAR_4)
    {
     VAR_11 = 1;
    }

    if (VAR_11)
    {
     FUNC_12(VAR_3->Cedar, "L3_SWITCH_OFFLINE", VAR_3->Name);
     VAR_12 = FUNC_8(((void*)0));

     for (VAR_10 = 0;VAR_10 < FUNC_5(VAR_3->IfList);VAR_10++)
     {
      L3IF *VAR_14 = FUNC_4(VAR_3->IfList, VAR_10);
      FUNC_1(VAR_12, VAR_14->Session);
     }


     VAR_3->Online = 0;
    }
   }
   FUNC_15(VAR_3->lock);

   if (VAR_12 != ((void*)0))
   {
    UINT VAR_15;
    for (VAR_15 = 0;VAR_15 < FUNC_5(VAR_12);VAR_15++)
    {
     SESSION *VAR_16 = FUNC_4(VAR_12, VAR_15);
     FUNC_14(VAR_16);
    }
    FUNC_2(VAR_3);
    FUNC_11(VAR_12);
    VAR_12 = ((void*)0);
   }
  }

  FUNC_13(50);
 }

 if (VAR_3->Online != 0)
 {
  VAR_4 = 1;
  goto SHUTDOWN;
 }


 FUNC_12(VAR_3->Cedar, "L3_SWITCH_STOP", VAR_3->Name);
}
