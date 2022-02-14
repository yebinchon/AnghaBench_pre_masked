
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp ;
typedef int exedir ;
typedef int dirname ;
typedef int X ;
typedef size_t UINT ;
struct TYPE_6__ {int Folder; char* FileNameW; } ;
struct TYPE_5__ {size_t NumFiles; TYPE_2__** File; } ;
typedef int LIST ;
typedef TYPE_1__ DIRLIST ;
typedef TYPE_2__ DIRENT ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int,int *,char*) ;
 TYPE_1__* FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int VAR_0 ;
 int FUNC_7 (int *) ;

void FUNC_8(LIST *VAR_1)
{
 wchar_t VAR_2[VAR_0];
 wchar_t VAR_3[VAR_0];
 DIRLIST *VAR_4;

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_6(VAR_3, sizeof(VAR_3));

 FUNC_1(VAR_2, sizeof(VAR_2), VAR_3, L"chain_certs");

 FUNC_7(VAR_2);

 VAR_4 = FUNC_2(VAR_2);

 if (VAR_4 != ((void*)0))
 {
  UINT VAR_5;

  for (VAR_5 = 0;VAR_5 < VAR_4->NumFiles;VAR_5++)
  {
   DIRENT *VAR_6 = VAR_4->File[VAR_5];

   if (VAR_6->Folder == 0)
   {
    wchar_t VAR_7[VAR_0];
    X *VAR_8;

    FUNC_1(VAR_7, sizeof(VAR_7), VAR_2, VAR_6->FileNameW);

    VAR_8 = FUNC_3(VAR_7);

    if (VAR_8 != ((void*)0))
    {
     FUNC_0(VAR_1, VAR_8);

     FUNC_5(VAR_8);
    }
   }
  }

  FUNC_4(VAR_4);
 }
}
