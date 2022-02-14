
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int tmp ;
typedef size_t UINT ;
struct TYPE_10__ {int Folder; int UpdateDate; int FileName; } ;
struct TYPE_9__ {size_t NumFiles; TYPE_3__** File; } ;
struct TYPE_8__ {int UpdateTime; int FullPath; } ;
typedef int LIST ;
typedef TYPE_1__ ERASE_FILE ;
typedef TYPE_2__ DIRLIST ;
typedef TYPE_3__ DIRENT ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 TYPE_2__* FUNC_3 (char*) ;
 int FUNC_4 (char*,int,char*,char*,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_6 (char*,int,char*) ;
 TYPE_1__* FUNC_7 (int) ;

void FUNC_8(LIST *VAR_1, char *VAR_2)
{
 DIRLIST *VAR_3;
 UINT VAR_4;
 char VAR_5[VAR_0];

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }


 VAR_3 = FUNC_3(VAR_2);

 for (VAR_4 = 0;VAR_4 < VAR_3->NumFiles;VAR_4++)
 {
  DIRENT *VAR_6 = VAR_3->File[VAR_4];
  FUNC_4(VAR_5, sizeof(VAR_5), "%s/%s", VAR_2, VAR_6->FileName);
  FUNC_6(VAR_5, sizeof(VAR_5), VAR_5);

  if (VAR_6->Folder == 0)
  {

   ERASE_FILE *VAR_7;

   if (FUNC_2(VAR_5, ".log") || FUNC_2(VAR_5, ".config") || FUNC_2(VAR_5, ".old"))
   {

    VAR_7 = FUNC_7(sizeof(ERASE_FILE));
    VAR_7->FullPath = FUNC_1(VAR_5);
    VAR_7->UpdateTime = VAR_6->UpdateDate;

    FUNC_0(VAR_1, VAR_7);
   }
  }
  else
  {

   FUNC_8(VAR_1, VAR_5);
  }
 }

 FUNC_5(VAR_3);
}
