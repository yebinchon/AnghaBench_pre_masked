
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
struct TYPE_16__ {TYPE_4__* format; } ;
typedef TYPE_5__ VC_CONTAINER_TRACK_T ;
struct TYPE_17__ {TYPE_5__** tracks; TYPE_1__* priv; } ;
typedef TYPE_6__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_18__ {size_t current_track; } ;
typedef TYPE_7__ VC_CONTAINER_MODULE_T ;
struct TYPE_15__ {scalar_t__ codec; TYPE_3__* type; } ;
struct TYPE_13__ {int channels; int sample_rate; } ;
struct TYPE_14__ {TYPE_2__ audio; } ;
struct TYPE_12__ {TYPE_7__* module; } ;


 int FUNC_0 (TYPE_6__*,char*) ;
 int FUNC_1 (TYPE_6__*,char*) ;
 int FUNC_2 (TYPE_6__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_3( VC_CONTAINER_T *VAR_2, int64_t VAR_3 )
{
   VC_CONTAINER_MODULE_T *VAR_4 = VAR_2->priv->module;
   VC_CONTAINER_TRACK_T *VAR_5 = VAR_2->tracks[VAR_4->current_track];

   FUNC_0(VAR_2, "vendor");
   FUNC_1(VAR_2, "version");
   FUNC_1(VAR_2, "mode_set");
   FUNC_1(VAR_2, "mode_change_period");
   FUNC_1(VAR_2, "frame_per_second");

   VAR_5->format->type->audio.channels = 1;
   if(VAR_5->format->codec == VAR_0)
      VAR_5->format->type->audio.sample_rate = 8000;
   else if(VAR_5->format->codec == VAR_1)
      VAR_5->format->type->audio.sample_rate = 16000;

   return FUNC_2(VAR_2);
}
