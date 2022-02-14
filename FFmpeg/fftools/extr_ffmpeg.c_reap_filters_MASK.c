
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_9__ ;
typedef struct TYPE_34__ TYPE_8__ ;
typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;


typedef double int64_t ;
typedef int error ;
struct TYPE_33__ {int den; int num; } ;
struct TYPE_35__ {int channels; TYPE_4__* codec; TYPE_7__ time_base; int sample_aspect_ratio; } ;
struct TYPE_34__ {double pts; int channels; int sample_aspect_ratio; } ;
struct TYPE_32__ {double start_time; } ;
struct TYPE_29__ {int num; } ;
struct TYPE_31__ {size_t file_index; TYPE_3__ frame_aspect_ratio; scalar_t__ finished; TYPE_8__* filtered_frame; int index; int initialized; TYPE_2__* filter; TYPE_9__* enc_ctx; } ;
struct TYPE_30__ {int capabilities; } ;
struct TYPE_28__ {int * filter; TYPE_1__* graph; } ;
struct TYPE_27__ {int graph; } ;
typedef TYPE_5__ OutputStream ;
typedef TYPE_6__ OutputFile ;
typedef TYPE_7__ AVRational ;
typedef TYPE_8__ AVFrame ;
typedef int AVFilterContext ;
typedef TYPE_9__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 double VAR_6 ;
 TYPE_7__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 double FUNC_1 (double) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,TYPE_8__*,int ) ;
 TYPE_7__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__,int ,int) ;
 int FUNC_7 (int) ;
 TYPE_8__* FUNC_8 () ;
 int FUNC_9 (TYPE_8__*) ;
 int FUNC_10 (int *,int ,char*,...) ;
 scalar_t__ FUNC_11 (int) ;
 void* FUNC_12 (double,TYPE_7__,TYPE_7__) ;
 int FUNC_13 (double) ;
 int FUNC_14 (double,TYPE_7__*) ;
 int VAR_10 ;
 int FUNC_15 (TYPE_6__*,TYPE_5__*,TYPE_8__*) ;
 int FUNC_16 (TYPE_6__*,TYPE_5__*,TYPE_8__*,double) ;
 int FUNC_17 (int) ;
 int FUNC_18 (TYPE_5__*,char*,int) ;
 int VAR_11 ;
 TYPE_6__** VAR_12 ;
 TYPE_5__** VAR_13 ;

__attribute__((used)) static int FUNC_19(int VAR_14)
{
    AVFrame *VAR_15 = ((void*)0);
    int VAR_16;


    for (VAR_16 = 0; VAR_16 < VAR_11; VAR_16++) {
        OutputStream *VAR_17 = VAR_13[VAR_16];
        OutputFile *VAR_18 = VAR_12[VAR_17->file_index];
        AVFilterContext *VAR_19;
        AVCodecContext *VAR_20 = VAR_17->enc_ctx;
        int VAR_21 = 0;

        if (!VAR_17->filter || !VAR_17->filter->graph->graph)
            continue;
        VAR_19 = VAR_17->filter->filter;

        if (!VAR_17->initialized) {
            char VAR_22[1024] = "";
            VAR_21 = FUNC_18(VAR_17, VAR_22, sizeof(VAR_22));
            if (VAR_21 < 0) {
                FUNC_10(((void*)0), VAR_3, "Error initializing output stream %d:%d -- %s\n",
                       VAR_17->file_index, VAR_17->index, VAR_22);
                FUNC_17(1);
            }
        }

        if (!VAR_17->filtered_frame && !(VAR_17->filtered_frame = FUNC_8())) {
            return FUNC_0(VAR_9);
        }
        VAR_15 = VAR_17->filtered_frame;

        while (1) {
            double VAR_23 = VAR_6;
            VAR_21 = FUNC_3(VAR_19, VAR_15,
                                               VAR_1);
            if (VAR_21 < 0) {
                if (VAR_21 != FUNC_0(VAR_8) && VAR_21 != VAR_0) {
                    FUNC_10(((void*)0), VAR_5,
                           "Error in av_buffersink_get_frame_flags(): %s\n", FUNC_7(VAR_21));
                } else if (VAR_14 && VAR_21 == VAR_0) {
                    if (FUNC_5(VAR_19) == 128)
                        FUNC_16(VAR_18, VAR_17, ((void*)0), VAR_6);
                }
                break;
            }
            if (VAR_17->finished) {
                FUNC_9(VAR_15);
                continue;
            }
            if (VAR_15->pts != VAR_6) {
                int64_t VAR_24 = (VAR_18->start_time == VAR_6) ? 0 : VAR_18->start_time;
                AVRational VAR_25 = FUNC_4(VAR_19);
                AVRational VAR_26 = VAR_20->time_base;
                int VAR_27 = FUNC_6(29 - FUNC_11(VAR_26.den), 0, 16);

                VAR_26.den <<= VAR_27;
                VAR_23 =
                    FUNC_12(VAR_15->pts, VAR_25, VAR_26) -
                    FUNC_12(VAR_24, VAR_7, VAR_26);
                VAR_23 /= 1 << VAR_27;

                VAR_23 += FUNC_1(VAR_23) * 1.0 / (1<<17);

                VAR_15->pts =
                    FUNC_12(VAR_15->pts, VAR_25, VAR_20->time_base) -
                    FUNC_12(VAR_24, VAR_7, VAR_20->time_base);
            }

            switch (FUNC_5(VAR_19)) {
            case 128:
                if (!VAR_17->frame_aspect_ratio.num)
                    VAR_20->sample_aspect_ratio = VAR_15->sample_aspect_ratio;

                if (VAR_10) {
                    FUNC_10(((void*)0), VAR_4, "filter -> pts:%s pts_time:%s exact:%f time_base:%d/%d\n",
                            FUNC_13(VAR_15->pts), FUNC_14(VAR_15->pts, &VAR_20->time_base),
                            VAR_23,
                            VAR_20->time_base.num, VAR_20->time_base.den);
                }

                FUNC_16(VAR_18, VAR_17, VAR_15, VAR_23);
                break;
            case 129:
                if (!(VAR_20->codec->capabilities & VAR_2) &&
                    VAR_20->channels != VAR_15->channels) {
                    FUNC_10(((void*)0), VAR_3,
                           "Audio filter graph output is not normalized and encoder does not support parameter changes\n");
                    break;
                }
                FUNC_15(VAR_18, VAR_17, VAR_15);
                break;
            default:

                FUNC_2(0);
            }

            FUNC_9(VAR_15);
        }
    }

    return 0;
}
