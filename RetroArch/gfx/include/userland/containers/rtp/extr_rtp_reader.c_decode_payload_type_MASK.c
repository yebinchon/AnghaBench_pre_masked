
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_9__ {TYPE_1__* priv; } ;
typedef TYPE_2__ VC_CONTAINER_TRACK_T ;
struct TYPE_10__ {scalar_t__ payload_type; } ;
typedef TYPE_3__ VC_CONTAINER_TRACK_MODULE_T ;
typedef int VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
typedef int VC_CONTAINERS_LIST_T ;
struct TYPE_8__ {TYPE_3__* module; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_3 (int *,TYPE_2__*,int const*) ;
 int FUNC_4 (int *,TYPE_2__*,int const*,scalar_t__) ;
 int FUNC_5 (int *,TYPE_2__*,int const*,scalar_t__) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_6(VC_CONTAINER_T *VAR_1,
      VC_CONTAINER_TRACK_T *VAR_2,
      const VC_CONTAINERS_LIST_T *VAR_3,
      uint32_t VAR_4)
{
   VC_CONTAINER_TRACK_MODULE_T *VAR_5 = VAR_2->priv->module;
   VC_CONTAINER_STATUS_T VAR_6;

   if (FUNC_1(VAR_4))
      VAR_6 = FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4);
   else if (FUNC_2(VAR_4))
      VAR_6 = FUNC_5(VAR_1, VAR_2, VAR_3, VAR_4);
   else if (FUNC_0(VAR_4))
      VAR_6 = FUNC_3(VAR_1, VAR_2, VAR_3);
   else
      VAR_6 = VAR_0;

   VAR_5->payload_type = (uint8_t)VAR_4;

   return VAR_6;
}
