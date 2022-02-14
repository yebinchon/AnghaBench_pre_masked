
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef char wchar_t ;
typedef int d ;
struct TYPE_6__ {int NumTokens; int * Token; } ;
typedef TYPE_1__ UNI_TOKEN_LIST ;
typedef size_t UINT ;
struct TYPE_7__ {int FileList; } ;
typedef TYPE_2__ ENUM_DIR_WITH_SUB_DATA ;


 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int ,size_t) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_2__*,int) ;
 void* FUNC_7 (int) ;

UNI_TOKEN_LIST *FUNC_8(wchar_t *VAR_0)
{
 ENUM_DIR_WITH_SUB_DATA VAR_1;
 UNI_TOKEN_LIST *VAR_2;
 UINT VAR_3;

 if (VAR_0 == ((void*)0))
 {
  VAR_0 = L"./";
 }

 FUNC_6(&VAR_1, sizeof(VAR_1));

 VAR_1.FileList = FUNC_4(((void*)0));

 FUNC_0(&VAR_1, VAR_0);

 VAR_2 = FUNC_7(sizeof(UNI_TOKEN_LIST));

 VAR_2->NumTokens = FUNC_3(VAR_1.FileList);
 VAR_2->Token = FUNC_7(sizeof(wchar_t *) * VAR_2->NumTokens);

 for (VAR_3 = 0;VAR_3 < VAR_2->NumTokens;VAR_3++)
 {
  wchar_t *VAR_4 = FUNC_2(VAR_1.FileList, VAR_3);

  VAR_2->Token[VAR_3] = FUNC_5(VAR_4);
 }

 FUNC_1(VAR_1.FileList);

 return VAR_2;
}
