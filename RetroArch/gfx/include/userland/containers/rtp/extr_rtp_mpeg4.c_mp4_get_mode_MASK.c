
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* priv; } ;
typedef TYPE_3__ VC_CONTAINER_TRACK_T ;
typedef int VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
typedef int VC_CONTAINERS_LIST_T ;
struct TYPE_13__ {int mode; } ;
struct TYPE_12__ {char* name; char* value; int mode; } ;
struct TYPE_10__ {TYPE_1__* module; } ;
struct TYPE_9__ {scalar_t__ extra; } ;
typedef TYPE_4__ PARAMETER_T ;
typedef TYPE_5__ MP4_PAYLOAD_T ;
typedef TYPE_4__ MP4_MODE_ENTRY_T ;


 int FUNC_0 (int *,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int const VAR_2 ;
 int FUNC_1 (int const*,TYPE_4__*) ;
 int FUNC_2 (int const*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_3(VC_CONTAINER_T *VAR_3,
      VC_CONTAINER_TRACK_T *VAR_4,
      const VC_CONTAINERS_LIST_T *VAR_5)
{
   MP4_PAYLOAD_T *VAR_6 = (MP4_PAYLOAD_T *)VAR_4->priv->module->extra;
   PARAMETER_T VAR_7;
   MP4_MODE_ENTRY_T VAR_8;

   VAR_7.name = "mode";
   if (!FUNC_1(VAR_5, &VAR_7) || !VAR_7.value)
   {
      FUNC_0(VAR_3, "MPEG-4: mode parameter missing");
      return VAR_0;
   }





   VAR_8.name = VAR_7.value;
   if (!FUNC_1(&VAR_2, &VAR_8))
   {
      FUNC_0(VAR_3, "MPEG-4: Unrecognised mode parameter \"%s\"", VAR_8.name);
      return VAR_0;
   }

   VAR_6->mode = VAR_8.mode;

   return VAR_1;
}
