
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int tmp ;
typedef int file_name ;
typedef int current_file_name ;
typedef scalar_t__ UINT64 ;
typedef int UINT ;
struct TYPE_20__ {int num_item; } ;
struct TYPE_19__ {scalar_t__ Size; int Buf; } ;
struct TYPE_18__ {scalar_t__ CurrentFilePointer; int log_number_incremented; int CurrentLogNumber; int DirName; int SwitchType; int Prefix; int FlushEvent; TYPE_6__* RecordQueue; } ;
struct TYPE_17__ {int Tick; } ;
typedef TYPE_1__ RECORD ;
typedef TYPE_2__ LOG ;
typedef int IO ;
typedef TYPE_3__ BUF ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int) ;
 int * FUNC_3 (char*) ;
 int * FUNC_4 (char*,int) ;
 int FUNC_5 (int *,int ,int ) ;
 void* FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,scalar_t__) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 () ;
 TYPE_1__* FUNC_10 (TYPE_6__*) ;
 int FUNC_11 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_6__*) ;
 int VAR_2 ;
 int FUNC_14 (int ) ;
 int FUNC_15 (TYPE_2__*,char*,int,int ,int ,int ,int ,int,char*) ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int VAR_3 ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int) ;
 scalar_t__ FUNC_20 (char*,char*) ;
 int FUNC_21 (char*,int,char*) ;
 int FUNC_22 (TYPE_2__*) ;
 int FUNC_23 (TYPE_6__*) ;
 int FUNC_24 (int ,int) ;
 int FUNC_25 (TYPE_3__*,TYPE_1__*) ;

__attribute__((used)) static bool FUNC_26(LOG *VAR_4, BUF *VAR_5, IO **VAR_6, bool *VAR_7, char *VAR_8, char *VAR_9)
{
 RECORD *VAR_10;
 char VAR_11[VAR_2];
 UINT VAR_12;


 FUNC_13(VAR_4->RecordQueue);
 {
  VAR_10 = FUNC_10(VAR_4->RecordQueue);
  VAR_12 = VAR_4->RecordQueue->num_item;
 }
 FUNC_23(VAR_4->RecordQueue);
 if (VAR_5->Size > FUNC_9())
 {

  FUNC_0(VAR_5);
 }

 if (VAR_5->Size >= VAR_0)
 {

  if (*VAR_6 != ((void*)0))
  {
   if ((VAR_4->CurrentFilePointer + (UINT64)VAR_5->Size) > FUNC_9())
   {
    if (VAR_4->log_number_incremented == 0)
    {
     VAR_4->CurrentLogNumber++;
     VAR_4->log_number_incremented = 1;
    }
   }
   else
   {
    if (FUNC_7(*VAR_6, VAR_5->Buf, VAR_5->Size) == 0)
    {
     FUNC_2(*VAR_6, 1);


     FUNC_0(VAR_5);
     *VAR_6 = ((void*)0);
    }
    else
    {
     VAR_4->CurrentFilePointer += (UINT64)VAR_5->Size;
     FUNC_0(VAR_5);
    }
   }
  }
 }

 if (VAR_10 == ((void*)0))
 {
  if (VAR_5->Size != 0)
  {

   if (*VAR_6 != ((void*)0))
   {
    if ((VAR_4->CurrentFilePointer + (UINT64)VAR_5->Size) > FUNC_9())
    {
     if (VAR_4->log_number_incremented == 0)
     {
      VAR_4->CurrentLogNumber++;
      VAR_4->log_number_incremented = 1;
     }
    }
    else
    {
     if (FUNC_7(*VAR_6, VAR_5->Buf, VAR_5->Size) == 0)
     {
      FUNC_2(*VAR_6, 1);


      FUNC_0(VAR_5);
      *VAR_6 = ((void*)0);
     }
     else
     {
      VAR_4->CurrentFilePointer += (UINT64)VAR_5->Size;
      FUNC_0(VAR_5);
     }
    }
   }
  }

  FUNC_18(VAR_4->FlushEvent);
  return 0;
 }


 FUNC_12(VAR_4);
 {
  *VAR_7 = FUNC_15(VAR_4, VAR_11, sizeof(VAR_11),
   VAR_4->DirName, VAR_4->Prefix, VAR_10->Tick, VAR_4->SwitchType, VAR_4->CurrentLogNumber, VAR_8);

  if (*VAR_7)
  {
   UINT VAR_13;

   VAR_4->CurrentLogNumber = 0;
   FUNC_15(VAR_4, VAR_11, sizeof(VAR_11),
    VAR_4->DirName, VAR_4->Prefix, VAR_10->Tick, VAR_4->SwitchType, 0, VAR_8);
   for (VAR_13 = 0;;VAR_13++)
   {
    char VAR_14[VAR_2];
    FUNC_15(VAR_4, VAR_14, sizeof(VAR_14),
     VAR_4->DirName, VAR_4->Prefix, VAR_10->Tick, VAR_4->SwitchType, VAR_13, VAR_8);

    if (FUNC_11(VAR_14) == 0)
    {
     break;
    }
    FUNC_21(VAR_11, sizeof(VAR_11), VAR_14);
    VAR_4->CurrentLogNumber = VAR_13;
   }
  }
 }
 FUNC_22(VAR_4);

 if (*VAR_6 != ((void*)0))
 {
  if (FUNC_20(VAR_9, VAR_11) != 0)
  {



   if (*VAR_6 != ((void*)0))
   {
    if (*VAR_7)
    {
     if ((VAR_4->CurrentFilePointer + (UINT64)VAR_5->Size) <= FUNC_9())
     {
      if (FUNC_7(*VAR_6, VAR_5->Buf, VAR_5->Size) == 0)
      {
       FUNC_2(*VAR_6, 1);
       FUNC_0(VAR_5);
       *VAR_6 = ((void*)0);
      }
      else
      {
       VAR_4->CurrentFilePointer += (UINT64)VAR_5->Size;
       FUNC_0(VAR_5);
      }
     }
    }

    FUNC_2(*VAR_6, 1);
   }

   VAR_4->log_number_incremented = 0;


   FUNC_21(VAR_9, sizeof(VAR_9), VAR_11);
   *VAR_6 = FUNC_4(VAR_11, 1);
   if (*VAR_6 == ((void*)0))
   {

    FUNC_12(VAR_4);
    {
     FUNC_14(VAR_4->DirName);




    }
    FUNC_22(VAR_4);
    *VAR_6 = FUNC_3(VAR_11);
    VAR_4->CurrentFilePointer = 0;
   }
   else
   {

    VAR_4->CurrentFilePointer = FUNC_6(*VAR_6);
    FUNC_5(*VAR_6, VAR_3, 0);
   }
  }
 }
 else
 {

  FUNC_21(VAR_9, sizeof(VAR_9), VAR_11);
  *VAR_6 = FUNC_4(VAR_11, 1);
  if (*VAR_6 == ((void*)0))
  {

   FUNC_12(VAR_4);
   {
    FUNC_14(VAR_4->DirName);



   }
   FUNC_22(VAR_4);
   *VAR_6 = FUNC_3(VAR_11);
   VAR_4->CurrentFilePointer = 0;
   if (*VAR_6 == ((void*)0))
   {

    FUNC_19(30);
   }
  }
  else
  {

   VAR_4->CurrentFilePointer = FUNC_6(*VAR_6);
   FUNC_5(*VAR_6, VAR_3, 0);
  }

  VAR_4->log_number_incremented = 0;
 }


 FUNC_25(VAR_5, VAR_10);


 FUNC_8(VAR_10);

 return (*VAR_6 != ((void*)0));
}
