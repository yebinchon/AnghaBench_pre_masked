
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp64 ;
typedef int tmp ;
typedef int suprise ;
typedef scalar_t__ UINT64 ;
typedef scalar_t__ UINT ;
typedef scalar_t__ UCHAR ;
struct TYPE_7__ {int AbnormalTerminated; scalar_t__ end_tick; scalar_t__ RealSpan; scalar_t__ start_tick; scalar_t__* Cancel; scalar_t__ Halt; int Print; int Param; void* ErrorCode; scalar_t__ Span; scalar_t__ session_id; int flag2; int flag1; } ;
struct TYPE_6__ {int Download; int ServerUploadReportReceived; int State; scalar_t__ NextSendRequestReportTick; int HideErrMsg; double Id; int NumBytes; int Sock; } ;
struct TYPE_5__ {int Ok; int SockList; int SockEvent; int StartEvent; TYPE_3__* Ttc; } ;
typedef TYPE_1__ TTC_WORKER ;
typedef TYPE_2__ TTC_SOCK ;
typedef TYPE_3__ TTC ;
typedef int THREAD ;


 void* VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__*) ;
 int VAR_1 ;
 TYPE_2__* FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,scalar_t__*,scalar_t__,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_6 (int ,scalar_t__*,int,int) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (scalar_t__**,scalar_t__*) ;
 int FUNC_9 (int ,int ,int *) ;
 int FUNC_10 (int *,int,int *,double) ;
 int FUNC_11 (scalar_t__*,scalar_t__) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int) ;
 int * FUNC_14 (char*) ;

void FUNC_15(THREAD *VAR_4, void *VAR_5)
{
 TTC_WORKER *VAR_6;
 TTC *VAR_7;
 bool VAR_8 = 0;
 bool VAR_9 = 0;
 UINT64 VAR_10 = 0;
 bool VAR_11;
 wchar_t VAR_12[VAR_2];
 UCHAR *VAR_13, *VAR_14;
 UINT VAR_15;
 UINT64 VAR_16;

 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
 {
  return;
 }

 VAR_6 = (TTC_WORKER *)VAR_5;
 VAR_7 = VAR_6->Ttc;


 FUNC_8(&VAR_13, &VAR_15);
 FUNC_8(&VAR_14, &VAR_15);

 FUNC_4(VAR_4);


 FUNC_12(VAR_6->StartEvent, VAR_1);


 while (1)
 {
  UINT VAR_17;

  if (VAR_8 == 0)
  {
   FUNC_13(VAR_6->SockEvent, 50);
  }

  VAR_8 = 0;

  if (VAR_7->AbnormalTerminated)
  {

   break;
  }

  if (VAR_7->Halt || VAR_7->end_tick <= FUNC_7() || (VAR_7->Cancel != ((void*)0) && (*VAR_7->Cancel)))
  {

   if (VAR_9 == 0)
   {
    if (VAR_7->Halt || (VAR_7->Cancel != ((void*)0) && (*VAR_7->Cancel)))
    {
     if ((VAR_7->flag1++) == 0)
     {

      FUNC_9(VAR_7->Param, VAR_7->Print, FUNC_14("TTC_COMM_USER_CANCEL"));
     }
    }
    else
    {

     if ((VAR_7->flag2++) == 0)
     {
      FUNC_10(VAR_12, sizeof(VAR_12), FUNC_14("TTC_COMM_END"),
       (double)VAR_7->Span / 1000.0);
      FUNC_9(VAR_7->Param, VAR_7->Print, VAR_12);
     }
    }

    if (VAR_7->RealSpan == 0)
    {
     VAR_7->RealSpan = FUNC_7() - VAR_7->start_tick;
    }

    VAR_9 = 1;


    VAR_10 = FUNC_7() + 60000ULL;
   }
  }

  if (VAR_10 != 0)
  {
   bool VAR_18 = 1;


   for (VAR_17 = 0;VAR_17 < FUNC_3(VAR_6->SockList);VAR_17++)
   {
    TTC_SOCK *VAR_19 = FUNC_2(VAR_6->SockList, VAR_17);

    if (VAR_19->Download == 0)
    {
     if (VAR_19->ServerUploadReportReceived == 0)
     {
      VAR_18 = 0;
     }
    }
   }

   if (VAR_18)
   {

    VAR_6->Ok = 1;
    break;
   }
   else
   {
    if (VAR_10 <= FUNC_7())
    {

     VAR_7->AbnormalTerminated = 1;
     VAR_7->ErrorCode = VAR_0;
     break;
    }
   }
  }

  VAR_11 = 0;



  while (VAR_11 == 0)
  {
   VAR_11 = 1;

   for (VAR_17 = 0;VAR_17 < FUNC_3(VAR_6->SockList);VAR_17++)
   {
    UINT VAR_20 = VAR_3;
    TTC_SOCK *VAR_21 = FUNC_2(VAR_6->SockList, VAR_17);
    bool VAR_22 = 0;
    UCHAR VAR_23 = 0;
    UCHAR VAR_24[1 + sizeof(UINT64) + sizeof(UINT64)];

    if (VAR_10 != 0)
    {
     if (VAR_21->State != 3 && VAR_21->State != 4)
     {
      if (VAR_21->Download == 0)
      {
       if (VAR_21->State != 0)
       {
        VAR_21->State = 3;
       }
       else
       {
        VAR_21->ServerUploadReportReceived = 1;
        VAR_21->State = 4;
       }
      }
      else
      {
       VAR_21->State = 4;
      }
     }
    }

    switch (VAR_21->State)
    {
    case 0:


     if (VAR_21->Download)
     {
      VAR_23 = 1;
     }
     else
     {
      VAR_23 = 0;
     }

     VAR_24[0] = VAR_23;
     FUNC_11(VAR_24 + 1, VAR_7->session_id);
     FUNC_11(VAR_24 + sizeof(UINT64) + 1, VAR_7->Span);

     VAR_20 = FUNC_6(VAR_21->Sock, VAR_24, 1 + sizeof(UINT64) + sizeof(UINT64), 0);

     if (VAR_20 != 0 && VAR_20 != VAR_3)
     {
      if (VAR_21->Download)
      {
       VAR_21->State = 1;
      }
      else
      {
       VAR_21->State = 2;
      }
     }
     break;

    case 1:

     VAR_20 = FUNC_5(VAR_21->Sock, VAR_14, VAR_15, 0);
     break;

    case 2:

     VAR_20 = FUNC_6(VAR_21->Sock, VAR_13, VAR_15, 0);
     break;

    case 3:


     if (VAR_21->NextSendRequestReportTick == 0 ||
      (FUNC_7() >= VAR_21->NextSendRequestReportTick))
     {
      UCHAR VAR_25[VAR_2];
      UINT VAR_26;

      VAR_21->NextSendRequestReportTick = FUNC_7() + 200ULL;

      for (VAR_26 = 0;VAR_26 < sizeof(VAR_25);VAR_26++)
      {
       VAR_25[VAR_26] = '!';
      }

      (void)FUNC_6(VAR_21->Sock, VAR_25, sizeof(VAR_25), 0);
     }

     VAR_20 = FUNC_5(VAR_21->Sock, &VAR_16, sizeof(VAR_16), 0);
     if (VAR_20 != 0 && VAR_20 != VAR_3 && VAR_20 == sizeof(VAR_16))
     {
      VAR_21->NumBytes = FUNC_0(VAR_16);

      VAR_21->ServerUploadReportReceived = 1;

      VAR_21->State = 4;
     }
     break;

    case 4:

     if (FUNC_5(VAR_21->Sock, VAR_14, VAR_15, 0) == VAR_3)
     {
      VAR_20 = VAR_3;
     }
     break;
    }

    if (VAR_20 == 0)
    {

     VAR_7->AbnormalTerminated = 1;
     VAR_7->ErrorCode = VAR_0;
     VAR_22 = 1;
     VAR_8 = 0;

     if (VAR_21->HideErrMsg == 0)
     {
      FUNC_10(VAR_12, sizeof(VAR_12), FUNC_14("TTC_COMM_DISCONNECTED"), VAR_21->Id);
      FUNC_9(VAR_7->Param, VAR_7->Print, VAR_12);
      VAR_21->HideErrMsg = 1;
     }
    }
    else if (VAR_20 == VAR_3)
    {

     VAR_22 = 1;
     VAR_8 = 0;
    }
    else
    {
     if (VAR_21->Download)
     {
      VAR_21->NumBytes += (UINT64)VAR_20;
     }
    }

    if (VAR_22 == 0)
    {
     VAR_11 = 0;
    }
   }

   if (VAR_7->Halt || (VAR_7->Cancel != ((void*)0) && (*VAR_7->Cancel)))
   {
    VAR_11 = 1;
    VAR_8 = 1;
   }

   if (VAR_7->end_tick <= FUNC_7())
   {
    VAR_11 = 1;
    VAR_8 = 1;
   }
  }
 }

 FUNC_1(VAR_13);
 FUNC_1(VAR_14);
}
