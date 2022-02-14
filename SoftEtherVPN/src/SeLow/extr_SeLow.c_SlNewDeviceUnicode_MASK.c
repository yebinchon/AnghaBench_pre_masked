
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {int DriverObject; } ;
struct TYPE_16__ {int Flags; scalar_t__ DeviceExtension; } ;
struct TYPE_15__ {int OpenCloseLock; TYPE_1__* SymbolicLinkName; TYPE_1__* DeviceName; TYPE_3__* DeviceObject; } ;
struct TYPE_14__ {int String; } ;
typedef TYPE_1__ SL_UNICODE ;
typedef TYPE_2__ SL_DEVICE ;
typedef int NTSTATUS ;
typedef TYPE_3__ DEVICE_OBJECT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int *,int ,int ,int,int ,int *,TYPE_3__**) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 () ;
 TYPE_1__* FUNC_7 (char*) ;
 TYPE_2__* FUNC_8 (int) ;
 TYPE_4__* VAR_2 ;

SL_DEVICE *FUNC_9(SL_UNICODE *VAR_3, SL_UNICODE *VAR_4)
{
 SL_DEVICE *VAR_5 = ((void*)0);
 DEVICE_OBJECT *VAR_6 = ((void*)0);
 NTSTATUS VAR_7;
 SL_UNICODE *VAR_8;

 VAR_8 = FUNC_7("D:P(A;;GA;;;SY)(A;;GA;;;BA)");




 VAR_7 = FUNC_0(VAR_2->DriverObject, sizeof(SL_DEVICE *),
  &VAR_3->String, VAR_1, 0, 0, FUNC_5(VAR_8),
  ((void*)0), &VAR_6);

 FUNC_4(VAR_8);

 if (FUNC_3(VAR_7))
 {
  VAR_6 = ((void*)0);
  goto LABEL_CLEANUP;
 }

 VAR_7 = FUNC_1(&VAR_4->String, &VAR_3->String);
 if (FUNC_3(VAR_7))
 {

 }

 VAR_5 = FUNC_8(sizeof(SL_DEVICE));
 if (VAR_5 == ((void*)0))
 {
  goto LABEL_CLEANUP;
 }

 VAR_5->DeviceObject = VAR_6;
 VAR_5->DeviceName = VAR_3;
 VAR_5->SymbolicLinkName = VAR_4;
 *((SL_DEVICE **)VAR_6->DeviceExtension) = VAR_5;

 VAR_6->Flags &= ~VAR_0;

 VAR_5->OpenCloseLock = FUNC_6();

LABEL_CLEANUP:
 if (VAR_5 == ((void*)0))
 {
  if (VAR_6 != ((void*)0))
  {
   FUNC_2(VAR_6);
  }
 }

 return VAR_5;
}
