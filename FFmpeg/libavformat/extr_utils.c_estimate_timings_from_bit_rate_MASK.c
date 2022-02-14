
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_16__ {int bit_rate; int nb_streams; scalar_t__ duration; TYPE_6__** streams; TYPE_4__* internal; scalar_t__ pb; } ;
struct TYPE_14__ {int num; int den; } ;
struct TYPE_15__ {int codec_info_nb_frames; scalar_t__ duration; TYPE_5__ time_base; TYPE_3__* codecpar; TYPE_2__* internal; } ;
struct TYPE_13__ {scalar_t__ data_offset; } ;
struct TYPE_12__ {scalar_t__ bit_rate; scalar_t__ codec_type; } ;
struct TYPE_11__ {TYPE_1__* avctx; } ;
struct TYPE_10__ {scalar_t__ bit_rate; } ;
typedef TYPE_6__ AVStream ;
typedef TYPE_7__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_7__*,int ,char*) ;
 scalar_t__ FUNC_1 (int,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(AVFormatContext *VAR_4)
{
    int64_t VAR_5, VAR_6;
    int VAR_7, VAR_8 = 0;
    AVStream *VAR_9;


    if (VAR_4->bit_rate <= 0) {
        int64_t VAR_10 = 0;
        for (VAR_7 = 0; VAR_7 < VAR_4->nb_streams; VAR_7++) {
            VAR_9 = VAR_4->streams[VAR_7];
            if (VAR_9->codecpar->bit_rate <= 0 && VAR_9->internal->avctx->bit_rate > 0)
                VAR_9->codecpar->bit_rate = VAR_9->internal->avctx->bit_rate;
            if (VAR_9->codecpar->bit_rate > 0) {
                if (VAR_3 - VAR_9->codecpar->bit_rate < VAR_10) {
                    VAR_10 = 0;
                    break;
                }
                VAR_10 += VAR_9->codecpar->bit_rate;
            } else if (VAR_9->codecpar->codec_type == VAR_0 && VAR_9->codec_info_nb_frames > 1) {


                VAR_10 = 0;
                break;
            }
        }
        VAR_4->bit_rate = VAR_10;
    }


    if (VAR_4->duration == VAR_2 &&
        VAR_4->bit_rate != 0) {
        VAR_5 = VAR_4->pb ? FUNC_2(VAR_4->pb) : 0;
        if (VAR_5 > VAR_4->internal->data_offset) {
            VAR_5 -= VAR_4->internal->data_offset;
            for (VAR_7 = 0; VAR_7 < VAR_4->nb_streams; VAR_7++) {
                VAR_9 = VAR_4->streams[VAR_7];
                if ( VAR_9->time_base.num <= VAR_3 / VAR_4->bit_rate
                    && VAR_9->duration == VAR_2) {
                    VAR_6 = FUNC_1(8 * VAR_5, VAR_9->time_base.den,
                                          VAR_4->bit_rate *
                                          (int64_t) VAR_9->time_base.num);
                    VAR_9->duration = VAR_6;
                    VAR_8 = 1;
                }
            }
        }
    }
    if (VAR_8)
        FUNC_0(VAR_4, VAR_1,
               "Estimating duration from bitrate, this may be inaccurate\n");
}
