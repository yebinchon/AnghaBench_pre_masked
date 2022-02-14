
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_6__ ;
typedef struct TYPE_33__ TYPE_5__ ;
typedef struct TYPE_32__ TYPE_4__ ;
typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_1__ ;
typedef struct TYPE_28__ TYPE_17__ ;


struct TYPE_30__ {TYPE_3__* out; TYPE_3__* in; } ;
typedef TYPE_2__ ThreadData ;
struct TYPE_28__ {int available; } ;
struct TYPE_34__ {int size; int mid; TYPE_17__ q; int * planeheight; int filter_slice; int ** linesize; int ** data; int available; } ;
struct TYPE_33__ {TYPE_1__* internal; int is_disabled; TYPE_6__* priv; TYPE_4__** outputs; } ;
struct TYPE_32__ {int h; int w; TYPE_5__* dst; } ;
struct TYPE_31__ {int * linesize; int * data; } ;
struct TYPE_29__ {int (* execute ) (TYPE_5__*,int ,TYPE_2__*,int *,int ) ;} ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;
typedef TYPE_6__ ATADenoiseContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 TYPE_3__* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_4 (TYPE_3__**) ;
 int FUNC_5 (TYPE_5__*,TYPE_17__*,TYPE_3__*) ;
 TYPE_3__* FUNC_6 (TYPE_17__*) ;
 TYPE_3__* FUNC_7 (TYPE_17__*,int) ;
 int FUNC_8 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_9 (TYPE_5__*) ;
 TYPE_3__* FUNC_10 (TYPE_4__*,int ,int ) ;
 int FUNC_11 (TYPE_5__*,int ,TYPE_2__*,int *,int ) ;

__attribute__((used)) static int FUNC_12(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_1->dst;
    AVFilterLink *VAR_4 = VAR_3->outputs[0];
    ATADenoiseContext *VAR_5 = VAR_3->priv;
    AVFrame *VAR_6, *VAR_7;
    int VAR_8;

    if (VAR_5->q.available != VAR_5->size) {
        if (VAR_5->q.available < VAR_5->mid) {
            for (VAR_8 = 0; VAR_8 < VAR_5->mid; VAR_8++) {
                VAR_6 = FUNC_2(VAR_2);
                if (!VAR_6) {
                    FUNC_4(&VAR_2);
                    return FUNC_0(VAR_0);
                }
                FUNC_5(VAR_3, &VAR_5->q, VAR_6);
            }
        }
        if (VAR_5->q.available < VAR_5->size) {
            FUNC_5(VAR_3, &VAR_5->q, VAR_2);
            VAR_5->available++;
        }
        return 0;
    }

    VAR_7 = FUNC_7(&VAR_5->q, VAR_5->mid);

    if (!VAR_3->is_disabled) {
        ThreadData VAR_9;

        VAR_6 = FUNC_10(VAR_4, VAR_4->w, VAR_4->h);
        if (!VAR_6) {
            FUNC_4(&VAR_2);
            return FUNC_0(VAR_0);
        }

        for (VAR_8 = 0; VAR_8 < VAR_5->size; VAR_8++) {
            AVFrame *VAR_10 = FUNC_7(&VAR_5->q, VAR_8);

            VAR_5->data[0][VAR_8] = VAR_10->data[0];
            VAR_5->data[1][VAR_8] = VAR_10->data[1];
            VAR_5->data[2][VAR_8] = VAR_10->data[2];
            VAR_5->linesize[0][VAR_8] = VAR_10->linesize[0];
            VAR_5->linesize[1][VAR_8] = VAR_10->linesize[1];
            VAR_5->linesize[2][VAR_8] = VAR_10->linesize[2];
        }

        VAR_9.in = VAR_7; VAR_9.out = VAR_6;
        VAR_3->internal->execute(VAR_3, VAR_5->filter_slice, &VAR_9, ((void*)0),
                               FUNC_1(VAR_5->planeheight[1],
                                      VAR_5->planeheight[2],
                                      FUNC_9(VAR_3)));
        FUNC_3(VAR_6, VAR_7);
    } else {
        VAR_6 = FUNC_2(VAR_7);
        if (!VAR_6) {
            FUNC_4(&VAR_2);
            return FUNC_0(VAR_0);
        }
    }

    VAR_7 = FUNC_6(&VAR_5->q);
    FUNC_4(&VAR_7);
    FUNC_5(VAR_3, &VAR_5->q, VAR_2);

    return FUNC_8(VAR_4, VAR_6);
}
