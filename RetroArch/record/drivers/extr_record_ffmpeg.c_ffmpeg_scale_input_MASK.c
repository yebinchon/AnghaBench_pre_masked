
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct record_video_data {scalar_t__ width; scalar_t__ height; int pitch; int data; } ;
struct TYPE_8__ {TYPE_2__* conv_frame; int scaler; int sws; int pix_fmt; int in_pix_fmt; scalar_t__ use_sws; } ;
struct TYPE_6__ {scalar_t__ out_width; scalar_t__ out_height; } ;
struct TYPE_9__ {TYPE_3__ video; TYPE_1__ params; } ;
typedef TYPE_4__ ffmpeg_t ;
struct TYPE_7__ {int * linesize; int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__,int ,scalar_t__,scalar_t__,int ,int ,int *,int *,int *) ;
 int FUNC_1 (int ,int const* const*,int*,int ,scalar_t__,int *,int *) ;
 int FUNC_2 (int *,int ,int ,scalar_t__,scalar_t__,int ,scalar_t__,scalar_t__,int,int) ;

__attribute__((used)) static void FUNC_3(ffmpeg_t *VAR_2,
      const struct record_video_data *VAR_3)
{

   bool VAR_4 = VAR_2->params.out_width < VAR_3->width
      || VAR_2->params.out_height < VAR_3->height;

   if (VAR_2->video.use_sws)
   {
      int VAR_5 = VAR_3->pitch;

      VAR_2->video.sws = FUNC_0(VAR_2->video.sws,
            VAR_3->width, VAR_3->height, VAR_2->video.in_pix_fmt,
            VAR_2->params.out_width, VAR_2->params.out_height,
            VAR_2->video.pix_fmt,
            VAR_4 ? VAR_0 : VAR_1, ((void*)0), ((void*)0), ((void*)0));

      FUNC_1(VAR_2->video.sws, (const uint8_t* const*)&VAR_3->data,
            &VAR_5, 0, VAR_3->height, VAR_2->video.conv_frame->data,
            VAR_2->video.conv_frame->linesize);
   }
   else
   {
      FUNC_2(
            &VAR_2->video.scaler,
            VAR_2->video.conv_frame->data[0],
            VAR_3->data,
            VAR_2->params.out_width,
            VAR_2->params.out_height,
            VAR_2->video.conv_frame->linesize[0],
            VAR_3->width,
            VAR_3->height,
            VAR_3->pitch,
            VAR_4);
   }
}
