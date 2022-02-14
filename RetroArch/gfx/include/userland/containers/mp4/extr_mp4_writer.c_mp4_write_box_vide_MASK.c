
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_21__ {TYPE_4__* format; } ;
typedef TYPE_5__ VC_CONTAINER_TRACK_T ;
struct TYPE_22__ {TYPE_5__** tracks; TYPE_1__* priv; } ;
typedef TYPE_6__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_23__ {size_t current_track; } ;
typedef TYPE_7__ VC_CONTAINER_MODULE_T ;
struct TYPE_20__ {int codec; TYPE_3__* type; } ;
struct TYPE_18__ {int width; int height; } ;
struct TYPE_19__ {TYPE_2__ video; } ;
struct TYPE_17__ {TYPE_7__* module; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_6__*) ;



 int FUNC_1 (TYPE_6__*,int,char*) ;
 int FUNC_2 (TYPE_6__*,int,char*) ;
 int FUNC_3 (TYPE_6__*,int ,char*) ;
 int FUNC_4 (TYPE_6__*,int ) ;
 int FUNC_5 (TYPE_6__*,int ) ;
 int FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (TYPE_6__*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_8( VC_CONTAINER_T *VAR_1 )
{
   VC_CONTAINER_MODULE_T *VAR_2 = VAR_1->priv->module;
   VC_CONTAINER_TRACK_T *VAR_3 = VAR_1->tracks[VAR_2->current_track];
   unsigned int VAR_4;

   for(VAR_4 = 0; VAR_4 < 6; VAR_4++) FUNC_3(VAR_1, 0, "reserved");
   FUNC_1(VAR_1, 1, "data_reference_index");

   FUNC_1(VAR_1, 0, "pre_defined");
   FUNC_1(VAR_1, 0, "reserved");
   for(VAR_4 = 0; VAR_4 < 3; VAR_4++) FUNC_2(VAR_1, 0, "pre_defined");
   FUNC_1(VAR_1, VAR_3->format->type->video.width, "width");
   FUNC_1(VAR_1, VAR_3->format->type->video.height, "height");
   FUNC_2(VAR_1, 0x480000, "horizresolution");
   FUNC_2(VAR_1, 0x480000, "vertresolution");
   FUNC_2(VAR_1, 0, "reserved");
   FUNC_1(VAR_1, 1, "frame_count");
   for(VAR_4 = 0; VAR_4 < 32; VAR_4++) FUNC_4(VAR_1, 0);
   FUNC_1(VAR_1, 0x18, "depth");
   FUNC_1(VAR_1, -1, "pre_defined");

   switch(VAR_3->format->codec)
   {
   case 129: return FUNC_6(VAR_1);
   case 130: return FUNC_7(VAR_1);
   case 128: return FUNC_5(VAR_1, VAR_0);
   default: break;
   }

   return FUNC_0(VAR_1);
}
