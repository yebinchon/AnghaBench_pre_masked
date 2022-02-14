
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ int64_t ;
struct TYPE_13__ {TYPE_1__* priv; } ;
typedef TYPE_2__ VC_CONTAINER_TRACK_T ;
struct TYPE_14__ {scalar_t__ last_pts; scalar_t__ first_pts; } ;
typedef TYPE_3__ VC_CONTAINER_TRACK_MODULE_T ;
struct TYPE_15__ {scalar_t__ duration; unsigned int tracks_num; TYPE_2__** tracks; } ;
typedef TYPE_4__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_12__ {TYPE_3__* module; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,int,char*) ;
 int FUNC_2 (TYPE_4__*,int ,char*) ;
 int FUNC_3 (TYPE_4__*,int,char*) ;
 int FUNC_4 (TYPE_4__*,int,char*) ;
 int FUNC_5 (TYPE_4__*,unsigned int,char*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_6( VC_CONTAINER_T *VAR_2 )
{
   static uint32_t VAR_3[] = { 0x10000,0,0,0,0x10000,0,0,0,0x40000000 };
   unsigned int VAR_4 = VAR_0;
   unsigned int VAR_5;

   FUNC_5(VAR_2, VAR_4, "version");
   FUNC_2(VAR_2, 0, "flags");


   VAR_2->duration = 0;
   for(VAR_5 = 0; VAR_5 < VAR_2->tracks_num; VAR_5++)
   {
      VC_CONTAINER_TRACK_T *VAR_6 = VAR_2->tracks[VAR_5];
      VC_CONTAINER_TRACK_MODULE_T *VAR_7 = VAR_6->priv->module;
      int64_t VAR_8 = VAR_7->last_pts - VAR_7->first_pts;
      if(VAR_8 > VAR_2->duration)
         VAR_2->duration = VAR_8;
   }

   if(VAR_4)
   {
      FUNC_4(VAR_2, 0, "creation_time");
      FUNC_4(VAR_2, 0, "modification_time");
      FUNC_3(VAR_2, VAR_1, "timescale");
      FUNC_4(VAR_2, VAR_2->duration * VAR_1 / 1000000, "duration");
   }
   else
   {
      FUNC_3(VAR_2, 0, "creation_time");
      FUNC_3(VAR_2, 0, "modification_time");
      FUNC_3(VAR_2, VAR_1, "timescale");
      FUNC_3(VAR_2, VAR_2->duration * VAR_1 / 1000000, "duration");
   }

   FUNC_3(VAR_2, 0x10000, "rate");
   FUNC_1(VAR_2, 0x100, "volume");
   FUNC_1(VAR_2, 0, "reserved");
   for(VAR_5 = 0; VAR_5 < 2; VAR_5++)
      FUNC_3(VAR_2, 0, "reserved");
   for(VAR_5 = 0; VAR_5 < 9; VAR_5++)
      FUNC_3(VAR_2, VAR_3[VAR_5], "matrix");
   for(VAR_5 = 0; VAR_5 < 6; VAR_5++)
      FUNC_3(VAR_2, 0, "pre_defined");
   FUNC_3(VAR_2, VAR_2->tracks_num + 1, "next_track_ID");

   return FUNC_0(VAR_2);
}
