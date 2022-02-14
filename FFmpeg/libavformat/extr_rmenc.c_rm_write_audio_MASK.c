
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_11__ {int * pb; TYPE_3__* priv_data; } ;
struct TYPE_10__ {TYPE_2__* audio_stream; } ;
struct TYPE_9__ {int nb_frames; TYPE_1__* par; } ;
struct TYPE_8__ {scalar_t__ codec_id; } ;
typedef TYPE_2__ StreamInfo ;
typedef TYPE_3__ RMMuxContext ;
typedef int AVIOContext ;
typedef TYPE_4__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int const) ;
 int FUNC_1 (int *,int const*,int) ;
 int FUNC_2 (TYPE_4__*,TYPE_2__*,int,int) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_2, const uint8_t *VAR_3, int VAR_4, int VAR_5)
{
    RMMuxContext *VAR_6 = VAR_2->priv_data;
    AVIOContext *VAR_7 = VAR_2->pb;
    StreamInfo *VAR_8 = VAR_6->audio_stream;
    int VAR_9;

    FUNC_2(VAR_2, VAR_8, VAR_4, !!(VAR_5 & VAR_1));

    if (VAR_8->par->codec_id == VAR_0) {

        for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9 += 2) {
            FUNC_0(VAR_7, VAR_3[VAR_9 + 1]);
            FUNC_0(VAR_7, VAR_3[VAR_9]);
        }
    } else {
        FUNC_1(VAR_7, VAR_3, VAR_4);
    }
    VAR_8->nb_frames++;
    return 0;
}
