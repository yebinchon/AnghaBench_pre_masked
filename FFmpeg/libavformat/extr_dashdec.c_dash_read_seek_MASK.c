
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_12__ {int ctx; } ;
struct TYPE_11__ {TYPE_2__** streams; TYPE_3__* priv_data; } ;
struct TYPE_10__ {int n_videos; int n_audios; int n_subtitles; TYPE_6__** subtitles; TYPE_6__** audios; TYPE_6__** videos; scalar_t__ is_live; } ;
struct TYPE_8__ {int den; } ;
struct TYPE_9__ {TYPE_1__ time_base; } ;
typedef TYPE_3__ DASHContext ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int,int ,int ) ;
 int FUNC_2 (TYPE_4__*,TYPE_6__*,int ,int,int) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_5, int VAR_6, int64_t VAR_7, int VAR_8)
{
    int VAR_9 = 0, VAR_10;
    DASHContext *VAR_11 = VAR_5->priv_data;
    int64_t VAR_12 = FUNC_1(VAR_7, 1000,
                                           VAR_5->streams[VAR_6]->time_base.den,
                                           VAR_8 & VAR_0 ?
                                           VAR_2 : VAR_3);
    if ((VAR_8 & VAR_1) || VAR_11->is_live)
        return FUNC_0(VAR_4);


    for (VAR_10 = 0; VAR_10 < VAR_11->n_videos; VAR_10++) {
        if (!VAR_9)
            VAR_9 = FUNC_2(VAR_5, VAR_11->videos[VAR_10], VAR_12, VAR_8, !VAR_11->videos[VAR_10]->ctx);
    }
    for (VAR_10 = 0; VAR_10 < VAR_11->n_audios; VAR_10++) {
        if (!VAR_9)
            VAR_9 = FUNC_2(VAR_5, VAR_11->audios[VAR_10], VAR_12, VAR_8, !VAR_11->audios[VAR_10]->ctx);
    }
    for (VAR_10 = 0; VAR_10 < VAR_11->n_subtitles; VAR_10++) {
        if (!VAR_9)
            VAR_9 = FUNC_2(VAR_5, VAR_11->subtitles[VAR_10], VAR_12, VAR_8, !VAR_11->subtitles[VAR_10]->ctx);
    }

    return VAR_9;
}
