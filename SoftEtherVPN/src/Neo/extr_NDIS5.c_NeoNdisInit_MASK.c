
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_4__ {scalar_t__ Initing; scalar_t__ Inited; int CurrentPacketFilter; struct TYPE_4__* NdisContext; void* NdisMiniport; scalar_t__ ConnectedForce; scalar_t__ ConnectedOld; scalar_t__ Connected; scalar_t__ Halting; int HardwareStatus; void* NdisConfig; int * NdisWrapper; } ;
typedef int NDIS_STATUS ;
typedef scalar_t__ NDIS_MEDIUM ;
typedef void* NDIS_HANDLE ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (void*,TYPE_1__*,scalar_t__,int ) ;
 int FUNC_1 (void*,TYPE_1__*,int,int,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 () ;
 scalar_t__ VAR_14 ;
 TYPE_1__* VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int * VAR_18 ;

NDIS_STATUS FUNC_7(NDIS_STATUS *VAR_19,
     UINT *VAR_20,
     NDIS_MEDIUM *VAR_21,
     UINT VAR_22,
     NDIS_HANDLE VAR_23,
     NDIS_HANDLE VAR_24)
{
 BOOL VAR_25;
 UINT VAR_26;

 if (VAR_15 == ((void*)0))
 {
  return VAR_9;
 }

 if (VAR_15->NdisWrapper == ((void*)0))
 {
  VAR_15->NdisWrapper = VAR_18;
 }


 if (VAR_15->Initing != VAR_0)
 {

  return VAR_9;
 }
 VAR_15->Initing = VAR_14;


 if (VAR_15->Inited != VAR_0)
 {



  return VAR_9;
 }


 VAR_15->CurrentPacketFilter = VAR_6 | VAR_7 | VAR_8 | VAR_5;


 VAR_25 = VAR_0;
 for (VAR_26 = 0;VAR_26 < VAR_22;VAR_26++)
 {
  if (VAR_21[VAR_26] == VAR_11)
  {
   VAR_25 = VAR_14;
   break;
  }
 }
 if (VAR_25 == VAR_0)
 {

  VAR_15->Initing = VAR_0;
  return VAR_9;
 }


 *VAR_20 = VAR_26;


 VAR_15->NdisMiniport = VAR_23;
 VAR_15->NdisConfig = VAR_24;
 VAR_15->NdisContext = VAR_15;
 VAR_15->HardwareStatus = VAR_12;
 VAR_15->Halting = VAR_0;
 VAR_15->Connected = VAR_15->ConnectedOld = VAR_0;

 if (VAR_17 == 0)
 {
  VAR_15->ConnectedForce = VAR_14;
 }


 if (FUNC_4() == VAR_0)
 {

  VAR_15->Initing = VAR_0;
  return VAR_9;
 }



 if (VAR_16 == 0)
 {
  FUNC_0(VAR_15->NdisMiniport, VAR_15->NdisContext, VAR_0, VAR_13);
 }
 else
 {
  FUNC_1(VAR_15->NdisMiniport, VAR_15->NdisContext, 16,
   VAR_1 | VAR_2 | VAR_3 | VAR_4,
   VAR_13);
 }


 FUNC_3();


 FUNC_2();


 FUNC_6();


 VAR_15->Initing = VAR_0;
 VAR_15->Inited = VAR_14;


 FUNC_5(VAR_0);

 return VAR_10;
}
