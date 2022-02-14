
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int int64_t ;
struct TYPE_27__ {scalar_t__ offset; int pts; } ;
struct TYPE_25__ {TYPE_9__ state; TYPE_3__* sample_table; } ;
typedef TYPE_6__ VC_CONTAINER_TRACK_MODULE_T ;
struct TYPE_26__ {size_t tracks_num; TYPE_5__** tracks; TYPE_1__* priv; } ;
typedef TYPE_7__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
typedef int * VC_CONTAINER_SEEK_MODE_T ;
typedef int VC_CONTAINER_SEEK_FLAGS_T ;
typedef int VC_CONTAINER_MODULE_T ;
struct TYPE_24__ {TYPE_4__* priv; TYPE_2__* format; scalar_t__ is_enabled; } ;
struct TYPE_23__ {TYPE_6__* module; } ;
struct TYPE_22__ {size_t entries; } ;
struct TYPE_21__ {scalar_t__ es_type; } ;
struct TYPE_20__ {int * module; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (TYPE_9__*,int ,int) ;
 size_t FUNC_3 (TYPE_7__*,size_t,TYPE_9__*,int ,scalar_t__*) ;
 int FUNC_4 (TYPE_7__*,size_t,TYPE_9__*) ;
 scalar_t__ FUNC_5 (TYPE_7__*,TYPE_6__*,TYPE_9__*,size_t) ;
 scalar_t__ FUNC_6 (TYPE_7__*,size_t,TYPE_9__*,size_t) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_7(VC_CONTAINER_T *VAR_4,
   int64_t *VAR_5, VC_CONTAINER_SEEK_MODE_T VAR_6, VC_CONTAINER_SEEK_FLAGS_T VAR_7)
{
   VC_CONTAINER_MODULE_T *VAR_8 = VAR_4->priv->module;
   VC_CONTAINER_TRACK_MODULE_T *VAR_9;
   VC_CONTAINER_STATUS_T VAR_10;
   uint32_t VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
   int64_t VAR_16 = *VAR_5;
   FUNC_0(VAR_8);
   FUNC_0(VAR_6);


   for(VAR_11 = 0; VAR_11 < VAR_4->tracks_num; VAR_11++)
      FUNC_2(&VAR_4->tracks[VAR_11]->priv->module->state, 0, sizeof(VAR_4->tracks[VAR_11]->priv->module->state));


   if(!*VAR_5)
   {

      for(VAR_11 = 0; VAR_11 < VAR_4->tracks_num; VAR_11++)
      {

        FUNC_4(VAR_4, VAR_11, &VAR_4->tracks[VAR_11]->priv->module->state);
      }
      return VAR_3;
   }


   for(VAR_12 = 0; VAR_12 < VAR_4->tracks_num; VAR_12++)
      if(VAR_4->tracks[VAR_12]->is_enabled &&
         VAR_4->tracks[VAR_12]->format->es_type == VAR_1) break;
   if(VAR_12 == VAR_4->tracks_num) goto seek_time_found;
   VAR_9 = VAR_4->tracks[VAR_12]->priv->module;


   VAR_13 = FUNC_3( VAR_4, VAR_12, &VAR_9->state, VAR_16, &VAR_10 );
   if(VAR_10 != VAR_3) goto seek_time_found;


   VAR_10 = FUNC_5( VAR_4, VAR_9, &VAR_9->state, VAR_0 );
   if(VAR_10 != VAR_3) goto seek_time_found;
   for(VAR_11 = 0, VAR_14 = 0, VAR_15 = 0;
       VAR_11 < VAR_9->sample_table[VAR_0].entries; VAR_11++)
   {
      VAR_15 = FUNC_1(VAR_4) - 1;
      if(VAR_15 > VAR_13)
      {
         VAR_13 = (VAR_7 & VAR_2) ? VAR_15 : VAR_14;
         break;
      }
      VAR_14 = VAR_15;
   }


   VAR_10 = FUNC_6(VAR_4, VAR_12, &VAR_9->state, VAR_13);
   if(VAR_10 != VAR_3) goto seek_time_found;
   VAR_16 = VAR_9->state.pts;

 seek_time_found:

   for(VAR_11 = 0; VAR_11 < VAR_4->tracks_num; VAR_11++)
   {
      uint32_t VAR_17;
      VAR_9 = VAR_4->tracks[VAR_11]->priv->module;
      if(VAR_9->state.offset) continue;
      VAR_17 = FUNC_3( VAR_4, VAR_11, &VAR_9->state, VAR_16, &VAR_10 );
      if(VAR_10 != VAR_3) return VAR_10;

      VAR_10 = FUNC_6(VAR_4, VAR_11, &VAR_9->state, VAR_17);
   }

   *VAR_5 = VAR_16;
   return VAR_3;
}
