
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int int64_t ;
typedef enum AVMediaType { ____Placeholder_AVMediaType } AVMediaType ;
struct TYPE_13__ {int codec_type; int bit_rate; int codec_id; scalar_t__ sample_rate; scalar_t__ channels; } ;
struct TYPE_12__ {int nb_streams; TYPE_1__** streams; } ;
struct TYPE_11__ {unsigned int* stream_index; int nb_stream_indexes; } ;
struct TYPE_10__ {int disposition; int codec_info_nb_frames; TYPE_4__* codecpar; } ;
typedef TYPE_1__ AVStream ;
typedef TYPE_2__ AVProgram ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_4__ AVCodecParameters ;
typedef int AVCodec ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int) ;
 TYPE_2__* FUNC_1 (TYPE_3__*,int *,int) ;
 int * FUNC_2 (TYPE_3__*,TYPE_1__*,int ) ;

int FUNC_3(AVFormatContext *VAR_6, enum AVMediaType VAR_7,
                        int VAR_8, int VAR_9,
                        AVCodec **VAR_10, int VAR_11)
{
    int VAR_12, VAR_13 = VAR_6->nb_streams;
    int VAR_14 = VAR_1;
    int VAR_15 = -1, VAR_16 = -1, VAR_17 = -1;
    int VAR_18, VAR_19, VAR_20;
    int64_t VAR_21 = -1;
    int64_t VAR_22;
    unsigned *VAR_23 = ((void*)0);
    const AVCodec *VAR_24 = ((void*)0), *VAR_25 = ((void*)0);

    if (VAR_9 >= 0 && VAR_8 < 0) {
        AVProgram *VAR_26 = FUNC_1(VAR_6, ((void*)0), VAR_9);
        if (VAR_26) {
            VAR_23 = VAR_26->stream_index;
            VAR_13 = VAR_26->nb_stream_indexes;
        }
    }
    for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++) {
        int VAR_27 = VAR_23 ? VAR_23[VAR_12] : VAR_12;
        AVStream *VAR_28 = VAR_6->streams[VAR_27];
        AVCodecParameters *VAR_29 = VAR_28->codecpar;
        if (VAR_29->codec_type != VAR_7)
            continue;
        if (VAR_8 >= 0 && VAR_27 != VAR_8)
            continue;
        if (VAR_7 == VAR_2 && !(VAR_29->channels && VAR_29->sample_rate))
            continue;
        if (VAR_10) {
            VAR_24 = FUNC_2(VAR_6, VAR_28, VAR_29->codec_id);
            if (!VAR_24) {
                if (VAR_14 < 0)
                    VAR_14 = VAR_0;
                continue;
            }
        }
        VAR_20 = !(VAR_28->disposition & (VAR_4 | VAR_5))
                      + !! (VAR_28->disposition & VAR_3);
        VAR_18 = VAR_28->codec_info_nb_frames;
        VAR_22 = VAR_29->bit_rate;
        VAR_19 = FUNC_0(5, VAR_18);
        if ((VAR_17 > VAR_20) ||
            (VAR_17 == VAR_20 && VAR_16 > VAR_19) ||
            (VAR_17 == VAR_20 && VAR_16 == VAR_19 && VAR_21 > VAR_22) ||
            (VAR_17 == VAR_20 && VAR_16 == VAR_19 && VAR_21 == VAR_22 && VAR_15 >= VAR_18))
            continue;
        VAR_17 = VAR_20;
        VAR_15 = VAR_18;
        VAR_21 = VAR_22;
        VAR_16 = VAR_19;
        VAR_14 = VAR_27;
        VAR_25 = VAR_24;
        if (VAR_23 && VAR_12 == VAR_13 - 1 && VAR_14 < 0) {
            VAR_23 = ((void*)0);
            VAR_13 = VAR_6->nb_streams;

            VAR_12 = 0;
        }
    }
    if (VAR_10)
        *VAR_10 = (AVCodec*)VAR_25;
    return VAR_14;
}
