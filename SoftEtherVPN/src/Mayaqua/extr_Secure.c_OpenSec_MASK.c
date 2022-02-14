
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_12__ {int IsEPass1000; int NumSlot; scalar_t__* SlotIdList; TYPE_1__* Api; TYPE_2__* Dev; int Error; int lock; } ;
struct TYPE_11__ {int DeviceName; } ;
struct TYPE_10__ {scalar_t__ (* C_GetSlotList ) (int,scalar_t__*,int*) ;} ;
typedef TYPE_2__ SECURE_DEVICE ;
typedef TYPE_3__ SECURE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_2__* FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 () ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (int ,char*,int ,int) ;
 int VAR_3 ;
 TYPE_3__* FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int,scalar_t__*,int*) ;
 scalar_t__ FUNC_9 (int,scalar_t__*,int*) ;

SECURE *FUNC_10(UINT VAR_4)
{
 SECURE_DEVICE *VAR_5 = FUNC_3(VAR_4);
 SECURE *VAR_6;
 UINT VAR_7;

 if (VAR_5 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_6 = FUNC_7(sizeof(SECURE));

 VAR_6->lock = FUNC_5();
 VAR_6->Error = VAR_2;
 VAR_6->Dev = VAR_5;


 if (FUNC_6(VAR_5->DeviceName, "epass", 0, 0) != VAR_1)
 {
  VAR_6->IsEPass1000 = 1;
 }


 if (FUNC_4(VAR_6) == 0)
 {
  FUNC_0(VAR_6);
  return ((void*)0);
 }


 VAR_6->NumSlot = 0;
 if ((VAR_7 = VAR_6->Api->C_GetSlotList(1, ((void*)0), &VAR_6->NumSlot)) != VAR_0 || VAR_6->NumSlot == 0)
 {

  FUNC_2(VAR_6);
  FUNC_0(VAR_6);
  return ((void*)0);
 }

 VAR_6->SlotIdList = (UINT *)FUNC_7(sizeof(UINT) * VAR_6->NumSlot);

 if (VAR_6->Api->C_GetSlotList(VAR_3, VAR_6->SlotIdList, &VAR_6->NumSlot) != VAR_0)
 {

  FUNC_1(VAR_6->SlotIdList);
  VAR_6->SlotIdList = ((void*)0);
  FUNC_2(VAR_6);
  FUNC_0(VAR_6);
  return ((void*)0);
 }

 return VAR_6;
}
