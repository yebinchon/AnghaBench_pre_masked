
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int t ;
struct TYPE_12__ {int DeviceList; } ;
struct TYPE_11__ {int NoPromiscuous; int Thread; TYPE_2__* el; int LogSetting; int DeviceName; } ;
typedef int HUB_LOG ;
typedef TYPE_1__ EL_DEVICE ;
typedef TYPE_2__ EL ;


 int FUNC_0 (int *,int *,int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_1__*) ;
 TYPE_1__* FUNC_5 (int ,TYPE_1__*) ;
 int FUNC_6 (int ,int,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_10 (int) ;

bool FUNC_11(EL *VAR_1, char *VAR_2, HUB_LOG *VAR_3, bool VAR_4)
{
 EL_DEVICE *VAR_5, VAR_6;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return 0;
 }

 FUNC_9(&VAR_6, sizeof(VAR_6));
 FUNC_6(VAR_6.DeviceName, sizeof(VAR_6.DeviceName), VAR_2);

 FUNC_3(VAR_1->DeviceList);
 {
  VAR_5 = FUNC_5(VAR_1->DeviceList, &VAR_6);
  if (VAR_5 != ((void*)0))
  {

   FUNC_7(VAR_1->DeviceList);
   return 0;
  }


  VAR_5 = FUNC_10(sizeof(EL_DEVICE));
  FUNC_6(VAR_5->DeviceName, sizeof(VAR_5->DeviceName), VAR_2);
  FUNC_0(&VAR_5->LogSetting, VAR_3, sizeof(HUB_LOG));
  VAR_5->NoPromiscuous = VAR_4;
  VAR_5->el = VAR_1;
  FUNC_2(VAR_1->DeviceList, VAR_5);


  VAR_5->Thread = FUNC_4(VAR_0, VAR_5);
  FUNC_8(VAR_5->Thread);
 }
 FUNC_7(VAR_1->DeviceList);

 FUNC_1(VAR_1);

 return 1;
}
