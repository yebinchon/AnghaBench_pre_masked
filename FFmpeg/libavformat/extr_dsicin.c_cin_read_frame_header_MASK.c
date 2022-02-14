
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ error; } ;
struct TYPE_10__ {int video_frame_size; int audio_frame_size; int pal_colors_count; void* audio_frame_type; void* video_frame_type; } ;
struct TYPE_11__ {TYPE_1__ frame_header; } ;
typedef TYPE_1__ CinFrameHeader ;
typedef TYPE_2__ CinDemuxContext ;
typedef TYPE_3__ AVIOContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 void* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_5(CinDemuxContext *VAR_2, AVIOContext *VAR_3) {
    CinFrameHeader *VAR_4 = &VAR_2->frame_header;

    VAR_4->video_frame_type = FUNC_2(VAR_3);
    VAR_4->audio_frame_type = FUNC_2(VAR_3);
    VAR_4->pal_colors_count = FUNC_3(VAR_3);
    VAR_4->video_frame_size = FUNC_4(VAR_3);
    VAR_4->audio_frame_size = FUNC_4(VAR_3);

    if (FUNC_1(VAR_3) || VAR_3->error)
        return FUNC_0(VAR_1);

    if (FUNC_4(VAR_3) != 0xAA55AA55)
        return VAR_0;
    if (VAR_4->video_frame_size < 0 || VAR_4->audio_frame_size < 0)
        return VAR_0;

    return 0;
}
