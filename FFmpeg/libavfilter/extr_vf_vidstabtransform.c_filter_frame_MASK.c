
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int VSTransformData ;
struct TYPE_20__ {int * linesize; int * data; } ;
typedef TYPE_1__ VSFrame ;
struct TYPE_21__ {int trans; int td; } ;
typedef TYPE_2__ TransformContext ;
struct TYPE_26__ {int planes; } ;
struct TYPE_25__ {int planes; } ;
struct TYPE_24__ {TYPE_4__** outputs; TYPE_2__* priv; } ;
struct TYPE_23__ {int h; int w; TYPE_5__* dst; } ;
struct TYPE_22__ {int * linesize; int * data; } ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_3__**) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_4__*,TYPE_3__*) ;
 TYPE_3__* FUNC_5 (TYPE_4__*,int ,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 TYPE_9__* FUNC_9 (int *) ;
 TYPE_8__* FUNC_10 (int *) ;
 int FUNC_11 (int *,TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_12(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_1->dst;
    TransformContext *VAR_4 = VAR_3->priv;
    VSTransformData* VAR_5 = &(VAR_4->td);

    AVFilterLink *VAR_6 = VAR_1->dst->outputs[0];
    int VAR_7 = 0;
    AVFrame *VAR_8;
    VSFrame VAR_9;
    int VAR_10;

    if (FUNC_3(VAR_2)) {
        VAR_7 = 1;
        VAR_8 = VAR_2;
    } else {
        VAR_8 = FUNC_5(VAR_6, VAR_6->w, VAR_6->h);
        if (!VAR_8) {
            FUNC_2(&VAR_2);
            return FUNC_0(VAR_0);
        }
        FUNC_1(VAR_8, VAR_2);
    }

    for (VAR_10 = 0; VAR_10 < FUNC_10(VAR_5)->planes; VAR_10++) {
        VAR_9.data[VAR_10] = VAR_2->data[VAR_10];
        VAR_9.linesize[VAR_10] = VAR_2->linesize[VAR_10];
    }
    if (VAR_7) {
        FUNC_11(VAR_5, &VAR_9, &VAR_9);
    } else {
        VSFrame VAR_11;
        for (VAR_10 = 0; VAR_10 < FUNC_9(VAR_5)->planes; VAR_10++) {
            VAR_11.data[VAR_10] = VAR_8->data[VAR_10];
            VAR_11.linesize[VAR_10] = VAR_8->linesize[VAR_10];
        }
        FUNC_11(VAR_5, &VAR_9, &VAR_11);
    }

    FUNC_6(VAR_5, FUNC_7(VAR_5, &VAR_4->trans));

    FUNC_8(VAR_5);

    if (!VAR_7)
        FUNC_2(&VAR_2);

    return FUNC_4(VAR_6, VAR_8);
}
