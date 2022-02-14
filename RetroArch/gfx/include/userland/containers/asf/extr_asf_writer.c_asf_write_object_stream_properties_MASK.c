
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {TYPE_6__** tracks; TYPE_1__* priv; } ;
typedef TYPE_3__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_17__ {unsigned int current_track; } ;
typedef TYPE_4__ VC_CONTAINER_MODULE_T ;
struct TYPE_18__ {TYPE_2__* format; } ;
struct TYPE_15__ {scalar_t__ es_type; int extradata_size; } ;
struct TYPE_14__ {TYPE_4__* module; } ;
typedef int GUID_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int const*,char*) ;
 int FUNC_1 (TYPE_3__*,unsigned int,char*) ;
 int FUNC_2 (TYPE_3__*,unsigned int,char*) ;
 int FUNC_3 (TYPE_3__*,int ,char*) ;
 int const VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (TYPE_3__*,TYPE_6__*) ;
 int FUNC_5 (TYPE_3__*,TYPE_6__*) ;
 int VAR_6 ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_6( VC_CONTAINER_T *VAR_7 )
{
   VC_CONTAINER_STATUS_T VAR_8 = VAR_2;
   VC_CONTAINER_MODULE_T *VAR_9 = VAR_7->priv->module;
   unsigned int VAR_10 = VAR_9->current_track, VAR_11 = 0;
   const GUID_T *VAR_12 = &VAR_6;

   if(VAR_7->tracks[VAR_10]->format->es_type == VAR_1)
   {
      VAR_12 = &VAR_5;
      VAR_11 = 11 + 40 + VAR_7->tracks[VAR_10]->format->extradata_size;
   }
   else if(VAR_7->tracks[VAR_10]->format->es_type == VAR_0)
   {
      VAR_12 = &VAR_4;
      VAR_11 = 18 + VAR_7->tracks[VAR_10]->format->extradata_size;
   }

   FUNC_0(VAR_7, VAR_12, "Stream Type");
   FUNC_0(VAR_7, &VAR_3, "Error Correction Type");
   FUNC_3(VAR_7, 0, "Time Offset");
   FUNC_2(VAR_7, VAR_11, "Type-Specific Data Length");
   FUNC_2(VAR_7, 0, "Error Correction Data Length");
   FUNC_1(VAR_7, VAR_10 + 1, "Flags");
   FUNC_2(VAR_7, 0, "Reserved");


   if(VAR_11)
   {
      if(VAR_7->tracks[VAR_10]->format->es_type == VAR_1)
         VAR_8 = FUNC_4( VAR_7, VAR_7->tracks[VAR_10]);
      else if(VAR_7->tracks[VAR_10]->format->es_type == VAR_0)
         VAR_8 = FUNC_5( VAR_7, VAR_7->tracks[VAR_10]);
   }



   return VAR_8;
}
