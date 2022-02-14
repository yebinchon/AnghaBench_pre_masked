
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef int tt ;
typedef int servername ;
typedef int logfilename ;
typedef int elf ;
typedef scalar_t__ UINT ;
struct TYPE_26__ {scalar_t__ Size; int Buf; } ;
struct TYPE_25__ {int * LogFileList; TYPE_1__* Server; } ;
struct TYPE_24__ {int Me; int hostname; } ;
struct TYPE_23__ {char* FilePath; char* ServerName; scalar_t__ Offset; TYPE_7__* Buffer; } ;
struct TYPE_22__ {scalar_t__ ServerType; int FarmMemberList; int * Cedar; } ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ RPC_READ_LOG_FILE ;
typedef TYPE_2__ RPC_ENUM_LOG_FILE ;
typedef TYPE_4__ FARM_MEMBER ;
typedef int CEDAR ;
typedef TYPE_5__ ADMIN ;


 int FUNC_0 (TYPE_5__*,int *,char*,char*,char*) ;
 int FUNC_1 (int *,char*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (char*,int) ;
 scalar_t__ FUNC_5 (char*) ;
 TYPE_4__* FUNC_6 (int ,scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_7__* FUNC_9 () ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_10 (TYPE_1__*,TYPE_4__*,TYPE_2__*) ;
 int FUNC_11 (TYPE_1__*,char*,scalar_t__,TYPE_2__*) ;
 scalar_t__ FUNC_12 (TYPE_5__*,TYPE_2__*) ;
 scalar_t__ FUNC_13 (int ,char*) ;
 int FUNC_14 (char*,int,char*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (TYPE_7__*,int ,scalar_t__) ;
 int FUNC_17 (TYPE_2__*,int) ;

UINT FUNC_18(ADMIN *VAR_6, RPC_READ_LOG_FILE *VAR_7)
{
 SERVER *VAR_8 = VAR_6->Server;
 CEDAR *VAR_9 = VAR_8->Cedar;
 char VAR_10[VAR_4];
 char VAR_11[VAR_3 + 1];
 UINT VAR_12;
 bool VAR_13 = 1;

 if (FUNC_5(VAR_7->FilePath))
 {
  return VAR_0;
 }

 FUNC_14(VAR_10, sizeof(VAR_10), VAR_7->FilePath);
 FUNC_14(VAR_11, sizeof(VAR_11), VAR_7->ServerName);
 VAR_12 = VAR_7->Offset;

 if (VAR_8->ServerType != VAR_5)
 {
  FUNC_4(VAR_11, sizeof(VAR_11));
 }


 if (VAR_6->LogFileList == ((void*)0))
 {

  RPC_ENUM_LOG_FILE VAR_14;
  UINT VAR_15;

  FUNC_17(&VAR_14, sizeof(VAR_14));

  VAR_15 = FUNC_12(VAR_6, &VAR_14);

  FUNC_2(&VAR_14);

  if (VAR_15 != VAR_1)
  {
   return VAR_15;
  }
 }
 if (FUNC_1(VAR_6->LogFileList, VAR_10, VAR_11) == 0)
 {

  return VAR_2;
 }

 FUNC_3(VAR_7);
 FUNC_17(VAR_7, sizeof(RPC_READ_LOG_FILE));

 if (VAR_8->ServerType == VAR_5)
 {
  UINT VAR_16;


  FUNC_8(VAR_8->FarmMemberList);
  {
   for (VAR_16 = 0;VAR_16 < FUNC_7(VAR_8->FarmMemberList);VAR_16++)
   {
    FARM_MEMBER *VAR_17 = FUNC_6(VAR_8->FarmMemberList, VAR_16);

    if (VAR_17->Me == 0)
    {
     if (FUNC_13(VAR_17->hostname, VAR_11) == 0)
     {
      RPC_READ_LOG_FILE VAR_18;

      FUNC_17(&VAR_18, sizeof(VAR_18));
      VAR_13 = 0;

      FUNC_14(VAR_18.ServerName, sizeof(VAR_18.ServerName), VAR_11);
      FUNC_14(VAR_18.FilePath, sizeof(VAR_18.FilePath), VAR_10);
      VAR_18.Offset = VAR_12;

      if (FUNC_10(VAR_8, VAR_17, &VAR_18))
      {
       if (VAR_18.Buffer != ((void*)0) && VAR_18.Buffer->Size > 0)
       {
        VAR_7->Buffer = FUNC_9();
        FUNC_16(VAR_7->Buffer, VAR_18.Buffer->Buf, VAR_18.Buffer->Size);
       }
      }

      FUNC_3(&VAR_18);

      break;
     }
    }
   }
  }
  FUNC_15(VAR_8->FarmMemberList);
 }


 if (VAR_13)
 {
  FUNC_11(VAR_8, VAR_10, VAR_12, VAR_7);
 }

 if (VAR_12 == 0)
 {
  FUNC_0(VAR_6, ((void*)0), "LA_READ_LOG_FILE", VAR_11, VAR_10);
 }

 FUNC_14(VAR_7->FilePath, sizeof(VAR_7->FilePath), VAR_10);
 FUNC_14(VAR_7->ServerName, sizeof(VAR_7->ServerName), VAR_11);
 VAR_7->Offset = VAR_12;

 return VAR_1;
}
