
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_18__ {int is_enabled; TYPE_5__* format; TYPE_4__* priv; } ;
typedef TYPE_6__ VC_CONTAINER_TRACK_T ;
struct TYPE_19__ {size_t tracks_num; TYPE_6__** tracks; TYPE_1__* priv; } ;
typedef TYPE_7__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_20__ {int current_track; } ;
typedef TYPE_8__ VC_CONTAINER_MODULE_T ;
struct TYPE_17__ {int flags; } ;
struct TYPE_16__ {TYPE_3__* module; } ;
struct TYPE_15__ {TYPE_2__* sample_table; } ;
struct TYPE_14__ {int entry_size; } ;
struct TYPE_13__ {TYPE_8__* module; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (TYPE_7__*,int ,int ) ;
 TYPE_6__* FUNC_1 (TYPE_7__*,int) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_2( VC_CONTAINER_T *VAR_13, int64_t VAR_14 )
{
   VC_CONTAINER_STATUS_T VAR_15 = VAR_12;
   VC_CONTAINER_MODULE_T *VAR_16 = VAR_13->priv->module;
   VC_CONTAINER_TRACK_T *VAR_17;


   if(VAR_13->tracks_num >= VAR_8) return VAR_10;
   VAR_13->tracks[VAR_13->tracks_num] = VAR_17 =
      FUNC_1(VAR_13, sizeof(*VAR_13->tracks[0]->priv->module));
   if(!VAR_17) return VAR_9;

   VAR_17->priv->module->sample_table[VAR_7].entry_size = 8;
   VAR_17->priv->module->sample_table[VAR_6].entry_size = 4;
   VAR_17->priv->module->sample_table[VAR_4].entry_size = 12;
   VAR_17->priv->module->sample_table[VAR_3].entry_size = 4;
   VAR_17->priv->module->sample_table[VAR_5].entry_size = 4;
   VAR_17->priv->module->sample_table[VAR_1].entry_size = 8;
   VAR_17->priv->module->sample_table[VAR_2].entry_size = 8;

   VAR_15 = FUNC_0( VAR_13, VAR_14, VAR_0);



   VAR_17->is_enabled = 1;
   VAR_17->format->flags |= VAR_11;
   VAR_16->current_track++;
   VAR_13->tracks_num++;

   return VAR_15;
}
