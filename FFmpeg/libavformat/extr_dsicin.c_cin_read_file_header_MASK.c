
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int video_frame_size; int audio_frequency; int audio_bits; scalar_t__ audio_stereo; void* audio_frame_size; void* video_frame_height; void* video_frame_width; } ;
struct TYPE_5__ {TYPE_1__ file_header; } ;
typedef TYPE_1__ CinFileHeader ;
typedef TYPE_2__ CinDemuxContext ;
typedef int AVIOContext ;


 int VAR_0 ;
 void* FUNC_0 (int *) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(CinDemuxContext *VAR_1, AVIOContext *VAR_2) {
    CinFileHeader *VAR_3 = &VAR_1->file_header;

    if (FUNC_2(VAR_2) != 0x55AA0000)
        return VAR_0;

    VAR_3->video_frame_size = FUNC_2(VAR_2);
    VAR_3->video_frame_width = FUNC_1(VAR_2);
    VAR_3->video_frame_height = FUNC_1(VAR_2);
    VAR_3->audio_frequency = FUNC_2(VAR_2);
    VAR_3->audio_bits = FUNC_0(VAR_2);
    VAR_3->audio_stereo = FUNC_0(VAR_2);
    VAR_3->audio_frame_size = FUNC_1(VAR_2);

    if (VAR_3->audio_frequency != 22050 || VAR_3->audio_bits != 16 || VAR_3->audio_stereo != 0)
        return VAR_0;

    return 0;
}
