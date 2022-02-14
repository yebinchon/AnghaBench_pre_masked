
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int a ;
typedef int UINT ;
struct TYPE_11__ {int DeviceList; } ;
struct TYPE_10__ {int NoPromiscuous; int LogSetting; int DeviceName; } ;
struct TYPE_9__ {int NoPromiscuous; int LogSetting; int DeviceName; } ;
typedef TYPE_1__ RPC_ADD_DEVICE ;
typedef int HUB_LOG ;
typedef TYPE_2__ EL_DEVICE ;
typedef TYPE_3__ EL ;


 int FUNC_0 (int *,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,int) ;

UINT FUNC_6(EL *VAR_2, RPC_ADD_DEVICE *VAR_3)
{
 UINT VAR_4 = VAR_0;

 FUNC_1(VAR_2->DeviceList);
 {
  EL_DEVICE *VAR_5, VAR_6;
  FUNC_5(&VAR_6, sizeof(VAR_6));
  FUNC_3(VAR_6.DeviceName, sizeof(VAR_6.DeviceName), VAR_3->DeviceName);

  VAR_5 = FUNC_2(VAR_2->DeviceList, &VAR_6);

  if (VAR_5 != ((void*)0))
  {
   VAR_4 = VAR_1;

   FUNC_0(&VAR_3->LogSetting, &VAR_5->LogSetting, sizeof(HUB_LOG));
   VAR_3->NoPromiscuous = VAR_5->NoPromiscuous;
  }
 }
 FUNC_4(VAR_2->DeviceList);

 return VAR_4;
}
