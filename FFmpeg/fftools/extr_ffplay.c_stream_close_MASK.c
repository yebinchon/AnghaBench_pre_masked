
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int abort_request; scalar_t__ audio_stream; scalar_t__ video_stream; scalar_t__ subtitle_stream; scalar_t__ sub_texture; scalar_t__ vid_texture; scalar_t__ vis_texture; struct TYPE_5__* filename; int sub_convert_ctx; int img_convert_ctx; int continue_read_thread; int subpq; int sampq; int pictq; int subtitleq; int audioq; int videoq; int ic; int read_tid; } ;
typedef TYPE_1__ VideoState ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*,scalar_t__) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(VideoState *VAR_0)
{

    VAR_0->abort_request = 1;
    FUNC_2(VAR_0->read_tid, ((void*)0));


    if (VAR_0->audio_stream >= 0)
        FUNC_7(VAR_0, VAR_0->audio_stream);
    if (VAR_0->video_stream >= 0)
        FUNC_7(VAR_0, VAR_0->video_stream);
    if (VAR_0->subtitle_stream >= 0)
        FUNC_7(VAR_0, VAR_0->subtitle_stream);

    FUNC_4(&VAR_0->ic);

    FUNC_6(&VAR_0->videoq);
    FUNC_6(&VAR_0->audioq);
    FUNC_6(&VAR_0->subtitleq);


    FUNC_5(&VAR_0->pictq);
    FUNC_5(&VAR_0->sampq);
    FUNC_5(&VAR_0->subpq);
    FUNC_0(VAR_0->continue_read_thread);
    FUNC_8(VAR_0->img_convert_ctx);
    FUNC_8(VAR_0->sub_convert_ctx);
    FUNC_3(VAR_0->filename);
    if (VAR_0->vis_texture)
        FUNC_1(VAR_0->vis_texture);
    if (VAR_0->vid_texture)
        FUNC_1(VAR_0->vid_texture);
    if (VAR_0->sub_texture)
        FUNC_1(VAR_0->sub_texture);
    FUNC_3(VAR_0);
}
