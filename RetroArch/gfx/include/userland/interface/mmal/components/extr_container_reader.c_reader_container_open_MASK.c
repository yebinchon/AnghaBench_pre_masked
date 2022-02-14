
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
typedef struct TYPE_14__ TYPE_12__ ;
typedef struct TYPE_13__ TYPE_11__ ;


struct TYPE_20__ {unsigned int tracks_num; TYPE_2__** tracks; } ;
typedef TYPE_6__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
typedef scalar_t__ VC_CONTAINER_ES_TYPE_T ;
struct TYPE_22__ {unsigned int ports; TYPE_6__* container; } ;
struct TYPE_21__ {unsigned int output_num; TYPE_5__** output; TYPE_1__* priv; } ;
struct TYPE_19__ {TYPE_11__* format; TYPE_4__* priv; int buffer_size_recommended; int buffer_size_min; int buffer_num_recommended; int buffer_num_min; } ;
struct TYPE_18__ {TYPE_3__* module; } ;
struct TYPE_17__ {unsigned int track; } ;
struct TYPE_16__ {TYPE_12__* format; scalar_t__ is_enabled; } ;
struct TYPE_15__ {TYPE_8__* module; } ;
struct TYPE_14__ {scalar_t__ es_type; int codec; } ;
struct TYPE_13__ {scalar_t__ encoding; int type; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_7__ MMAL_COMPONENT_T ;
typedef TYPE_8__ MMAL_COMPONENT_MODULE_T ;


 int FUNC_0 (char*,char const*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_11__*,TYPE_12__*) ;
 TYPE_6__* FUNC_4 (char const*,int *,int ,int ) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_5(MMAL_COMPONENT_T *VAR_10, const char *VAR_11)
{
   MMAL_COMPONENT_MODULE_T *VAR_12 = VAR_10->priv->module;
   VC_CONTAINER_STATUS_T VAR_13;
   VC_CONTAINER_T *VAR_14;
   unsigned int VAR_15, VAR_16, VAR_17;


   VAR_12->container = VAR_14 =
      FUNC_4(VAR_11, &VAR_13, 0, 0);
   if(!VAR_14)
   {
     FUNC_0("error opening file %s (%i)", VAR_11, VAR_13);
     return FUNC_1(VAR_13);
   }


   for(VAR_17 = 0; VAR_17 < VAR_14->tracks_num; VAR_17++)
      VAR_14->tracks[VAR_17]->is_enabled = 0;


   for(VAR_15 = 0, VAR_16 = 0; VAR_15 < VAR_10->output_num; VAR_15++)
   {
      VC_CONTAINER_ES_TYPE_T VAR_18 = VAR_9;
      if(VAR_15 == 1) VAR_18 = VAR_7;
      if(VAR_15 == 2) VAR_18 = VAR_8;


      for(VAR_17 = 0; VAR_17 < VAR_14->tracks_num; VAR_17++)
         if(VAR_14->tracks[VAR_17]->format->es_type == VAR_18)
            break;
      if(VAR_17 == VAR_14->tracks_num)
         continue;

      if(FUNC_2(VAR_14->tracks[VAR_17]->format->codec) == VAR_0)
         continue;


      if(FUNC_3(VAR_10->output[VAR_16]->format,
                                  VAR_14->tracks[VAR_17]->format) != VAR_2)
         continue;

      VAR_10->output[VAR_16]->buffer_num_min = VAR_3;
      VAR_10->output[VAR_16]->buffer_num_recommended = VAR_5;
      VAR_10->output[VAR_16]->buffer_size_min = VAR_4;
      VAR_10->output[VAR_16]->buffer_size_recommended = VAR_6;
      VAR_10->output[VAR_16]->priv->module->track = VAR_17;


      VAR_16++;
   }
   VAR_12->ports = VAR_16;


   for(VAR_15 = VAR_16; VAR_15 < VAR_10->output_num; VAR_15++)
   {
      VAR_10->output[VAR_15]->format->type = VAR_1;
      VAR_10->output[VAR_15]->format->encoding = VAR_0;
   }

   return VAR_2;
}
