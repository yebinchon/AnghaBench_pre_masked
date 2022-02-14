
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_8__ {int NumItem; TYPE_2__** Items; } ;
struct TYPE_7__ {int Type; int Manufacturer; int DeviceName; int DeviceId; } ;
struct TYPE_6__ {int Type; int Manufacturer; int DeviceName; int Id; } ;
typedef TYPE_1__ SECURE_DEVICE ;
typedef TYPE_2__ RPC_CLIENT_ENUM_SECURE_ITEM ;
typedef TYPE_3__ RPC_CLIENT_ENUM_SECURE ;
typedef int LIST ;
typedef int CLIENT ;


 int * FUNC_0 () ;
 TYPE_1__* FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,int,int ) ;
 void* FUNC_4 (int) ;

bool FUNC_5(CLIENT *VAR_0, RPC_CLIENT_ENUM_SECURE *VAR_1)
{
 LIST *VAR_2;
 UINT VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 VAR_2 = FUNC_0();

 VAR_1->NumItem = FUNC_2(VAR_2);
 VAR_1->Items = FUNC_4(sizeof(RPC_CLIENT_ENUM_SECURE_ITEM *) * VAR_1->NumItem);

 for (VAR_3 = 0;VAR_3 < FUNC_2(VAR_2);VAR_3++)
 {
  RPC_CLIENT_ENUM_SECURE_ITEM *VAR_4 = FUNC_4(sizeof(RPC_CLIENT_ENUM_SECURE_ITEM));
  SECURE_DEVICE *VAR_5 = FUNC_1(VAR_2, VAR_3);

  VAR_4->DeviceId = VAR_5->Id;
  FUNC_3(VAR_4->DeviceName, sizeof(VAR_4->DeviceName), VAR_5->DeviceName);
  FUNC_3(VAR_4->Manufacturer, sizeof(VAR_4->Manufacturer), VAR_5->Manufacturer);
  VAR_4->Type = VAR_5->Type;

  VAR_1->Items[VAR_3] = VAR_4;
 }

 return 1;
}
