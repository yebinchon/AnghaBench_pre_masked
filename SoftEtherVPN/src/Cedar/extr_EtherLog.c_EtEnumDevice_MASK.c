
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_16__ {int DeviceList; TYPE_1__* LicenseStatus; } ;
struct TYPE_15__ {scalar_t__ Active; int DeviceName; } ;
struct TYPE_14__ {int NumItem; TYPE_2__* Items; } ;
struct TYPE_13__ {int Active; int DeviceName; } ;
struct TYPE_12__ {scalar_t__ Valid; } ;
typedef TYPE_2__ RPC_ENUM_DEVICE_ITEM ;
typedef TYPE_3__ RPC_ENUM_DEVICE ;
typedef TYPE_4__ EL_DEVICE ;
typedef TYPE_5__ EL ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_4__* FUNC_2 (int ,size_t) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_3__*,int) ;
 TYPE_2__* FUNC_8 (int) ;

UINT FUNC_9(EL *VAR_3, RPC_ENUM_DEVICE *VAR_4)
{
 bool VAR_5 = FUNC_0();

 if (VAR_5)
 {

  return VAR_1;
 }

 FUNC_1(VAR_4);
 FUNC_7(VAR_4, sizeof(RPC_ENUM_DEVICE));

 FUNC_4(VAR_3->DeviceList);
 {
  UINT VAR_6;

  VAR_4->NumItem = FUNC_3(VAR_3->DeviceList);
  VAR_4->Items = FUNC_8(sizeof(RPC_ENUM_DEVICE_ITEM) * VAR_4->NumItem);

  for (VAR_6 = 0;VAR_6 < VAR_4->NumItem;VAR_6++)
  {
   RPC_ENUM_DEVICE_ITEM *VAR_7 = &VAR_4->Items[VAR_6];
   EL_DEVICE *VAR_8 = FUNC_2(VAR_3->DeviceList, VAR_6);

   FUNC_5(VAR_7->DeviceName, sizeof(VAR_7->DeviceName), VAR_8->DeviceName);
   VAR_7->Active = VAR_8->Active && ((VAR_0 || VAR_3->LicenseStatus->Valid) ? 1 : 0);
  }
 }
 FUNC_6(VAR_3->DeviceList);

 return VAR_2;
}
