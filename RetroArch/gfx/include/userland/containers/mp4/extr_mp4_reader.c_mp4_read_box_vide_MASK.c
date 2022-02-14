
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_20__ {TYPE_4__* format; } ;
typedef TYPE_5__ VC_CONTAINER_TRACK_T ;
struct TYPE_21__ {TYPE_5__** tracks; TYPE_1__* priv; } ;
typedef TYPE_6__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_22__ {size_t current_track; } ;
typedef TYPE_7__ VC_CONTAINER_MODULE_T ;
struct TYPE_19__ {TYPE_3__* type; } ;
struct TYPE_17__ {void* height; void* width; } ;
struct TYPE_18__ {TYPE_2__ video; } ;
struct TYPE_16__ {TYPE_7__* module; } ;


 int VAR_0 ;
 void* FUNC_0 (TYPE_6__*,char*) ;
 int FUNC_1 (TYPE_6__*,int) ;
 int FUNC_2 (TYPE_6__*,char*) ;
 int FUNC_3 (TYPE_6__*,char*) ;
 int FUNC_4 (TYPE_6__*,char*) ;
 int FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (TYPE_6__*,scalar_t__,int ) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_7( VC_CONTAINER_T *VAR_1, int64_t VAR_2 )
{
   VC_CONTAINER_MODULE_T *VAR_3 = VAR_1->priv->module;
   VC_CONTAINER_TRACK_T *VAR_4 = VAR_1->tracks[VAR_3->current_track];
   unsigned int VAR_5;

   for(VAR_5 = 0; VAR_5 < 6; VAR_5++) FUNC_4(VAR_1, "reserved");
   FUNC_2(VAR_1, "data_reference_index");

   FUNC_2(VAR_1, "pre_defined");
   FUNC_2(VAR_1, "reserved");
   for(VAR_5 = 0; VAR_5 < 3; VAR_5++) FUNC_3(VAR_1, "pre_defined");
   VAR_4->format->type->video.width = FUNC_0(VAR_1, "width");
   VAR_4->format->type->video.height = FUNC_0(VAR_1, "height");
   FUNC_3(VAR_1, "horizresolution");
   FUNC_3(VAR_1, "vertresolution");
   FUNC_3(VAR_1, "reserved");
   FUNC_2(VAR_1, "frame_count");
   FUNC_1(VAR_1, 32);
   FUNC_2(VAR_1, "depth");
   FUNC_2(VAR_1, "pre_defined");

   if(VAR_2 > 0)
      return FUNC_6( VAR_1, VAR_2, VAR_0 );

   return FUNC_5(VAR_1);
}
