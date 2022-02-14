
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_7__ {int DeviceList; int HashedPassword; int Port; int AutoDeleteCheckDiskFreeSpaceMin; } ;
struct TYPE_6__ {char* DeviceName; int NoPromiscuous; int LogSetting; } ;
typedef int FOLDER ;
typedef TYPE_1__ EL_DEVICE ;
typedef TYPE_2__ EL ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int ,int) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char*,int ) ;
 int * FUNC_4 (int *,char*) ;
 int VAR_0 ;
 int FUNC_5 (int *,TYPE_2__*) ;
 TYPE_1__* FUNC_6 (int ,scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int *,int) ;
 int FUNC_10 (int ) ;

void FUNC_11(EL *VAR_1, FOLDER *VAR_2)
{
 UINT VAR_3;
 FOLDER *VAR_4;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 FUNC_3(VAR_2, "AutoDeleteCheckDiskFreeSpaceMin", VAR_1->AutoDeleteCheckDiskFreeSpaceMin);

 FUNC_2(VAR_2, "AdminPort", VAR_1->Port);

 FUNC_1(VAR_2, "AdminPassword", VAR_1->HashedPassword, sizeof(VAR_1->HashedPassword));

 if (VAR_0 == 0)
 {
  FUNC_5(FUNC_4(VAR_2, "LicenseManager"), VAR_1);
 }

 VAR_4 = FUNC_4(VAR_2,"Devices");

 FUNC_8(VAR_1->DeviceList);
 {
  for (VAR_3 = 0;VAR_3 < FUNC_7(VAR_1->DeviceList);VAR_3++)
  {
   FOLDER *VAR_5;
   EL_DEVICE *VAR_6 = FUNC_6(VAR_1->DeviceList, VAR_3);

   VAR_5 = FUNC_4(VAR_4, VAR_6->DeviceName);
   FUNC_9(VAR_5, &VAR_6->LogSetting, 1);
   FUNC_0(VAR_5, "NoPromiscuousMode", VAR_6->NoPromiscuous);
  }
 }
 FUNC_10(VAR_1->DeviceList);
}
