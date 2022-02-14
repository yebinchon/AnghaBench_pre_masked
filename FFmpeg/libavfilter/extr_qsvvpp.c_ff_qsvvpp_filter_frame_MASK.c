
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_18__ ;
typedef struct TYPE_21__ TYPE_10__ ;


typedef int mfxSyncPoint ;
struct TYPE_27__ {TYPE_4__** outputs; } ;
struct TYPE_26__ {int time_base; TYPE_5__* dst; } ;
struct TYPE_25__ {TYPE_10__* frame; TYPE_18__* surface; } ;
struct TYPE_24__ {int (* filter_frame ) (TYPE_4__*,TYPE_10__*) ;int session; } ;
struct TYPE_23__ {int TimeStamp; } ;
struct TYPE_22__ {TYPE_1__ Data; } ;
struct TYPE_21__ {int pts; } ;
typedef TYPE_2__ QSVVPPContext ;
typedef TYPE_3__ QSVFrame ;
typedef int AVFrame ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,TYPE_18__*,TYPE_18__*,int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (TYPE_10__**) ;
 int FUNC_5 (TYPE_5__*,int ,char*,...) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int) ;
 int VAR_7 ;
 TYPE_3__* FUNC_8 (TYPE_2__*,TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*,TYPE_10__*) ;
 TYPE_3__* FUNC_10 (TYPE_2__*,TYPE_4__*,int *) ;

int FUNC_11(QSVVPPContext *VAR_8, AVFilterLink *VAR_9, AVFrame *VAR_10)
{
    AVFilterContext *VAR_11 = VAR_9->dst;
    AVFilterLink *VAR_12 = VAR_11->outputs[0];
    mfxSyncPoint VAR_13;
    QSVFrame *VAR_14, *VAR_15;
    int VAR_16, VAR_17;

    VAR_14 = FUNC_10(VAR_8, VAR_9, VAR_10);
    if (!VAR_14) {
        FUNC_5(VAR_11, VAR_0, "Failed to submit frame on input[%d]\n",
               FUNC_1(VAR_9));
        return FUNC_0(VAR_3);
    }

    do {
        VAR_15 = FUNC_8(VAR_8, VAR_12);
        if (!VAR_15) {
            FUNC_5(VAR_11, VAR_0, "Failed to query an output frame.\n");
            return FUNC_0(VAR_3);
        }

        do {
            VAR_16 = FUNC_3(VAR_8->session, VAR_14->surface,
                                               VAR_15->surface, ((void*)0), &VAR_13);
            if (VAR_16 == VAR_6)
                FUNC_7(500);
        } while (VAR_16 == VAR_6);

        if (VAR_16 < 0 && VAR_16 != VAR_5) {

            if (VAR_16 == VAR_4)
                VAR_16 = FUNC_0(VAR_2);
            break;
        }

        if (FUNC_2(VAR_8->session, VAR_13, 1000) < 0)
            FUNC_5(VAR_11, VAR_1, "Sync failed.\n");

        VAR_15->frame->pts = FUNC_6(VAR_15->surface->Data.TimeStamp,
                                             VAR_7, VAR_12->time_base);

        VAR_17 = VAR_8->filter_frame(VAR_12, VAR_15->frame);
        if (VAR_17 < 0) {
            FUNC_4(&VAR_15->frame);
            VAR_16 = VAR_17;
            break;
        }
        VAR_15->frame = ((void*)0);
    } while(VAR_16 == VAR_5);

    return VAR_16;
}
