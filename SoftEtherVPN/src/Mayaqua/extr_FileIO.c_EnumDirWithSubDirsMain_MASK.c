
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp ;
typedef size_t UINT ;
struct TYPE_9__ {int Folder; int FileNameW; } ;
struct TYPE_8__ {size_t NumFiles; TYPE_3__** File; } ;
struct TYPE_7__ {int FileList; } ;
typedef TYPE_1__ ENUM_DIR_WITH_SUB_DATA ;
typedef TYPE_2__ DIRLIST ;
typedef TYPE_3__ DIRENT ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int,int *,int ) ;
 int FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_0 ;

void FUNC_5(ENUM_DIR_WITH_SUB_DATA *VAR_1, wchar_t *VAR_2)
{
 DIRLIST *VAR_3;
 UINT VAR_4;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 VAR_3 = FUNC_3(VAR_2, ((void*)0));
 if (VAR_3 == ((void*)0))
 {
  return;
 }


 for (VAR_4 = 0;VAR_4 < VAR_3->NumFiles;VAR_4++)
 {
  DIRENT *VAR_5 = VAR_3->File[VAR_4];

  if (VAR_5->Folder == 0)
  {
   wchar_t VAR_6[VAR_0];

   FUNC_1(VAR_6, sizeof(VAR_6), VAR_2, VAR_5->FileNameW);

   FUNC_0(VAR_1->FileList, FUNC_2(VAR_6));
  }
 }


 for (VAR_4 = 0;VAR_4 < VAR_3->NumFiles;VAR_4++)
 {
  DIRENT *VAR_7 = VAR_3->File[VAR_4];

  if (VAR_7->Folder)
  {
   wchar_t VAR_8[VAR_0];

   FUNC_1(VAR_8, sizeof(VAR_8), VAR_2, VAR_7->FileNameW);

   FUNC_5(VAR_1, VAR_8);
  }
 }

 FUNC_4(VAR_3);
}
