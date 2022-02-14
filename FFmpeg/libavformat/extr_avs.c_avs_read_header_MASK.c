
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int pb; int ctx_flags; TYPE_1__* priv_data; } ;
struct TYPE_5__ {int width; int height; int * st_audio; int st_video; scalar_t__ remaining_audio_size; scalar_t__ remaining_frame_size; int nb_frames; void* fps; void* bits_per_sample; } ;
typedef TYPE_1__ AvsFormat ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,char*,int,int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(AVFormatContext * VAR_2)
{
    AvsFormat *VAR_3 = VAR_2->priv_data;

    VAR_2->ctx_flags |= VAR_0;

    FUNC_3(VAR_2->pb, 4);
    VAR_3->width = FUNC_1(VAR_2->pb);
    VAR_3->height = FUNC_1(VAR_2->pb);
    VAR_3->bits_per_sample = FUNC_1(VAR_2->pb);
    VAR_3->fps = FUNC_1(VAR_2->pb);
    VAR_3->nb_frames = FUNC_2(VAR_2->pb);
    VAR_3->remaining_frame_size = 0;
    VAR_3->remaining_audio_size = 0;

    VAR_3->st_video = *(VAR_3->st_audio = ((void*)0));

    if (VAR_3->width != 318 || VAR_3->height != 198)
        FUNC_0(VAR_2, VAR_1, "This avs pretend to be %dx%d "
               "when the avs format is supposed to be 318x198 only.\n",
               VAR_3->width, VAR_3->height);

    return 0;
}
