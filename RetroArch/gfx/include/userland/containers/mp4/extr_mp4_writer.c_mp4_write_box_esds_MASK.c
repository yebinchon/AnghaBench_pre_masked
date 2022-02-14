
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


struct TYPE_19__ {TYPE_4__* format; } ;
typedef TYPE_5__ VC_CONTAINER_TRACK_T ;
struct TYPE_20__ {TYPE_5__** tracks; TYPE_1__* priv; } ;
typedef TYPE_6__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_21__ {size_t current_track; } ;
typedef TYPE_7__ VC_CONTAINER_MODULE_T ;
struct TYPE_18__ {int extradata_size; int es_type; int codec; int extradata; int bitrate; TYPE_3__* type; } ;
struct TYPE_16__ {int sample_rate; } ;
struct TYPE_17__ {TYPE_2__ audio; } ;
struct TYPE_15__ {TYPE_7__* module; } ;


 unsigned int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_6__*) ;






 int VAR_0 ;



 int FUNC_3 (TYPE_6__*,int ,int) ;
 int FUNC_4 (TYPE_6__*,int,char*) ;
 int FUNC_5 (TYPE_6__*,int,char*) ;
 int FUNC_6 (TYPE_6__*,int ,char*) ;
 int FUNC_7 (TYPE_6__*,int,char*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_8( VC_CONTAINER_T *VAR_1 )
{
   VC_CONTAINER_MODULE_T *VAR_2 = VAR_1->priv->module;
   VC_CONTAINER_TRACK_T *VAR_3 = VAR_1->tracks[VAR_2->current_track];
   unsigned int VAR_4 = 0, VAR_5, VAR_6;
   unsigned int VAR_7, VAR_8;
   if(VAR_3->format->extradata_size > 0x200000 - 100)
      return VAR_0;

   switch(VAR_3->format->es_type)
   {
   case 128: VAR_7 = 0x4; break;
   case 130: VAR_7 = 0x5; break;
   case 129: VAR_7 = 0x20; break;
   default: return VAR_0;
   }
   switch(VAR_3->format->codec)
   {
   case 132: VAR_8 = 0x20; break;
   case 135: VAR_8 = 0x6B; break;
   case 134: VAR_8 = 0x60; break;
   case 136: VAR_8 = 0x6C; break;
   case 133: VAR_8 = 0x40; break;
   case 131:
      VAR_8 = VAR_3->format->type->audio.sample_rate < 32000 ? 0x69 : 0x6B; break;
   default: return VAR_0;
   }

   VAR_4 = ((VAR_3->format->extradata_size) < 0x0080) ? 2 + (VAR_3->format->extradata_size) : ((VAR_3->format->extradata_size) < 0x4000) ? 3 + (VAR_3->format->extradata_size) : 4 + (VAR_3->format->extradata_size);
   VAR_5 = ((13 + VAR_4) < 0x0080) ? 2 + (13 + VAR_4) : ((13 + VAR_4) < 0x4000) ? 3 + (13 + VAR_4) : 4 + (13 + VAR_4);
   VAR_6 = ((1) < 0x0080) ? 2 + (1) : ((1) < 0x4000) ? 3 + (1) : 4 + (1);

   FUNC_7(VAR_1, 0, "version");
   FUNC_5(VAR_1, 0, "flags");


   FUNC_0(VAR_1, "descriptor %x, size %i", 0x3, 3 + VAR_5 + VAR_6); FUNC_0(VAR_1, 0x3); if((3 + VAR_5 + VAR_6) >= 0x4000) FUNC_0(VAR_1, (((3 + VAR_5 + VAR_6) >> 14) & 0x7F) | 0x80); if((3 + VAR_5 + VAR_6) >= 0x80 ) FUNC_0(VAR_1, (((3 + VAR_5 + VAR_6) >> 7 ) & 0x7F) | 0x80); FUNC_0(VAR_1, (3 + VAR_5 + VAR_6) & 0x7F);
   FUNC_4(VAR_1, VAR_2->current_track + 1, "es_id");
   FUNC_7(VAR_1, 0x1f, "flags");


   FUNC_0(VAR_1, "descriptor %x, size %i", 0x4, 13 + VAR_4); FUNC_0(VAR_1, 0x4); if((13 + VAR_4) >= 0x4000) FUNC_0(VAR_1, (((13 + VAR_4) >> 14) & 0x7F) | 0x80); if((13 + VAR_4) >= 0x80 ) FUNC_0(VAR_1, (((13 + VAR_4) >> 7 ) & 0x7F) | 0x80); FUNC_0(VAR_1, (13 + VAR_4) & 0x7F);
   FUNC_7(VAR_1, VAR_8, "object_type_indication");
   FUNC_7(VAR_1, (VAR_7 << 2) | 1, "stream_type");
   FUNC_5(VAR_1, 8000, "buffer_size_db");
   FUNC_6(VAR_1, VAR_3->format->bitrate, "max_bitrate");
   FUNC_6(VAR_1, VAR_3->format->bitrate, "avg_bitrate");
   if(VAR_3->format->extradata_size)
   {
      FUNC_0(VAR_1, "descriptor %x, size %i", 0x5, VAR_3->format->extradata_size); FUNC_0(VAR_1, 0x5); if((VAR_3->format->extradata_size) >= 0x4000) FUNC_0(VAR_1, (((VAR_3->format->extradata_size) >> 14) & 0x7F) | 0x80); if((VAR_3->format->extradata_size) >= 0x80 ) FUNC_0(VAR_1, (((VAR_3->format->extradata_size) >> 7 ) & 0x7F) | 0x80); FUNC_0(VAR_1, (VAR_3->format->extradata_size) & 0x7F);
      FUNC_3(VAR_1, VAR_3->format->extradata, VAR_3->format->extradata_size);
   }


   FUNC_0(VAR_1, "descriptor %x, size %i", 0x6, 1); FUNC_0(VAR_1, 0x6); if((1) >= 0x4000) FUNC_0(VAR_1, (((1) >> 14) & 0x7F) | 0x80); if((1) >= 0x80 ) FUNC_0(VAR_1, (((1) >> 7 ) & 0x7F) | 0x80); FUNC_0(VAR_1, (1) & 0x7F);
   FUNC_7(VAR_1, 0x2, "flags");

   return FUNC_2(VAR_1);
}
