
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_26__ {int ServerAdmin; char* HubName; int * LogFileList; TYPE_1__* Server; } ;
struct TYPE_25__ {int Me; int hostname; } ;
struct TYPE_24__ {int ServerName; int Path; int UpdatedTime; int FileSize; } ;
struct TYPE_23__ {scalar_t__ NumItem; TYPE_2__* Items; } ;
struct TYPE_22__ {int ServerName; int FilePath; int UpdatedTime; int FileSize; } ;
struct TYPE_21__ {scalar_t__ ServerType; int * FarmMemberList; int * Cedar; } ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ RPC_ENUM_LOG_FILE_ITEM ;
typedef TYPE_3__ RPC_ENUM_LOG_FILE ;
typedef TYPE_4__ LOG_FILE ;
typedef int LIST ;
typedef int HUB ;
typedef TYPE_5__ FARM_MEMBER ;
typedef int CEDAR ;
typedef TYPE_6__ ADMIN ;


 int FUNC_0 (int *,TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,TYPE_3__*) ;
 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*) ;
 int * FUNC_5 (int *,char*) ;
 scalar_t__ FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,TYPE_4__*) ;
 void* FUNC_8 (int *,scalar_t__) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 void* FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_14 (TYPE_1__*,TYPE_5__*,TYPE_3__*,char*) ;
 int FUNC_15 (TYPE_1__*,char*,TYPE_3__*) ;
 int FUNC_16 (int ,int,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (TYPE_3__*,int) ;
 void* FUNC_19 (int) ;

UINT FUNC_20(ADMIN *VAR_5, RPC_ENUM_LOG_FILE *VAR_6)
{
 SERVER *VAR_7 = VAR_5->Server;
 CEDAR *VAR_8 = VAR_7->Cedar;
 UINT VAR_9;
 bool VAR_10 = 0;

 HUB *VAR_11;

 if (VAR_5->ServerAdmin == 0)
 {
  VAR_11 = FUNC_5(VAR_8, VAR_5->HubName);

  if (VAR_5->ServerAdmin == 0 && FUNC_6(VAR_11, "no_read_log_file") != 0)
  {
   VAR_10 = 1;
  }

  FUNC_12(VAR_11);
 }
 else
 {
  if (VAR_7->ServerType == VAR_4)
  {


   return VAR_2;
  }
 }

 if (VAR_10)
 {
  return VAR_1;
 }

 FUNC_4(VAR_6);
 FUNC_18(VAR_6, sizeof(RPC_ENUM_LOG_FILE));


 FUNC_15(VAR_7, VAR_5->ServerAdmin ? ((void*)0) : VAR_5->HubName, VAR_6);

 if (VAR_7->ServerType == VAR_4)
 {
  UINT VAR_12;
  LIST *VAR_13 = FUNC_11(((void*)0));

  FUNC_10(VAR_7->FarmMemberList);
  {
   for (VAR_12 = 0;VAR_12 < FUNC_9(VAR_7->FarmMemberList);VAR_12++)
   {
    FARM_MEMBER *VAR_14 = FUNC_8(VAR_7->FarmMemberList, VAR_12);

    if (VAR_14->Me == 0)
    {

     RPC_ENUM_LOG_FILE *VAR_15;
     VAR_15 = FUNC_19(sizeof(RPC_ENUM_LOG_FILE));

     if (FUNC_14(VAR_7, VAR_14, VAR_15, VAR_5->ServerAdmin ? "" : VAR_5->HubName))
     {
      UINT VAR_16;
      for (VAR_16 = 0;VAR_16 < VAR_15->NumItem;VAR_16++)
      {
       RPC_ENUM_LOG_FILE_ITEM *VAR_17 = &VAR_15->Items[VAR_16];

       FUNC_16(VAR_17->ServerName, sizeof(VAR_17->ServerName), VAR_14->hostname);
      }

      FUNC_0(VAR_13, VAR_15);
     }
     else
     {
      FUNC_2(VAR_15);
     }
    }
   }
  }
  FUNC_17(VAR_7->FarmMemberList);

  for (VAR_12 = 0;VAR_12 < FUNC_9(VAR_13);VAR_12++)
  {
   RPC_ENUM_LOG_FILE *VAR_18 = FUNC_8(VAR_13, VAR_12);

   FUNC_1(VAR_6, VAR_18);
   FUNC_4(VAR_18);

   FUNC_2(VAR_18);
  }

  FUNC_13(VAR_13);
 }


 if (VAR_5->LogFileList != ((void*)0))
 {
  FUNC_3(VAR_5->LogFileList);
 }

 VAR_5->LogFileList = FUNC_11(VAR_0);

 for (VAR_9 = 0;VAR_9 < VAR_6->NumItem;VAR_9++)
 {
  RPC_ENUM_LOG_FILE_ITEM *VAR_19 = &VAR_6->Items[VAR_9];
  LOG_FILE *VAR_20 = FUNC_19(sizeof(LOG_FILE));

  VAR_20->FileSize = VAR_19->FileSize;
  VAR_20->UpdatedTime = VAR_19->UpdatedTime;
  FUNC_16(VAR_20->Path, sizeof(VAR_20->Path), VAR_19->FilePath);
  FUNC_16(VAR_20->ServerName, sizeof(VAR_20->ServerName), VAR_19->ServerName);

  FUNC_7(VAR_5->LogFileList, VAR_20);
 }

 return VAR_3;
}
