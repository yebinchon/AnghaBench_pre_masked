
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int t ;
typedef int UNICODE ;
struct TYPE_9__ {char* HardwarePrintableID; scalar_t__ HardwareID_Raw; scalar_t__ HardwareID; int NdisControl; int * NdisControlDevice; TYPE_2__* DispatchTable; void* Paused; void* Opened; } ;
struct TYPE_7__ {int Size; int Revision; int Type; } ;
struct TYPE_8__ {struct TYPE_8__* MajorFunctions; void* SymbolicName; void* DeviceName; TYPE_1__ Header; } ;
typedef int PDRIVER_DISPATCH ;
typedef int NDIS_HANDLE ;
typedef TYPE_2__ NDIS_DEVICE_OBJECT_ATTRIBUTES ;
typedef int DEVICE_OBJECT ;


 void* VAR_0 ;
 void* FUNC_0 (int *) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 char* VAR_9 ;
 char* VAR_10 ;
 char* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int ,TYPE_2__*,int **,int *) ;
 TYPE_2__ VAR_14 ;
 int FUNC_2 (TYPE_2__*,int) ;
 int * FUNC_3 (char*) ;
 TYPE_3__* VAR_15 ;
 int VAR_16 ;
 int FUNC_4 (char*,char*,scalar_t__) ;
 int FUNC_5 (scalar_t__) ;

void FUNC_6()
{
 char VAR_17[VAR_7];
 char VAR_18[VAR_7];
 UNICODE *VAR_19, *VAR_20;
 DEVICE_OBJECT *VAR_21;
 NDIS_HANDLE VAR_22;
 NDIS_DEVICE_OBJECT_ATTRIBUTES VAR_23;

 if (VAR_15 == ((void*)0))
 {
  return;
 }


 FUNC_2(VAR_15->DispatchTable, sizeof(PDRIVER_DISPATCH) * VAR_4);


 VAR_15->DispatchTable[VAR_2] =
  VAR_15->DispatchTable[VAR_1] =
  VAR_15->DispatchTable[VAR_5] =
  VAR_15->DispatchTable[VAR_6] =
  VAR_15->DispatchTable[VAR_3] = VAR_14;
 VAR_15->Opened = VAR_0;
 VAR_15->Paused = VAR_0;


 FUNC_4(VAR_17, VAR_9, VAR_15->HardwareID);
 VAR_19 = FUNC_3(VAR_17);
 FUNC_4(VAR_18, VAR_10, VAR_15->HardwareID);
 VAR_20 = FUNC_3(VAR_18);


 FUNC_2(&VAR_23, sizeof(VAR_23));
 VAR_23.Header.Type = VAR_12;
 VAR_23.Header.Revision = VAR_8;
 VAR_23.Header.Size = VAR_13;
 VAR_23.DeviceName = FUNC_0(VAR_19);
 VAR_23.SymbolicName = FUNC_0(VAR_20);
 VAR_23.MajorFunctions = VAR_15->DispatchTable;

 FUNC_1(VAR_16, &VAR_23,
  &VAR_21,
  &VAR_22);

 VAR_15->NdisControlDevice = VAR_21;
 VAR_15->NdisControl = VAR_22;


 if (FUNC_5(VAR_15->HardwareID) > 11)
 {
  FUNC_4(VAR_15->HardwarePrintableID, VAR_11, VAR_15->HardwareID_Raw + 11);
 }
 else
 {
  FUNC_4(VAR_15->HardwarePrintableID, VAR_11, VAR_15->HardwareID_Raw);
 }
}
