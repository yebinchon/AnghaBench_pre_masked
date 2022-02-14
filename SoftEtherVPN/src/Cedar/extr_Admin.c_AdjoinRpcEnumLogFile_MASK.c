
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_12__ {int UpdatedTime; int FileSize; int ServerName; int Path; } ;
struct TYPE_11__ {size_t NumItem; TYPE_1__* Items; } ;
struct TYPE_10__ {int UpdatedTime; int FileSize; int ServerName; int FilePath; } ;
typedef TYPE_1__ RPC_ENUM_LOG_FILE_ITEM ;
typedef TYPE_2__ RPC_ENUM_LOG_FILE ;
typedef TYPE_3__ LOG_FILE ;
typedef int LIST ;


 int FUNC_0 (int *,TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_3__* FUNC_3 (int *,size_t) ;
 size_t FUNC_4 (int *) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int,int ) ;
 int FUNC_8 (TYPE_2__*,int) ;
 void* FUNC_9 (int) ;

void FUNC_10(RPC_ENUM_LOG_FILE *VAR_1, RPC_ENUM_LOG_FILE *VAR_2)
{
 LIST *VAR_3;
 UINT VAR_4;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 VAR_3 = FUNC_5(VAR_0);

 for (VAR_4 = 0;VAR_4 < VAR_1->NumItem;VAR_4++)
 {
  RPC_ENUM_LOG_FILE_ITEM *VAR_5 = &VAR_1->Items[VAR_4];
  LOG_FILE *VAR_6 = FUNC_9(sizeof(LOG_FILE));

  VAR_6->FileSize = VAR_5->FileSize;
  FUNC_7(VAR_6->Path, sizeof(VAR_6->Path), VAR_5->FilePath);
  FUNC_7(VAR_6->ServerName, sizeof(VAR_6->ServerName), VAR_5->ServerName);
  VAR_6->UpdatedTime = VAR_5->UpdatedTime;

  FUNC_0(VAR_3, VAR_6);
 }

 for (VAR_4 = 0;VAR_4 < VAR_2->NumItem;VAR_4++)
 {
  RPC_ENUM_LOG_FILE_ITEM *VAR_7 = &VAR_2->Items[VAR_4];
  LOG_FILE *VAR_8 = FUNC_9(sizeof(LOG_FILE));

  VAR_8->FileSize = VAR_7->FileSize;
  FUNC_7(VAR_8->Path, sizeof(VAR_8->Path), VAR_7->FilePath);
  FUNC_7(VAR_8->ServerName, sizeof(VAR_8->ServerName), VAR_7->ServerName);
  VAR_8->UpdatedTime = VAR_7->UpdatedTime;

  FUNC_0(VAR_3, VAR_8);
 }

 FUNC_2(VAR_1);

 FUNC_6(VAR_3);

 FUNC_8(VAR_1, sizeof(RPC_ENUM_LOG_FILE));
 VAR_1->NumItem = FUNC_4(VAR_3);
 VAR_1->Items = FUNC_9(sizeof(RPC_ENUM_LOG_FILE_ITEM) * VAR_1->NumItem);

 for (VAR_4 = 0;VAR_4 < VAR_1->NumItem;VAR_4++)
 {
  LOG_FILE *VAR_9 = FUNC_3(VAR_3, VAR_4);
  RPC_ENUM_LOG_FILE_ITEM *VAR_10 = &VAR_1->Items[VAR_4];

  FUNC_7(VAR_10->FilePath, sizeof(VAR_10->FilePath), VAR_9->Path);
  FUNC_7(VAR_10->ServerName, sizeof(VAR_10->ServerName), VAR_9->ServerName);
  VAR_10->FileSize = VAR_9->FileSize;
  VAR_10->UpdatedTime = VAR_9->UpdatedTime;
 }

 FUNC_1(VAR_3);
}
