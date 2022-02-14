
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef scalar_t__ int64_t ;
struct TYPE_16__ {size_t track; scalar_t__ dts; int size; } ;
struct TYPE_14__ {int reader; TYPE_7__ info; } ;
typedef TYPE_5__ VC_CONTAINER_TRACK_MODULE_T ;
struct TYPE_15__ {size_t tracks_num; TYPE_4__* priv; TYPE_2__** tracks; } ;
typedef TYPE_6__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
typedef TYPE_7__ VC_CONTAINER_PACKET_T ;
struct TYPE_13__ {TYPE_3__* module; } ;
struct TYPE_12__ {TYPE_5__* current_track; } ;
struct TYPE_11__ {TYPE_1__* priv; } ;
struct TYPE_10__ {TYPE_5__* module; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,TYPE_7__*,int ) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_1( VC_CONTAINER_T *VAR_4 )
{
   VC_CONTAINER_STATUS_T VAR_5 = VAR_3;
   uint32_t VAR_6 = VAR_4->tracks_num;
   uint32_t VAR_7;
   int64_t VAR_8 = VAR_0;
   VC_CONTAINER_TRACK_MODULE_T *VAR_9 = ((void*)0);


   VAR_4->priv->module->current_track = ((void*)0);


   for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
   {
      VC_CONTAINER_TRACK_MODULE_T *VAR_10 = VAR_4->tracks[VAR_7]->priv->module;
      VC_CONTAINER_PACKET_T *VAR_11 = &VAR_10->info;


      if (!VAR_11->size)
      {

         VAR_5 = FUNC_0(VAR_10->reader, VAR_11, VAR_2);

         VAR_11->track = VAR_7;
      }

      if (VAR_5 == VAR_3)
      {
         if (VAR_11->dts < VAR_8)
         {
            VAR_8 = VAR_11->dts;
            VAR_9 = VAR_10;
         }
      }
      else if (VAR_5 != VAR_1)
      {

         return VAR_5;
      }
   }

   VAR_4->priv->module->current_track = VAR_9;

   return VAR_3;
}
