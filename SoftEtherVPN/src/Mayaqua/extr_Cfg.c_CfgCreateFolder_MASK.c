
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_7__ {void* Folders; struct TYPE_7__* Parent; void* Name; void* Items; } ;
typedef TYPE_1__ FOLDER ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (void*,TYPE_1__*) ;
 void* FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (void*,TYPE_1__*) ;
 int FUNC_4 (void*,int ,char*) ;
 int FUNC_5 (char*) ;
 void* FUNC_6 (int) ;

FOLDER *FUNC_7(FOLDER *VAR_2, char *VAR_3)
{
 UINT VAR_4;
 FOLDER *VAR_5;

 if (VAR_3 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_4 = FUNC_5(VAR_3) + 1;
 VAR_5 = FUNC_6(sizeof(FOLDER));
 VAR_5->Items = FUNC_2(VAR_1);
 VAR_5->Folders = FUNC_2(VAR_0);
 VAR_5->Name = FUNC_6(VAR_4);
 FUNC_4(VAR_5->Name, 0, VAR_3);
 VAR_5->Parent = VAR_2;


 if (VAR_5->Parent != ((void*)0))
 {
  FUNC_1(VAR_5->Parent->Folders, VAR_5);
 }
 return VAR_5;
}
