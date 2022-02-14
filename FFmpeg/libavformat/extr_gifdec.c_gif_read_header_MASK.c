
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


typedef int int64_t ;
struct TYPE_19__ {int str; } ;
struct TYPE_18__ {int metadata; int * pb; TYPE_3__* priv_data; } ;
struct TYPE_17__ {int duration; int nb_frames; TYPE_2__* codecpar; scalar_t__ start_time; } ;
struct TYPE_16__ {int delay; int default_delay; int min_delay; int max_delay; } ;
struct TYPE_14__ {int num; int den; } ;
struct TYPE_15__ {int width; int height; TYPE_1__ sample_aspect_ratio; int codec_id; int codec_type; } ;
typedef TYPE_3__ GIFDemuxContext ;
typedef TYPE_4__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_5__ AVFormatContext ;
typedef TYPE_6__ AVBPrint ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (TYPE_6__*,int *) ;
 int FUNC_3 (TYPE_6__*,int ,int) ;
 int FUNC_4 (int *,char*,int ,int ) ;
 TYPE_4__* FUNC_5 (TYPE_5__*,int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,TYPE_6__*,int) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,int ,int ) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (TYPE_4__*,int,int,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(AVFormatContext *VAR_11)
{
    GIFDemuxContext *VAR_12 = VAR_11->priv_data;
    AVIOContext *VAR_13 = VAR_11->pb;
    AVStream *VAR_14;
    int VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
    int64_t VAR_21 = 0, VAR_22 = 0;

    if ((VAR_18 = FUNC_14(VAR_13)) < 0)
        return VAR_18;

    VAR_12->delay = VAR_12->default_delay;
    VAR_16 = FUNC_9(VAR_13);
    VAR_17 = FUNC_9(VAR_13);
    VAR_20 = FUNC_7(VAR_13);
    FUNC_11(VAR_13, 1);
    VAR_19 = FUNC_7(VAR_13);

    if (VAR_16 == 0 || VAR_17 == 0)
        return VAR_0;

    VAR_14 = FUNC_5(VAR_11, ((void*)0));
    if (!VAR_14)
        return FUNC_0(VAR_4);

    if (VAR_20 & 0x80)
        FUNC_11(VAR_13, 3 * (1 << ((VAR_20 & 0x07) + 1)));

    while ((VAR_15 = FUNC_7(VAR_13)) != VAR_9) {
        if (FUNC_6(VAR_13))
            break;
        if (VAR_15 == VAR_6) {
            int VAR_23 = FUNC_7(VAR_13);
            if (VAR_23 == VAR_5) {
                AVBPrint VAR_24;
                int VAR_25;

                FUNC_3(&VAR_24, 0, -1);
                while ((VAR_25 = FUNC_7(VAR_13)) != 0) {
                    FUNC_8(VAR_13, &VAR_24, VAR_25);
                }
                FUNC_4(&VAR_11->metadata, "comment", VAR_24.str, 0);
                FUNC_2(&VAR_24, ((void*)0));
            } else if (VAR_23 == VAR_7) {
                int VAR_26 = FUNC_7(VAR_13);

                if (VAR_26 == 4) {
                    int VAR_27;

                    FUNC_11(VAR_13, 1);
                    VAR_27 = FUNC_9(VAR_13);
                    if (VAR_27 < VAR_12->min_delay)
                        VAR_27 = VAR_12->default_delay;
                    VAR_27 = FUNC_1(VAR_27, VAR_12->max_delay);
                    VAR_22 += VAR_27;
                    FUNC_11(VAR_13, 1);
                } else {
                    FUNC_11(VAR_13, VAR_26);
                }
                FUNC_13(VAR_13);
            } else {
                FUNC_13(VAR_13);
            }
        } else if (VAR_15 == VAR_8) {
            FUNC_11(VAR_13, 8);
            VAR_20 = FUNC_7(VAR_13);
            if (VAR_20 & 0x80)
                FUNC_11(VAR_13, 3 * (1 << ((VAR_20 & 0x07) + 1)));
            FUNC_11(VAR_13, 1);
            FUNC_13(VAR_13);
            VAR_21++;
        } else {
            break;
        }
    }



    FUNC_12(VAR_14, 64, 1, 100);
    VAR_14->codecpar->codec_type = VAR_1;
    VAR_14->codecpar->codec_id = VAR_2;
    VAR_14->codecpar->width = VAR_16;
    VAR_14->codecpar->height = VAR_17;
    VAR_14->start_time = 0;
    VAR_14->duration = VAR_22;
    VAR_14->nb_frames = VAR_21;
    if (VAR_19) {
        VAR_14->codecpar->sample_aspect_ratio.num = VAR_19 + 15;
        VAR_14->codecpar->sample_aspect_ratio.den = 64;
    }


    if (FUNC_10(VAR_13, 0, VAR_10) != 0)
        return FUNC_0(VAR_3);

    return 0;
}
