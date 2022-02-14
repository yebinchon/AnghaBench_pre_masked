
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_19__ {int nb_streams; TYPE_2__** streams; int correct_ts_overflow; } ;
struct TYPE_18__ {scalar_t__ dts; scalar_t__ pts; } ;
struct TYPE_17__ {scalar_t__ pts_wrap_reference; int pts_wrap_behavior; int nb_stream_indexes; size_t* stream_index; } ;
struct TYPE_14__ {int num; int den; } ;
struct TYPE_16__ {scalar_t__ pts_wrap_reference; int pts_wrap_bits; int pts_wrap_behavior; TYPE_1__ time_base; } ;
struct TYPE_15__ {scalar_t__ pts_wrap_reference; int pts_wrap_behavior; } ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVProgram ;
typedef TYPE_5__ AVPacket ;
typedef TYPE_6__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_6__*) ;
 TYPE_4__* FUNC_1 (TYPE_6__*,TYPE_4__*,int) ;
 long long FUNC_2 (int,int ,int ) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_3, AVStream *VAR_4, int VAR_5, AVPacket *VAR_6)
{
    int64_t VAR_7 = VAR_6->dts;
    int VAR_8, VAR_9;
    int64_t VAR_10;
    AVProgram *VAR_11;

    if (VAR_7 == VAR_0)
        VAR_7 = VAR_6->pts;
    if (VAR_4->pts_wrap_reference != VAR_0 || VAR_4->pts_wrap_bits >= 63 || VAR_7 == VAR_0 || !VAR_3->correct_ts_overflow)
        return 0;
    VAR_7 &= (1LL << VAR_4->pts_wrap_bits)-1;


    VAR_10 = VAR_7 - FUNC_2(60, VAR_4->time_base.den, VAR_4->time_base.num);

    VAR_9 = (VAR_7 < (1LL << VAR_4->pts_wrap_bits) - (1LL << (VAR_4->pts_wrap_bits-3))) ||
        (VAR_7 < (1LL << VAR_4->pts_wrap_bits) - FUNC_2(60, VAR_4->time_base.den, VAR_4->time_base.num)) ?
        VAR_1 : VAR_2;

    VAR_11 = FUNC_1(VAR_3, ((void*)0), VAR_5);

    if (!VAR_11) {
        int VAR_12 = FUNC_0(VAR_3);
        if (VAR_3->streams[VAR_12]->pts_wrap_reference == VAR_0) {
            for (VAR_8 = 0; VAR_8 < VAR_3->nb_streams; VAR_8++) {
                if (FUNC_1(VAR_3, ((void*)0), VAR_8))
                    continue;
                VAR_3->streams[VAR_8]->pts_wrap_reference = VAR_10;
                VAR_3->streams[VAR_8]->pts_wrap_behavior = VAR_9;
            }
        }
        else {
            VAR_4->pts_wrap_reference = VAR_3->streams[VAR_12]->pts_wrap_reference;
            VAR_4->pts_wrap_behavior = VAR_3->streams[VAR_12]->pts_wrap_behavior;
        }
    }
    else {
        AVProgram *VAR_13 = VAR_11;
        while (VAR_13) {
            if (VAR_13->pts_wrap_reference != VAR_0) {
                VAR_10 = VAR_13->pts_wrap_reference;
                VAR_9 = VAR_13->pts_wrap_behavior;
                break;
            }
            VAR_13 = FUNC_1(VAR_3, VAR_13, VAR_5);
        }


        VAR_13 = VAR_11;
        while (VAR_13) {
            if (VAR_13->pts_wrap_reference != VAR_10) {
                for (VAR_8 = 0; VAR_8<VAR_13->nb_stream_indexes; VAR_8++) {
                    VAR_3->streams[VAR_13->stream_index[VAR_8]]->pts_wrap_reference = VAR_10;
                    VAR_3->streams[VAR_13->stream_index[VAR_8]]->pts_wrap_behavior = VAR_9;
                }

                VAR_13->pts_wrap_reference = VAR_10;
                VAR_13->pts_wrap_behavior = VAR_9;
            }
            VAR_13 = FUNC_1(VAR_3, VAR_13, VAR_5);
        }
    }
    return 1;
}
