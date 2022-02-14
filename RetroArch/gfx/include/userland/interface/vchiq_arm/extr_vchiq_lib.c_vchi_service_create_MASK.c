
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int params ;
typedef int int32_t ;
typedef int VCHI_SERVICE_HANDLE_T ;
typedef scalar_t__ VCHI_INSTANCE_T ;
typedef scalar_t__ VCHIQ_STATUS_T ;
struct TYPE_8__ {short version; short version_min; int userdata; int fourcc; } ;
typedef TYPE_2__ VCHIQ_SERVICE_PARAMS_T ;
typedef int VCHIQ_SERVICE_HANDLE_T ;
typedef int VCHIQ_INSTANCE_T ;
struct TYPE_7__ {scalar_t__ version_min; scalar_t__ version; } ;
struct TYPE_9__ {int callback; TYPE_1__ version; int callback_param; int service_id; } ;
typedef TYPE_3__ SERVICE_CREATION_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,TYPE_2__*,int ,int ,int *) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;

int32_t
FUNC_2( VCHI_INSTANCE_T VAR_1,
   SERVICE_CREATION_T *VAR_2, VCHI_SERVICE_HANDLE_T *VAR_3 )
{
   VCHIQ_SERVICE_PARAMS_T VAR_4;
   VCHIQ_STATUS_T VAR_5;

   FUNC_1(&VAR_4, 0, sizeof(VAR_4));
   VAR_4.fourcc = VAR_2->service_id;
   VAR_4.userdata = VAR_2->callback_param;
   VAR_4.version = (short)VAR_2->version.version;
   VAR_4.version_min = (short)VAR_2->version.version_min;

   VAR_5 = FUNC_0((VCHIQ_INSTANCE_T)VAR_1,
      &VAR_4,
      VAR_2->callback,
      0 ,
      (VCHIQ_SERVICE_HANDLE_T *)VAR_3);

   return (VAR_5 == VAR_0) ? 0 : -1;
}
