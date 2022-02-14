
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_19__ {TYPE_4__* format; } ;
typedef TYPE_5__ VC_CONTAINER_TRACK_T ;
struct TYPE_20__ {int duration; TYPE_5__** tracks; TYPE_1__* priv; } ;
typedef TYPE_6__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_21__ {size_t current_track; } ;
typedef TYPE_7__ VC_CONTAINER_MODULE_T ;
struct TYPE_18__ {scalar_t__ es_type; TYPE_3__* type; } ;
struct TYPE_16__ {int width; int height; int par_den; scalar_t__ par_num; } ;
struct TYPE_17__ {TYPE_2__ video; } ;
struct TYPE_15__ {TYPE_7__* module; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_6__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (TYPE_6__*,int,char*) ;
 int FUNC_2 (TYPE_6__*,int,char*) ;
 int FUNC_3 (TYPE_6__*,int,char*) ;
 int FUNC_4 (TYPE_6__*,int,char*) ;
 int FUNC_5 (TYPE_6__*,unsigned int,char*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_6( VC_CONTAINER_T *VAR_5 )
{
   static uint32_t VAR_6[] = { 0x10000,0,0,0,0x10000,0,0,0,0x40000000 };
   VC_CONTAINER_MODULE_T *VAR_7 = VAR_5->priv->module;
   VC_CONTAINER_TRACK_T *VAR_8 = VAR_5->tracks[VAR_7->current_track];
   unsigned int VAR_9 = VAR_0;
   uint32_t VAR_10, VAR_11 = 0, VAR_12 = 0;

   FUNC_5(VAR_5, VAR_9, "version");
   FUNC_2(VAR_5, 0x7, "flags");

   if(VAR_9)
   {
      FUNC_4(VAR_5, 0, "creation_time");
      FUNC_4(VAR_5, 0, "modification_time");
      FUNC_3(VAR_5, VAR_7->current_track + 1, "track_ID");
      FUNC_3(VAR_5, 0, "reserved");
      FUNC_4(VAR_5, VAR_5->duration * VAR_1 / 1000000, "duration");
   }
   else
   {
      FUNC_3(VAR_5, 0, "creation_time");
      FUNC_3(VAR_5, 0, "modification_time");
      FUNC_3(VAR_5, VAR_7->current_track + 1, "track_ID");
      FUNC_3(VAR_5, 0, "reserved");
      FUNC_3(VAR_5, VAR_5->duration * VAR_1 / 1000000, "duration");
   }

   for(VAR_10 = 0; VAR_10 < 2; VAR_10++)
      FUNC_3(VAR_5, 0, "reserved");
   FUNC_1(VAR_5, 0, "layer");
   FUNC_1(VAR_5, 0, "alternate_group");
   FUNC_1(VAR_5, VAR_8->format->es_type == VAR_2 ? 0x100 : 0, "volume");
   FUNC_1(VAR_5, 0, "reserved");
   for(VAR_10 = 0; VAR_10 < 9; VAR_10++)
      FUNC_3(VAR_5, VAR_6[VAR_10], "matrix");

   if(VAR_8->format->es_type == VAR_4)
   {
      VAR_11 = VAR_8->format->type->video.width << 16;
      VAR_12 = VAR_8->format->type->video.height << 16;
      if(VAR_8->format->type->video.par_num && VAR_8->format->type->video.par_den)
         VAR_11 = VAR_11 * (uint64_t)VAR_8->format->type->video.par_num /
            VAR_8->format->type->video.par_den;
   }
   else if(VAR_8->format->es_type == VAR_3)
   {

   }

   FUNC_3(VAR_5, VAR_11, "width");
   FUNC_3(VAR_5, VAR_12, "height");

   return FUNC_0(VAR_5);
}
