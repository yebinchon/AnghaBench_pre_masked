
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int g ;
typedef int UINT ;
struct TYPE_9__ {int Port; scalar_t__ AutoDeleteCheckDiskFreeSpaceMin; int DeviceList; int HashedPassword; } ;
struct TYPE_8__ {int NumTokens; char** Token; } ;
typedef TYPE_1__ TOKEN_LIST ;
typedef int HUB_LOG ;
typedef int FOLDER ;
typedef TYPE_2__ EL ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int ,int) ;
 int * FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 scalar_t__ FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int FUNC_8 (TYPE_2__*,char*,int *,int ) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,char*,int ) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *,int) ;

void FUNC_15(EL *VAR_3, FOLDER *VAR_4)
{
 UINT VAR_5;
 TOKEN_LIST *VAR_6;
 FOLDER *VAR_7;


 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
 {
  return;
 }

 VAR_5 = FUNC_4(VAR_4, "AdminPort");
 if (VAR_5 >= 1 && VAR_5 <= 65535)
 {
  VAR_3->Port = VAR_5;
 }

 VAR_3->AutoDeleteCheckDiskFreeSpaceMin = FUNC_5(VAR_4, "AutoDeleteCheckDiskFreeSpaceMin");
 if (FUNC_6(VAR_4, "AutoDeleteCheckDiskFreeSpaceMin") == 0 && VAR_3->AutoDeleteCheckDiskFreeSpaceMin == 0)
 {
  VAR_3->AutoDeleteCheckDiskFreeSpaceMin = VAR_0;
 }

 if (VAR_3->AutoDeleteCheckDiskFreeSpaceMin != 0)
 {
  if (VAR_3->AutoDeleteCheckDiskFreeSpaceMin < VAR_1)
  {
   VAR_3->AutoDeleteCheckDiskFreeSpaceMin = VAR_1;
  }
 }

 if (FUNC_2(VAR_4, "AdminPassword", VAR_3->HashedPassword, sizeof(VAR_3->HashedPassword)) != sizeof(VAR_3->HashedPassword))
 {
  FUNC_11(VAR_3->HashedPassword, "", 0);
 }

 if (VAR_2 == 0)
 {
  FUNC_7(VAR_3, FUNC_3(VAR_4, "LicenseManager"));
 }

 VAR_7 = FUNC_3(VAR_4, "Devices");
 if(VAR_7 != ((void*)0))
 {
  FUNC_10(VAR_3->DeviceList);
  {
   VAR_6 = FUNC_0(VAR_7);
   for (VAR_5 = 0;VAR_5 < VAR_6->NumTokens;VAR_5++)
   {
    char *VAR_8 = VAR_6->Token[VAR_5];
    FOLDER *VAR_9 = FUNC_3(VAR_7, VAR_8);

    if (VAR_9 != ((void*)0))
    {
     HUB_LOG VAR_10;

     FUNC_14(&VAR_10, sizeof(VAR_10));
     FUNC_12(&VAR_10, VAR_9);
     FUNC_8(VAR_3, VAR_8, &VAR_10, FUNC_1(VAR_9, "NoPromiscuousMode"));
    }
   }
   FUNC_9(VAR_6);
  }
  FUNC_13(VAR_3->DeviceList);
 }
}
