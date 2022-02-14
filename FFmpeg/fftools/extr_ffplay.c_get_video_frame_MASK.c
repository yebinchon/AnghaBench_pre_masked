
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;


struct TYPE_16__ {scalar_t__ nb_packets; } ;
struct TYPE_15__ {scalar_t__ serial; } ;
struct TYPE_19__ {scalar_t__ pkt_serial; } ;
struct TYPE_17__ {double frame_last_filter_delay; int frame_drops_early; TYPE_2__ videoq; TYPE_1__ vidclk; TYPE_9__ viddec; TYPE_11__* video_st; int ic; } ;
typedef TYPE_3__ VideoState ;
struct TYPE_18__ {double pts; int sample_aspect_ratio; } ;
struct TYPE_14__ {int time_base; } ;
typedef TYPE_4__ AVFrame ;


 double VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 double VAR_3 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int ,TYPE_11__*,TYPE_4__*) ;
 double FUNC_2 (int ) ;
 int FUNC_3 (TYPE_9__*,TYPE_4__*,int *) ;
 scalar_t__ FUNC_4 (double) ;
 scalar_t__ VAR_4 ;
 double FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (double) ;

__attribute__((used)) static int FUNC_8(VideoState *VAR_5, AVFrame *VAR_6)
{
    int VAR_7;

    if ((VAR_7 = FUNC_3(&VAR_5->viddec, VAR_6, ((void*)0))) < 0)
        return -1;

    if (VAR_7) {
        double VAR_8 = VAR_3;

        if (VAR_6->pts != VAR_0)
            VAR_8 = FUNC_2(VAR_5->video_st->time_base) * VAR_6->pts;

        VAR_6->sample_aspect_ratio = FUNC_1(VAR_5->ic, VAR_5->video_st, VAR_6);

        if (VAR_4>0 || (VAR_4 && FUNC_6(VAR_5) != VAR_2)) {
            if (VAR_6->pts != VAR_0) {
                double VAR_9 = VAR_8 - FUNC_5(VAR_5);
                if (!FUNC_7(VAR_9) && FUNC_4(VAR_9) < VAR_1 &&
                    VAR_9 - VAR_5->frame_last_filter_delay < 0 &&
                    VAR_5->viddec.pkt_serial == VAR_5->vidclk.serial &&
                    VAR_5->videoq.nb_packets) {
                    VAR_5->frame_drops_early++;
                    FUNC_0(VAR_6);
                    VAR_7 = 0;
                }
            }
        }
    }

    return VAR_7;
}
