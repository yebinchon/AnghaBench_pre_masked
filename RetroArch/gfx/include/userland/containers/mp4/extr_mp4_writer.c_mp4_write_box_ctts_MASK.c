
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


struct TYPE_17__ {TYPE_4__* sample_table; } ;
typedef TYPE_5__ VC_CONTAINER_TRACK_MODULE_T ;
struct TYPE_18__ {TYPE_3__** tracks; TYPE_1__* priv; } ;
typedef TYPE_6__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_19__ {size_t current_track; } ;
typedef TYPE_7__ VC_CONTAINER_MODULE_T ;
struct TYPE_16__ {int entries; } ;
struct TYPE_15__ {TYPE_2__* priv; } ;
struct TYPE_14__ {TYPE_5__* module; } ;
struct TYPE_13__ {TYPE_7__* module; } ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_6__*,int ,char*) ;
 int FUNC_2 (TYPE_6__*,int ,char*) ;
 int FUNC_3 (TYPE_6__*,int ,char*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_4( VC_CONTAINER_T *VAR_1 )
{
   VC_CONTAINER_MODULE_T *VAR_2 = VAR_1->priv->module;
   VC_CONTAINER_TRACK_MODULE_T *VAR_3 = VAR_1->tracks[VAR_2->current_track]->priv->module;

   FUNC_3(VAR_1, 0, "version");
   FUNC_1(VAR_1, 0, "flags");
   FUNC_2(VAR_1, VAR_3->sample_table[VAR_0].entries, "entry_count");
   return FUNC_0(VAR_1);
}
