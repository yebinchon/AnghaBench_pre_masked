
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_21__ {int plane; int pts; struct TYPE_21__* out; } ;
typedef TYPE_2__ ThreadData ;
struct TYPE_23__ {TYPE_1__* internal; int is_disabled; TYPE_3__* priv; int ** outputs; int ** inputs; } ;
struct TYPE_22__ {int eof; int eof_frames; int m; TYPE_2__** frames; int * planeheight; int derainbow; int dedotcrawl; } ;
struct TYPE_20__ {int (* execute ) (TYPE_5__*,int ,TYPE_2__*,int *,int ) ;} ;
typedef TYPE_3__ DedotContext ;
typedef TYPE_2__ AVFrame ;
typedef int AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 void* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__**) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *,TYPE_2__*) ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (TYPE_5__*,int) ;
 scalar_t__ FUNC_10 (int *,int*,int *) ;
 int FUNC_11 (int *,TYPE_2__**) ;
 int FUNC_12 (int *,int,int ) ;
 int FUNC_13 (TYPE_5__*,int ,TYPE_2__*,int *,int ) ;
 int FUNC_14 (TYPE_5__*,int ,TYPE_2__*,int *,int ) ;
 int FUNC_15 (TYPE_5__*,int ,TYPE_2__*,int *,int ) ;

__attribute__((used)) static int FUNC_16(AVFilterContext *VAR_3)
{
    AVFilterLink *VAR_4 = VAR_3->inputs[0];
    AVFilterLink *VAR_5 = VAR_3->outputs[0];
    DedotContext *VAR_6 = VAR_3->priv;
    AVFrame *VAR_7 = ((void*)0);
    int64_t VAR_8;
    int VAR_9;
    int VAR_10 = 0;

    FUNC_2(VAR_5, VAR_4);

    if (VAR_6->eof == 0) {
        VAR_10 = FUNC_11(VAR_4, &VAR_7);
        if (VAR_10 < 0)
            return VAR_10;
    }
    if (VAR_7 || VAR_6->eof_frames > 0) {
        AVFrame *VAR_11 = ((void*)0);

        if (VAR_7) {
            for (int VAR_12 = 2; VAR_12 < 5; VAR_12++) {
                if (!VAR_6->frames[VAR_12])
                    VAR_6->frames[VAR_12] = FUNC_4(VAR_7);
            }
            FUNC_5(&VAR_7);
        } else if (VAR_6->frames[3]) {
            VAR_6->eof_frames--;
            VAR_6->frames[4] = FUNC_4(VAR_6->frames[3]);
        }

        if (VAR_6->frames[0] &&
            VAR_6->frames[1] &&
            VAR_6->frames[2] &&
            VAR_6->frames[3] &&
            VAR_6->frames[4]) {
            VAR_11 = FUNC_4(VAR_6->frames[2]);
            if (VAR_11 && !VAR_3->is_disabled) {
                VAR_10 = FUNC_6(VAR_11);
                if (VAR_10 >= 0) {
                    if (VAR_6->m & 1)
                        VAR_3->internal->execute(VAR_3, VAR_6->dedotcrawl, VAR_11, ((void*)0),
                                               FUNC_1(VAR_6->planeheight[0],
                                               FUNC_8(VAR_3)));
                    if (VAR_6->m & 2) {
                        ThreadData VAR_13;
                        VAR_13.out = VAR_11; VAR_13.plane = 1;
                        VAR_3->internal->execute(VAR_3, VAR_6->derainbow, &VAR_13, ((void*)0),
                                               FUNC_1(VAR_6->planeheight[1],
                                               FUNC_8(VAR_3)));
                        VAR_13.plane = 2;
                        VAR_3->internal->execute(VAR_3, VAR_6->derainbow, &VAR_13, ((void*)0),
                                               FUNC_1(VAR_6->planeheight[2],
                                               FUNC_8(VAR_3)));
                    }
                }
            } else if (!VAR_11) {
                VAR_10 = FUNC_0(VAR_1);
            }
        }

        FUNC_5(&VAR_6->frames[0]);
        VAR_6->frames[0] = VAR_6->frames[1];
        VAR_6->frames[1] = VAR_6->frames[2];
        VAR_6->frames[2] = VAR_6->frames[3];
        VAR_6->frames[3] = VAR_6->frames[4];
        VAR_6->frames[4] = ((void*)0);

        if (VAR_10 < 0)
            return VAR_10;
        if (VAR_11)
            return FUNC_7(VAR_5, VAR_11);
    }

    if (VAR_6->eof) {
        if (VAR_6->eof_frames <= 0) {
            FUNC_12(VAR_5, VAR_0, VAR_6->frames[2]->pts);
        } else {
            FUNC_9(VAR_3, 10);
        }
        return 0;
    }

    if (!VAR_6->eof && FUNC_10(VAR_4, &VAR_9, &VAR_8)) {
        if (VAR_9 == VAR_0) {
            VAR_6->eof = 1;
            VAR_6->eof_frames = !!VAR_6->frames[0] + !!VAR_6->frames[1];
            if (VAR_6->eof_frames <= 0) {
                FUNC_12(VAR_5, VAR_0, VAR_8);
                return 0;
            }
            FUNC_9(VAR_3, 10);
            return 0;
        }
    }

    FUNC_3(VAR_5, VAR_4);

    return VAR_2;
}
