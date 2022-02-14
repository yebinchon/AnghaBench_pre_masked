
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_18__ {int NumBoundAdapters; int AdapterList; } ;
struct TYPE_17__ {int IsOpenPending; int Ready; int * AdapterHandle; TYPE_3__* Device; int FriendlyName; int AdapterId; scalar_t__ BindingContext; } ;
struct TYPE_16__ {TYPE_4__* Adapter; int FileList; } ;
struct TYPE_14__ {scalar_t__ Buffer; } ;
struct TYPE_15__ {TYPE_1__ String; } ;
typedef TYPE_2__ SL_UNICODE ;
typedef TYPE_3__ SL_DEVICE ;
typedef TYPE_4__ SL_ADAPTER ;
typedef int NDIS_STATUS ;
typedef scalar_t__ NDIS_HANDLE ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,TYPE_4__*) ;
 int FUNC_5 (scalar_t__,int ,int) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int ) ;
 TYPE_3__* FUNC_9 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_10 () ;
 TYPE_2__* FUNC_11 (int ) ;
 int FUNC_12 (TYPE_4__*,int,int ,int ,int) ;
 int FUNC_13 (int ) ;
 TYPE_5__* VAR_3 ;

void FUNC_14(NDIS_HANDLE VAR_4, NDIS_STATUS VAR_5)
{
 SL_ADAPTER *VAR_6 = (SL_ADAPTER *)VAR_4;
 bool VAR_7 = VAR_6->IsOpenPending;
 NDIS_HANDLE VAR_8 = VAR_6->BindingContext;

 if (FUNC_3(VAR_5))
 {

  SL_UNICODE *VAR_9 = FUNC_11(VAR_1);
  SL_UNICODE *VAR_10 = FUNC_11(VAR_2);
  SL_DEVICE *VAR_11;


  FUNC_5(VAR_9->String.Buffer + 8, VAR_6->AdapterId, sizeof(wchar_t) * 46);
  FUNC_5(VAR_10->String.Buffer + 19, VAR_6->AdapterId, sizeof(wchar_t) * 46);

  VAR_11 = FUNC_9(VAR_9, VAR_10);

  if (VAR_11 == ((void*)0))
  {

   FUNC_7(VAR_9);
   FUNC_7(VAR_10);
  }
  else
  {

   VAR_11->FileList = FUNC_10();
  }
  if (VAR_11 != ((void*)0))
  {

   FUNC_12(VAR_6, 0, VAR_0, VAR_6->FriendlyName,
    sizeof(VAR_6->FriendlyName) - 1);

   VAR_11->Adapter = VAR_6;
   VAR_6->Device = VAR_11;


   FUNC_8(VAR_3->AdapterList);
   {
    FUNC_4(VAR_3->AdapterList, VAR_6);
   }
   FUNC_13(VAR_3->AdapterList);
  }
 }
 else
 {

  VAR_6->AdapterHandle = ((void*)0);


  FUNC_6(VAR_6);

  VAR_6 = ((void*)0);
 }

 if (VAR_7)
 {
  FUNC_2(VAR_8, VAR_5);
 }

 if (VAR_6 != ((void*)0))
 {
  VAR_6->Ready = 1;
 }

 if (VAR_7)
 {
  if (FUNC_1(VAR_5))
  {
   FUNC_0(&VAR_3->NumBoundAdapters);
  }
 }
}
