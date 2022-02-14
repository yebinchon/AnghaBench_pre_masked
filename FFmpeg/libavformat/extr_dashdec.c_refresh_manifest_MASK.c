
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct representation {int fragment_timescale; scalar_t__ fragments; void* cur_seq_no; scalar_t__ timelines; } ;
typedef int int64_t ;
struct TYPE_12__ {int url; TYPE_1__* priv_data; } ;
struct TYPE_11__ {int n_videos; int n_audios; int n_subtitles; char* base_url; struct representation** videos; struct representation** audios; struct representation** subtitles; } ;
typedef TYPE_1__ DASHContext ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,int ,char*,int,int) ;
 void* FUNC_2 (struct representation*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct representation*,void*) ;
 int FUNC_7 (struct representation*,struct representation*,TYPE_1__*) ;
 int FUNC_8 (struct representation*,struct representation*,TYPE_1__*) ;
 int FUNC_9 (TYPE_2__*,int ,int *) ;

__attribute__((used)) static int FUNC_10(AVFormatContext *VAR_2)
{
    int VAR_3 = 0, VAR_4;
    DASHContext *VAR_5 = VAR_2->priv_data;

    int VAR_6 = VAR_5->n_videos;
    struct representation **VAR_7 = VAR_5->videos;
    int VAR_8 = VAR_5->n_audios;
    struct representation **VAR_9 = VAR_5->audios;
    int VAR_10 = VAR_5->n_subtitles;
    struct representation **VAR_11 = VAR_5->subtitles;
    char *VAR_12 = VAR_5->base_url;

    VAR_5->base_url = ((void*)0);
    VAR_5->n_videos = 0;
    VAR_5->videos = ((void*)0);
    VAR_5->n_audios = 0;
    VAR_5->audios = ((void*)0);
    VAR_5->n_subtitles = 0;
    VAR_5->subtitles = ((void*)0);
    VAR_3 = FUNC_9(VAR_2, VAR_2->url, ((void*)0));
    if (VAR_3)
        goto finish;

    if (VAR_5->n_videos != VAR_6) {
        FUNC_1(VAR_5, VAR_1,
               "new manifest has mismatched no. of video representations, %d -> %d\n",
               VAR_6, VAR_5->n_videos);
        return VAR_0;
    }
    if (VAR_5->n_audios != VAR_8) {
        FUNC_1(VAR_5, VAR_1,
               "new manifest has mismatched no. of audio representations, %d -> %d\n",
               VAR_8, VAR_5->n_audios);
        return VAR_0;
    }
    if (VAR_5->n_subtitles != VAR_10) {
        FUNC_1(VAR_5, VAR_1,
               "new manifest has mismatched no. of subtitles representations, %d -> %d\n",
               VAR_10, VAR_5->n_subtitles);
        return VAR_0;
    }

    for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++) {
        struct representation *VAR_13 = VAR_7[VAR_4];
        struct representation *VAR_14 = VAR_5->videos[VAR_4];
        if (VAR_13->timelines) {

            int64_t VAR_15 = FUNC_6(VAR_13, VAR_13->cur_seq_no) / VAR_13->fragment_timescale;

            VAR_14->cur_seq_no = FUNC_2(VAR_14, VAR_15 * VAR_13->fragment_timescale - 1);
            if (VAR_14->cur_seq_no >= 0) {
                FUNC_8(VAR_14, VAR_13, VAR_5);
            }
        }
        if (VAR_13->fragments) {
            FUNC_7(VAR_14, VAR_13, VAR_5);
        }
    }
    for (VAR_4 = 0; VAR_4 < VAR_8; VAR_4++) {
        struct representation *VAR_16 = VAR_9[VAR_4];
        struct representation *VAR_17 = VAR_5->audios[VAR_4];
        if (VAR_16->timelines) {

            int64_t VAR_18 = FUNC_6(VAR_16, VAR_16->cur_seq_no) / VAR_16->fragment_timescale;

            VAR_17->cur_seq_no = FUNC_2(VAR_17, VAR_18 * VAR_16->fragment_timescale - 1);
            if (VAR_17->cur_seq_no >= 0) {
                FUNC_8(VAR_17, VAR_16, VAR_5);
            }
        }
        if (VAR_16->fragments) {
            FUNC_7(VAR_17, VAR_16, VAR_5);
        }
    }

finish:

    if (VAR_5->base_url)
        FUNC_0(VAR_12);
    else
        VAR_5->base_url = VAR_12;

    if (VAR_5->subtitles)
        FUNC_4(VAR_5);
    if (VAR_5->audios)
        FUNC_3(VAR_5);
    if (VAR_5->videos)
        FUNC_5(VAR_5);

    VAR_5->n_subtitles = VAR_10;
    VAR_5->subtitles = VAR_11;
    VAR_5->n_audios = VAR_8;
    VAR_5->audios = VAR_9;
    VAR_5->n_videos = VAR_6;
    VAR_5->videos = VAR_7;
    return VAR_3;
}
