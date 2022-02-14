
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int full_path ;
typedef int file_path ;
typedef int exe_dir ;
typedef int dir_full_path ;
typedef size_t UINT ;
struct TYPE_10__ {int Folder; scalar_t__ FileSize; char* FileName; int UpdateDate; } ;
struct TYPE_9__ {size_t NumFiles; TYPE_3__** File; } ;
struct TYPE_8__ {size_t FileSize; int ServerName; int UpdatedTime; int Path; } ;
typedef TYPE_1__ LOG_FILE ;
typedef int LIST ;
typedef TYPE_2__ DIRLIST ;
typedef TYPE_3__ DIRENT ;


 scalar_t__ FUNC_0 (char*,char*) ;
 TYPE_2__* FUNC_1 (char*) ;
 int FUNC_2 (char*,int,char*,char*,char*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int *,TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_7 (scalar_t__,int) ;
 int FUNC_8 (int ,int,char*) ;
 TYPE_1__* FUNC_9 (int) ;

void FUNC_10(LIST *VAR_1, char *VAR_2)
{
 UINT VAR_3;
 char VAR_4[VAR_0];
 char VAR_5[VAR_0];
 DIRLIST *VAR_6;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 FUNC_4(VAR_4, sizeof(VAR_4));
 FUNC_2(VAR_5, sizeof(VAR_5), "%s/%s", VAR_4, VAR_2);

 VAR_6 = FUNC_1(VAR_5);
 if (VAR_6 == ((void*)0))
 {
  return;
 }

 for (VAR_3 = 0;VAR_3 < VAR_6->NumFiles;VAR_3++)
 {
  DIRENT *VAR_7 = VAR_6->File[VAR_3];

  if (VAR_7->Folder == 0 && VAR_7->FileSize > 0)
  {
   char VAR_8[VAR_0];
   char VAR_9[VAR_0];

   FUNC_2(VAR_9, sizeof(VAR_9), "%s/%s", VAR_2, VAR_7->FileName);
   FUNC_2(VAR_8, sizeof(VAR_8), "%s/%s", VAR_4, VAR_9);

   if (FUNC_0(VAR_9, ".log"))
   {
    LOG_FILE *VAR_10 = FUNC_9(sizeof(LOG_FILE));

    FUNC_8(VAR_10->Path, sizeof(VAR_10->Path), VAR_9);
    VAR_10->FileSize = (UINT)(FUNC_7(VAR_7->FileSize, 0xffffffffUL));
    VAR_10->UpdatedTime = VAR_7->UpdateDate;

    FUNC_5(VAR_10->ServerName, sizeof(VAR_10->ServerName));

    FUNC_6(VAR_1, VAR_10);
   }
  }
 }

 FUNC_3(VAR_6);
}
