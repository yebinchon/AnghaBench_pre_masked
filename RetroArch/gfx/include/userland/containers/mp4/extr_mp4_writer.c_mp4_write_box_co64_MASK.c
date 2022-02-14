
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_20__ {TYPE_2__* sample_table; } ;
typedef TYPE_6__ VC_CONTAINER_TRACK_MODULE_T ;
struct TYPE_21__ {TYPE_5__** tracks; TYPE_3__* priv; } ;
typedef TYPE_7__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_15__ {scalar_t__ refcount; } ;
struct TYPE_22__ {size_t current_track; TYPE_1__ null; } ;
typedef TYPE_8__ VC_CONTAINER_MODULE_T ;
struct TYPE_19__ {TYPE_4__* priv; } ;
struct TYPE_18__ {TYPE_6__* module; } ;
struct TYPE_17__ {TYPE_8__* module; } ;
struct TYPE_16__ {int entries; } ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (TYPE_7__*,int ,int) ;
 int FUNC_2 (TYPE_7__*,int ,char*) ;
 int FUNC_3 (TYPE_7__*,int,char*) ;
 int FUNC_4 (TYPE_7__*,int ,char*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_5( VC_CONTAINER_T *VAR_1 )
{
   VC_CONTAINER_MODULE_T *VAR_2 = VAR_1->priv->module;
   VC_CONTAINER_TRACK_MODULE_T *VAR_3 = VAR_1->tracks[VAR_2->current_track]->priv->module;

   FUNC_4(VAR_1, 0, "version");
   FUNC_2(VAR_1, 0, "flags");
   FUNC_3(VAR_1, VAR_3->sample_table[VAR_0].entries, "entry_count");

   if(VAR_2->null.refcount)
   {

      FUNC_1(VAR_1, 0, VAR_3->sample_table[VAR_0].entries * 8);
      return FUNC_0(VAR_1);
   }

   return FUNC_0(VAR_1);
}
