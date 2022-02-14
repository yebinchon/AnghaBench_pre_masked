
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int t ;
struct TYPE_12__ {int DeviceList; } ;
struct TYPE_11__ {int Logger; int LogSetting; int DeviceName; } ;
struct TYPE_10__ {int PacketLogSwitchType; } ;
typedef TYPE_1__ HUB_LOG ;
typedef TYPE_2__ EL_DEVICE ;
typedef TYPE_3__ EL ;


 int FUNC_0 (int *,TYPE_1__*,int) ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*,int) ;

bool FUNC_7(EL *VAR_0, char *VAR_1, HUB_LOG *VAR_2)
{
 EL_DEVICE *VAR_3;
 bool VAR_4 = 0;

 if (VAR_0 == ((void*)0) || VAR_2 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 FUNC_1(VAR_0->DeviceList);
 {
  EL_DEVICE VAR_5;

  FUNC_6(&VAR_5, sizeof(VAR_5));
  FUNC_4(VAR_5.DeviceName, sizeof(VAR_5.DeviceName), VAR_1);

  VAR_3 = FUNC_2(VAR_0->DeviceList, &VAR_5);

  if (VAR_3 != ((void*)0))
  {
   FUNC_0(&VAR_3->LogSetting, VAR_2, sizeof(HUB_LOG));

   FUNC_3(VAR_3->Logger, VAR_2->PacketLogSwitchType);

   VAR_4 = 1;
  }
 }
 FUNC_5(VAR_0->DeviceList);

 return VAR_4;
}
