
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_16__ {TYPE_3__* format; } ;
typedef TYPE_5__ VC_CONTAINER_TRACK_T ;
struct TYPE_17__ {TYPE_5__** tracks; TYPE_4__* priv; } ;
typedef TYPE_6__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_18__ {size_t current_track; } ;
typedef TYPE_7__ VC_CONTAINER_MODULE_T ;
struct TYPE_15__ {TYPE_7__* module; } ;
struct TYPE_14__ {TYPE_2__* type; } ;
struct TYPE_12__ {int channels; int sample_rate; } ;
struct TYPE_13__ {TYPE_1__ audio; } ;


 int FUNC_0 (TYPE_6__*,char*) ;
 int FUNC_1 (TYPE_6__*,char*) ;
 int FUNC_2 (TYPE_6__*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_3( VC_CONTAINER_T *VAR_0, int64_t VAR_1 )
{
   VC_CONTAINER_MODULE_T *VAR_2 = VAR_0->priv->module;
   VC_CONTAINER_TRACK_T *VAR_3 = VAR_0->tracks[VAR_2->current_track];

   FUNC_0(VAR_0, "vendor");
   FUNC_1(VAR_0, "version");
   FUNC_1(VAR_0, "samples_per_frame");

   VAR_3->format->type->audio.channels = 1;
   VAR_3->format->type->audio.sample_rate = 8000;

   return FUNC_2(VAR_0);
}
