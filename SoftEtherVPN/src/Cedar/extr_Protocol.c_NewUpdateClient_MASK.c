
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int wchar_t ;
typedef int UPDATE_NOTIFY_PROC ;
typedef int UPDATE_ISFOREGROUND_PROC ;
typedef int UPDATE_CLIENT_SETTING ;
struct TYPE_5__ {int Thread; int HaltEvent; void* Param; int Setting; int MyLanguage; int MyDate; scalar_t__ MyBuild; int SoftwareTitle; int SoftwareName; int FamilyName; int ClientId; int * IsForegroundCb; int * Callback; } ;
typedef TYPE_1__ UPDATE_CLIENT ;
typedef int UINT64 ;
typedef scalar_t__ UINT ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int ,int,char*) ;
 int FUNC_4 (int ,int,int *) ;
 int VAR_0 ;
 TYPE_1__* FUNC_5 (int) ;

UPDATE_CLIENT *FUNC_6(UPDATE_NOTIFY_PROC *VAR_1, UPDATE_ISFOREGROUND_PROC *VAR_2, void *VAR_3, char *VAR_4, char *VAR_5, wchar_t *VAR_6, UINT VAR_7, UINT64 VAR_8, char *VAR_9, UPDATE_CLIENT_SETTING *VAR_10, char *VAR_11)
{
 UPDATE_CLIENT *VAR_12;

 if (VAR_4 == ((void*)0) || VAR_6 == ((void*)0) || VAR_5 == ((void*)0) || VAR_7 == 0 ||
  VAR_9 == ((void*)0) || VAR_10 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_12 = FUNC_5(sizeof(UPDATE_CLIENT));

 VAR_12->Callback = VAR_1;
 VAR_12->IsForegroundCb = VAR_2;

 FUNC_3(VAR_12->ClientId, sizeof(VAR_12->ClientId), VAR_11);
 FUNC_3(VAR_12->FamilyName, sizeof(VAR_12->FamilyName), VAR_4);
 FUNC_3(VAR_12->SoftwareName, sizeof(VAR_12->SoftwareName), VAR_5);
 FUNC_4(VAR_12->SoftwareTitle, sizeof(VAR_12->SoftwareTitle), VAR_6);
 VAR_12->MyBuild = VAR_7;
 VAR_12->MyDate = VAR_8;
 FUNC_3(VAR_12->MyLanguage, sizeof(VAR_12->MyLanguage), VAR_9);

 FUNC_0(&VAR_12->Setting, VAR_10, sizeof(VAR_12->Setting));

 VAR_12->Param = VAR_3;

 VAR_12->HaltEvent = FUNC_1();


 VAR_12->Thread = FUNC_2(VAR_0, VAR_12);

 return VAR_12;
}
