
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_17__ {TYPE_4__* format; TYPE_3__* priv; } ;
typedef TYPE_5__ VC_CONTAINER_TRACK_T ;
struct TYPE_18__ {TYPE_5__** tracks; TYPE_1__* priv; } ;
typedef TYPE_6__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_19__ {size_t current_track; } ;
typedef TYPE_7__ VC_CONTAINER_MODULE_T ;
struct TYPE_16__ {scalar_t__ es_type; } ;
struct TYPE_15__ {TYPE_2__* module; } ;
struct TYPE_14__ {int fourcc; } ;
struct TYPE_13__ {TYPE_7__* module; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_6__*,int ,char*) ;
 int FUNC_1 (TYPE_6__*,int,char*) ;
 int FUNC_2 (TYPE_6__*,int ,char*) ;
 int FUNC_3 (TYPE_6__*,int ,int ) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_4( VC_CONTAINER_T *VAR_6 )
{
   VC_CONTAINER_MODULE_T *VAR_7 = VAR_6->priv->module;
   VC_CONTAINER_TRACK_T *VAR_8 = VAR_6->tracks[VAR_7->current_track];
   VC_CONTAINER_STATUS_T VAR_9 = VAR_5;

   FUNC_2(VAR_6, 0, "version");
   FUNC_0(VAR_6, 0, "flags");

   FUNC_1(VAR_6, 1, "entry_count");

   if(VAR_8->format->es_type == VAR_4)
      VAR_9 = FUNC_3(VAR_6, VAR_1, VAR_8->priv->module->fourcc);
   else if(VAR_8->format->es_type == VAR_2)
      VAR_9 = FUNC_3(VAR_6, VAR_0, VAR_8->priv->module->fourcc);





   return VAR_9;
}
