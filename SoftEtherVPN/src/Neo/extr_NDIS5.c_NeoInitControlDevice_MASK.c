
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UNICODE ;
struct TYPE_2__ {char* HardwarePrintableID; scalar_t__ HardwareID_Raw; scalar_t__ HardwareID; int NdisControl; int * NdisControlDevice; int * DispatchTable; int NdisWrapper; int Opened; } ;
typedef int PDRIVER_DISPATCH ;
typedef int NDIS_HANDLE ;
typedef int DEVICE_OBJECT ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 char* VAR_8 ;
 char* VAR_9 ;
 char* VAR_10 ;
 int FUNC_1 (int ,int ,int ,int *,int **,int *) ;
 int VAR_11 ;
 int FUNC_2 (int *,int) ;
 int * FUNC_3 (char*) ;
 TYPE_1__* VAR_12 ;
 int FUNC_4 (char*,char*,scalar_t__) ;
 int FUNC_5 (scalar_t__) ;

void FUNC_6()
{
 char VAR_13[VAR_7];
 char VAR_14[VAR_7];
 UNICODE *VAR_15, *VAR_16;
 DEVICE_OBJECT *VAR_17;
 NDIS_HANDLE VAR_18;

 if (VAR_12 == ((void*)0))
 {
  return;
 }


 FUNC_2(VAR_12->DispatchTable, sizeof(PDRIVER_DISPATCH) * VAR_4);


 VAR_12->DispatchTable[VAR_2] =
  VAR_12->DispatchTable[VAR_1] =
  VAR_12->DispatchTable[VAR_5] =
  VAR_12->DispatchTable[VAR_6] =
  VAR_12->DispatchTable[VAR_3] = VAR_11;
 VAR_12->Opened = VAR_0;


 FUNC_4(VAR_13, VAR_8, VAR_12->HardwareID);
 VAR_15 = FUNC_3(VAR_13);
 FUNC_4(VAR_14, VAR_9, VAR_12->HardwareID);
 VAR_16 = FUNC_3(VAR_14);


 FUNC_1(VAR_12->NdisWrapper, FUNC_0(VAR_15),
  FUNC_0(VAR_16), VAR_12->DispatchTable,
  &VAR_17,
  &VAR_18);

 VAR_12->NdisControlDevice = VAR_17;
 VAR_12->NdisControl = VAR_18;


 if (FUNC_5(VAR_12->HardwareID) > 11)
 {
  FUNC_4(VAR_12->HardwarePrintableID, VAR_10, VAR_12->HardwareID_Raw + 11);
 }
 else
 {
  FUNC_4(VAR_12->HardwarePrintableID, VAR_10, VAR_12->HardwareID_Raw);
 }
}
