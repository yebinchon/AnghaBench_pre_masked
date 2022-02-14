
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UNICODE_STRING ;
typedef int ULONG ;
struct TYPE_6__ {int NdisWrapper; } ;
struct TYPE_5__ {int * SendHandler; int SendPacketsHandler; int SetInformationHandler; int ResetHandler; int QueryInformationHandler; int HaltHandler; int InitializeHandler; int MinorNdisVersion; int MajorNdisVersion; } ;
typedef int NDIS_STATUS ;
typedef TYPE_1__ NDIS_MINIPORT_CHARACTERISTICS ;
typedef int DRIVER_OBJECT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int *,int *) ;
 int FUNC_2 (int ,TYPE_1__*,int) ;
 scalar_t__ FUNC_3 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (int*,int*,int *,int *) ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_2__* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

NDIS_STATUS FUNC_6(DRIVER_OBJECT *VAR_14, UNICODE_STRING *VAR_15)
{
 NDIS_MINIPORT_CHARACTERISTICS VAR_16;
 ULONG VAR_17 = 0, VAR_18 = 0;


 if (FUNC_3() == VAR_0)
 {

  return VAR_10;
 }

 VAR_12 = 0;



 FUNC_5(&VAR_17, &VAR_18, ((void*)0), ((void*)0));

 if (VAR_17 >= 7 || (VAR_17 == 6 && VAR_18 >= 2))
 {

  VAR_12 = 1;
 }



 FUNC_1(&VAR_11->NdisWrapper, VAR_14, VAR_15, ((void*)0));
 VAR_13 = VAR_11->NdisWrapper;


 FUNC_4(&VAR_16, sizeof(NDIS_MINIPORT_CHARACTERISTICS));
 VAR_16.MajorNdisVersion = VAR_1;
 VAR_16.MinorNdisVersion = VAR_2;


 VAR_16.InitializeHandler = VAR_4;
 VAR_16.HaltHandler = VAR_3;
 VAR_16.QueryInformationHandler = VAR_5;
 VAR_16.ResetHandler = VAR_6;
 VAR_16.SetInformationHandler = VAR_8;


 VAR_16.SendPacketsHandler = VAR_7;




 if (FUNC_0(FUNC_2(VAR_11->NdisWrapper, &VAR_16, sizeof(NDIS_MINIPORT_CHARACTERISTICS))))
 {

  return VAR_10;
 }


 return VAR_9;
}
