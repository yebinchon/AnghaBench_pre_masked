
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
typedef int int64_t ;
struct TYPE_15__ {TYPE_6__* priv; TYPE_4__* format; int is_enabled; } ;
typedef TYPE_7__ VC_CONTAINER_TRACK_T ;
typedef int VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
typedef int VC_CONTAINER_FOURCC_T ;
struct TYPE_14__ {TYPE_5__* module; } ;
struct TYPE_13__ {int chunk_offs; int chunk_index; int max_chunk_size; int sample_size; } ;
struct TYPE_12__ {scalar_t__ es_type; int bitrate; int codec; TYPE_3__* type; } ;
struct TYPE_10__ {int block_align; int sample_rate; } ;
struct TYPE_9__ {int frame_rate_den; int frame_rate_num; scalar_t__ visible_width; scalar_t__ x_offset; scalar_t__ visible_height; scalar_t__ y_offset; } ;
struct TYPE_11__ {TYPE_2__ audio; TYPE_1__ video; } ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char,unsigned char,char,char) ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (int *,scalar_t__,char*) ;
 int FUNC_5 (int *,int,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_9(VC_CONTAINER_T *VAR_2,
   VC_CONTAINER_TRACK_T *VAR_3)
{
   VC_CONTAINER_FOURCC_T VAR_4 = 0, VAR_5 = 0;
   uint32_t VAR_6, VAR_7 = 0, VAR_8 = 0, VAR_9, VAR_10 = 0, VAR_11 = 0;
   uint16_t VAR_12 = 0, VAR_13 = 0, VAR_14 = 0, VAR_15 = 0;
   uint32_t VAR_16, VAR_17 = 0;

   FUNC_3(VAR_2, FUNC_2('s','t','r','h'), "Chunk ID");
   FUNC_5(VAR_2, 56, "Chunk Size");

   if (!VAR_3->is_enabled)
      VAR_6 = 0;
   else
      VAR_6 = 0;

   if (VAR_3->format->es_type == VAR_1)
   {
      VAR_4 = FUNC_2('v','i','d','s');
      VAR_11 = 0;
      VAR_7 = VAR_3->format->type->video.frame_rate_den;
      VAR_8 = VAR_3->format->type->video.frame_rate_num;
      if (VAR_8 == 0 || VAR_7 == 0)
      {
         FUNC_0(VAR_2, "invalid video framerate (%d/%d)", VAR_8, VAR_7);
         FUNC_0(VAR_2, "using 30/1 (playback timing will almost certainly be incorrect)");
         VAR_7 = 1; VAR_8 = 30;
      }

      VAR_14 = VAR_3->format->type->video.y_offset;
      VAR_12 = VAR_3->format->type->video.x_offset;
      VAR_15 = VAR_3->format->type->video.y_offset + VAR_3->format->type->video.visible_height;
      VAR_13 = VAR_3->format->type->video.x_offset + VAR_3->format->type->video.visible_width;
   }
   else if (VAR_3->format->es_type == VAR_0)
   {
      VAR_4 = FUNC_2('a','u','d','s');
      VAR_11 = VAR_3->format->type->audio.block_align;
      VAR_7 = 1;

      if (VAR_3->format->type->audio.block_align)
         VAR_8 = (VAR_3->format->bitrate / VAR_3->format->type->audio.block_align) >> 3;

      if (VAR_8 == 0)
      {
         VAR_8 = VAR_3->format->type->audio.sample_rate ? VAR_3->format->type->audio.sample_rate : 32000;
         FUNC_0(VAR_2, "invalid audio rate, using %d (playback timing will almost certainly be incorrect)",
                   VAR_8);
      }
   }
   else
   {

      FUNC_7(0);
   }

   VAR_5 = FUNC_6(VAR_3->format->codec);

   VAR_9 = FUNC_8((int64_t)VAR_7, (int64_t)VAR_8);
   VAR_7 /= VAR_9;
   VAR_8 /= VAR_9;

   VAR_17 = VAR_11 ? VAR_3->priv->module->chunk_offs : VAR_3->priv->module->chunk_index;
   VAR_16 = VAR_3->priv->module->max_chunk_size;
   VAR_3->priv->module->sample_size = VAR_11;

   FUNC_3(VAR_2, VAR_4, "fccType");
   FUNC_3(VAR_2, VAR_5, "fccHandler");
   FUNC_5(VAR_2, VAR_6, "dwFlags");
   FUNC_4(VAR_2, 0, "wPriority");
   FUNC_4(VAR_2, 0, "wLanguage");
   FUNC_5(VAR_2, 0, "dwInitialFrames");
   FUNC_5(VAR_2, VAR_7, "dwScale");
   FUNC_5(VAR_2, VAR_8, "dwRate");
   FUNC_5(VAR_2, VAR_10, "dwStart");
   FUNC_5(VAR_2, VAR_17, "dwLength");
   FUNC_5(VAR_2, VAR_16, "dwSuggestedBufferSize");
   FUNC_5(VAR_2, 0, "dwQuality");
   FUNC_5(VAR_2, VAR_11, "dwSampleSize");
   FUNC_4(VAR_2, VAR_12, "rcFrame.left");
   FUNC_4(VAR_2, VAR_14, "rcFrame.top");
   FUNC_4(VAR_2, VAR_13, "rcFrame.right");
   FUNC_4(VAR_2, VAR_15, "rcFrame.bottom");

   return FUNC_1(VAR_2);
}
