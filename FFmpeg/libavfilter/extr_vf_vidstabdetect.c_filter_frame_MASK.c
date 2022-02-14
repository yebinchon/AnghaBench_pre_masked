
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_20__ {int planes; } ;
struct TYPE_21__ {TYPE_2__ fi; } ;
typedef TYPE_3__ VSMotionDetect ;
struct TYPE_22__ {int * linesize; int * data; } ;
typedef TYPE_4__ VSFrame ;
struct TYPE_26__ {TYPE_7__** outputs; TYPE_5__* priv; } ;
struct TYPE_25__ {TYPE_8__* dst; } ;
struct TYPE_24__ {int * linesize; int * data; } ;
struct TYPE_19__ {scalar_t__ show; } ;
struct TYPE_23__ {int f; TYPE_1__ conf; TYPE_3__ md; } ;
typedef TYPE_5__ StabData ;
typedef int LocalMotions ;
typedef TYPE_6__ AVFrame ;
typedef TYPE_7__ AVFilterLink ;
typedef TYPE_8__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (TYPE_8__*,int ,char*) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_7__*,TYPE_6__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*,int *,TYPE_4__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*,int ,int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(AVFilterLink *VAR_4, AVFrame *VAR_5)
{
    AVFilterContext *VAR_6 = VAR_4->dst;
    StabData *VAR_7 = VAR_6->priv;
    VSMotionDetect *VAR_8 = &(VAR_7->md);
    LocalMotions VAR_9;

    AVFilterLink *VAR_10 = VAR_4->dst->outputs[0];
    VSFrame VAR_11;
    int VAR_12;

    if (VAR_7->conf.show > 0 && !FUNC_1(VAR_5))
        FUNC_2(VAR_5);

    for (VAR_12 = 0; VAR_12 < VAR_8->fi.planes; VAR_12++) {
        VAR_11.data[VAR_12] = VAR_5->data[VAR_12];
        VAR_11.linesize[VAR_12] = VAR_5->linesize[VAR_12];
    }
    if (FUNC_5(VAR_8, &VAR_9, &VAR_11) != VAR_2) {
        FUNC_3(VAR_6, VAR_1, "motion detection failed");
        return FUNC_0(VAR_0);
    } else {
        if (FUNC_6(VAR_8, VAR_7->f, &VAR_9) != VAR_2) {
            int VAR_13 = FUNC_0(VAR_3);
            FUNC_3(VAR_6, VAR_1, "cannot write to transform file");
            return VAR_13;
        }
        FUNC_7(&VAR_9);
    }

    return FUNC_4(VAR_10, VAR_5);
}
