
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_10__ {int Halting; int FileList; int OpenCloseLock; } ;
struct TYPE_9__ {int NumBoundAdapters; } ;
struct TYPE_8__ {int IsClosePending; TYPE_4__* Device; scalar_t__ UnbindContext; } ;
struct TYPE_7__ {int FinalWakeUp; int Event; } ;
typedef TYPE_1__ SL_FILE ;
typedef TYPE_2__ SL_ADAPTER ;
typedef scalar_t__ NDIS_HANDLE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_1__* FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 TYPE_3__* VAR_0 ;

void FUNC_13(NDIS_HANDLE VAR_1)
{
 SL_ADAPTER *VAR_2 = (SL_ADAPTER *)VAR_1;
 NDIS_HANDLE VAR_3 = VAR_2->UnbindContext;
 bool VAR_4 = VAR_2->IsClosePending;
 UINT VAR_5;

 if (VAR_4)
 {
  FUNC_1(VAR_3);
 }

 for (VAR_5 = 0;VAR_5 < 32;VAR_5++)
 {
  if (VAR_2->Device != ((void*)0))
  {
   VAR_2->Device->Halting = 1;


   while (1)
   {
    UINT VAR_6 = 0;

    FUNC_7(VAR_2->Device->OpenCloseLock);
    {
     FUNC_8(VAR_2->Device->FileList);
     {
      UINT VAR_7;
      VAR_6 = FUNC_3(VAR_2->Device->FileList);

      for (VAR_7 = 0;VAR_7 < VAR_6;VAR_7++)
      {

       SL_FILE *VAR_8 = FUNC_2(VAR_2->Device->FileList, VAR_7);

       if (VAR_8->FinalWakeUp == 0)
       {
        FUNC_9(VAR_8->Event);
        VAR_8->FinalWakeUp = 1;
       }
      }
     }
     FUNC_12(VAR_2->Device->FileList);
    }
    FUNC_11(VAR_2->Device->OpenCloseLock);

    if (VAR_6 == 0)
    {
     break;
    }

    FUNC_10(50);
   }
  }
 }


 if (VAR_2->Device != ((void*)0))
 {

  FUNC_6(VAR_2->Device->FileList);

  FUNC_5(VAR_2->Device);
  VAR_2->Device = ((void*)0);
 }


 FUNC_4(VAR_2);

 if (VAR_4)
 {
  FUNC_0(&VAR_0->NumBoundAdapters);
 }
}
