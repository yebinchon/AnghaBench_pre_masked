
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int String; } ;
struct TYPE_5__ {int OpenCloseLock; TYPE_2__* SymbolicLinkName; TYPE_2__* DeviceName; int DeviceObject; } ;
typedef TYPE_1__ SL_DEVICE ;
typedef int NTSTATUS ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;

void FUNC_6(SL_DEVICE *VAR_0)
{
 NTSTATUS VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 VAR_1 = FUNC_1(&VAR_0->SymbolicLinkName->String);
 if (FUNC_2(VAR_1))
 {

 }

 FUNC_0(VAR_0->DeviceObject);

 FUNC_5(VAR_0->DeviceName);
 FUNC_5(VAR_0->SymbolicLinkName);

 FUNC_4(VAR_0->OpenCloseLock);

 FUNC_3(VAR_0);
}
