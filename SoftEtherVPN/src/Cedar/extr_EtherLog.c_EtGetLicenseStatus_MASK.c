
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_9__ {int Expires; int SystemId; int Valid; } ;
struct TYPE_8__ {TYPE_6__* LicenseStatus; int * LicenseSystem; } ;
struct TYPE_7__ {int SystemExpires; int SystemId; int Valid; } ;
typedef TYPE_1__ RPC_EL_LICENSE_STATUS ;
typedef int LICENSE_SYSTEM ;
typedef TYPE_2__ EL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_6__*) ;
 int FUNC_1 (TYPE_1__*,int) ;

UINT FUNC_2(EL *VAR_2, RPC_EL_LICENSE_STATUS *VAR_3)
{
 UINT VAR_4 = VAR_1;
 LICENSE_SYSTEM *VAR_5 = VAR_2->LicenseSystem;

 if (VAR_5 == ((void*)0))
 {
  return VAR_0;
 }

 FUNC_1(VAR_3, sizeof(RPC_EL_LICENSE_STATUS));


 FUNC_0(VAR_5, VAR_2->LicenseStatus);

 VAR_3->Valid = VAR_2->LicenseStatus->Valid;
 VAR_3->SystemId = VAR_2->LicenseStatus->SystemId;
 VAR_3->SystemExpires = VAR_2->LicenseStatus->Expires;

 return VAR_4;
}
