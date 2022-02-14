
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct representation {int stream_index; scalar_t__ bandwidth; char* id; TYPE_1__* assoc_stream; } ;
typedef int int64_t ;
struct TYPE_12__ {int duration; TYPE_1__** streams; int pb; int url; int interrupt_callback; TYPE_2__* priv_data; } ;
struct TYPE_11__ {int n_videos; int n_audios; int n_subtitles; struct representation** subtitles; struct representation** audios; struct representation** videos; void* is_init_section_common_audio; void* is_init_section_common_video; int avio_opts; scalar_t__ media_presentation_duration; int is_live; int * interrupt_callback; } ;
struct TYPE_10__ {int metadata; } ;
typedef TYPE_2__ DASHContext ;
typedef int AVProgram ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,char*,int ) ;
 int FUNC_1 (int *,char*,scalar_t__,int ) ;
 int * FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 int FUNC_4 (struct representation*,struct representation*) ;
 void* FUNC_5 (struct representation**,int) ;
 int FUNC_6 (TYPE_3__*,struct representation*) ;
 int FUNC_7 (TYPE_3__*,int ,int ) ;
 int FUNC_8 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_9(AVFormatContext *VAR_2)
{
    DASHContext *VAR_3 = VAR_2->priv_data;
    struct representation *VAR_4;
    int VAR_5 = 0;
    int VAR_6 = 0;
    int VAR_7;

    VAR_3->interrupt_callback = &VAR_2->interrupt_callback;

    if ((VAR_5 = FUNC_8(VAR_2)) < 0)
        goto fail;

    if ((VAR_5 = FUNC_7(VAR_2, VAR_2->url, VAR_2->pb)) < 0)
        goto fail;



    if (!VAR_3->is_live) {
        VAR_2->duration = (int64_t) VAR_3->media_presentation_duration * VAR_1;
    } else {
        FUNC_0(&VAR_3->avio_opts, "seekable", "0", 0);
    }

    if(VAR_3->n_videos)
        VAR_3->is_init_section_common_video = FUNC_5(VAR_3->videos, VAR_3->n_videos);


    for (VAR_7 = 0; VAR_7 < VAR_3->n_videos; VAR_7++) {
        VAR_4 = VAR_3->videos[VAR_7];
        if (VAR_7 > 0 && VAR_3->is_init_section_common_video) {
            VAR_5 = FUNC_4(VAR_4, VAR_3->videos[0]);
            if (VAR_5 < 0)
                goto fail;
        }
        VAR_5 = FUNC_6(VAR_2, VAR_4);

        if (VAR_5)
            goto fail;
        VAR_4->stream_index = VAR_6;
        ++VAR_6;
    }

    if(VAR_3->n_audios)
        VAR_3->is_init_section_common_audio = FUNC_5(VAR_3->audios, VAR_3->n_audios);

    for (VAR_7 = 0; VAR_7 < VAR_3->n_audios; VAR_7++) {
        VAR_4 = VAR_3->audios[VAR_7];
        if (VAR_7 > 0 && VAR_3->is_init_section_common_audio) {
            VAR_5 = FUNC_4(VAR_4, VAR_3->audios[0]);
            if (VAR_5 < 0)
                goto fail;
        }
        VAR_5 = FUNC_6(VAR_2, VAR_4);

        if (VAR_5)
            goto fail;
        VAR_4->stream_index = VAR_6;
        ++VAR_6;
    }

    if (VAR_3->n_subtitles)
        VAR_3->is_init_section_common_audio = FUNC_5(VAR_3->subtitles, VAR_3->n_subtitles);

    for (VAR_7 = 0; VAR_7 < VAR_3->n_subtitles; VAR_7++) {
        VAR_4 = VAR_3->subtitles[VAR_7];
        if (VAR_7 > 0 && VAR_3->is_init_section_common_audio) {
            VAR_5 = FUNC_4(VAR_4, VAR_3->subtitles[0]);
            if (VAR_5 < 0)
                goto fail;
        }
        VAR_5 = FUNC_6(VAR_2, VAR_4);

        if (VAR_5)
            goto fail;
        VAR_4->stream_index = VAR_6;
        ++VAR_6;
    }

    if (!VAR_6) {
        VAR_5 = VAR_0;
        goto fail;
    }


    if (!VAR_5) {
        AVProgram *VAR_8;
        VAR_8 = FUNC_2(VAR_2, 0);
        if (!VAR_8) {
            goto fail;
        }

        for (VAR_7 = 0; VAR_7 < VAR_3->n_videos; VAR_7++) {
            VAR_4 = VAR_3->videos[VAR_7];
            FUNC_3(VAR_2, 0, VAR_4->stream_index);
            VAR_4->assoc_stream = VAR_2->streams[VAR_4->stream_index];
            if (VAR_4->bandwidth > 0)
                FUNC_1(&VAR_4->assoc_stream->metadata, "variant_bitrate", VAR_4->bandwidth, 0);
            if (VAR_4->id[0])
                FUNC_0(&VAR_4->assoc_stream->metadata, "id", VAR_4->id, 0);
        }
        for (VAR_7 = 0; VAR_7 < VAR_3->n_audios; VAR_7++) {
            VAR_4 = VAR_3->audios[VAR_7];
            FUNC_3(VAR_2, 0, VAR_4->stream_index);
            VAR_4->assoc_stream = VAR_2->streams[VAR_4->stream_index];
            if (VAR_4->bandwidth > 0)
                FUNC_1(&VAR_4->assoc_stream->metadata, "variant_bitrate", VAR_4->bandwidth, 0);
            if (VAR_4->id[0])
                FUNC_0(&VAR_4->assoc_stream->metadata, "id", VAR_4->id, 0);
        }
        for (VAR_7 = 0; VAR_7 < VAR_3->n_subtitles; VAR_7++) {
            VAR_4 = VAR_3->subtitles[VAR_7];
            FUNC_3(VAR_2, 0, VAR_4->stream_index);
            VAR_4->assoc_stream = VAR_2->streams[VAR_4->stream_index];
            if (VAR_4->id[0])
                FUNC_0(&VAR_4->assoc_stream->metadata, "id", VAR_4->id, 0);
        }
    }

    return 0;
fail:
    return VAR_5;
}
