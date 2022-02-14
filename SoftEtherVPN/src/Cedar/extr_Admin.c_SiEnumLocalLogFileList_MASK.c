
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_10__ {int UpdatedTime; int FileSize; int ServerName; int Path; } ;
struct TYPE_9__ {size_t NumItem; TYPE_1__* Items; } ;
struct TYPE_8__ {int UpdatedTime; int FileSize; int ServerName; int FilePath; } ;
typedef int SERVER ;
typedef TYPE_1__ RPC_ENUM_LOG_FILE_ITEM ;
typedef TYPE_2__ RPC_ENUM_LOG_FILE ;
typedef TYPE_3__ LOG_FILE ;
typedef int LIST ;


 int * FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 TYPE_3__* FUNC_2 (int *,size_t) ;
 size_t FUNC_3 (int *) ;
 int FUNC_4 (int ,int,int ) ;
 int FUNC_5 (TYPE_2__*,int) ;
 TYPE_1__* FUNC_6 (int) ;

void FUNC_7(SERVER *VAR_0, char *VAR_1, RPC_ENUM_LOG_FILE *VAR_2)
{
 LIST *VAR_3;
 UINT VAR_4;

 if (VAR_0 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 FUNC_5(VAR_2, sizeof(RPC_ENUM_LOG_FILE));

 VAR_3 = FUNC_0(VAR_1);

 VAR_2->NumItem = FUNC_3(VAR_3);
 VAR_2->Items = FUNC_6(sizeof(RPC_ENUM_LOG_FILE_ITEM) * VAR_2->NumItem);

 for (VAR_4 = 0;VAR_4 < FUNC_3(VAR_3);VAR_4++)
 {
  LOG_FILE *VAR_5 = FUNC_2(VAR_3, VAR_4);
  RPC_ENUM_LOG_FILE_ITEM *VAR_6 = &VAR_2->Items[VAR_4];

  FUNC_4(VAR_6->FilePath, sizeof(VAR_6->FilePath), VAR_5->Path);
  FUNC_4(VAR_6->ServerName, sizeof(VAR_6->ServerName), VAR_5->ServerName);
  VAR_6->FileSize = VAR_5->FileSize;
  VAR_6->UpdatedTime = VAR_5->UpdatedTime;
 }

 FUNC_1(VAR_3);
}
