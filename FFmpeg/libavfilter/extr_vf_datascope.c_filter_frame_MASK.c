
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int text ;
struct TYPE_19__ {int yoff; int xoff; TYPE_4__* out; TYPE_4__* in; int member_0; } ;
typedef TYPE_2__ ThreadData ;
struct TYPE_23__ {TYPE_1__* internal; TYPE_5__** outputs; TYPE_3__* priv; } ;
struct TYPE_22__ {int w; int h; TYPE_6__* dst; } ;
struct TYPE_21__ {int linesize; int data; int pts; } ;
struct TYPE_20__ {int nb_planes; int nb_comps; int chars; int y; int x; int filter; int yellow; int draw; int gray; scalar_t__ axis; int black; } ;
struct TYPE_18__ {int (* execute ) (TYPE_6__*,int ,TYPE_2__*,int *,int ) ;} ;
typedef TYPE_3__ DatascopeContext ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVFilterLink ;
typedef TYPE_6__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_4__**) ;
 int FUNC_4 (int *,TYPE_4__*,int *,int,int,char*,int) ;
 int FUNC_5 (int *,int *,int ,int ,int,int,int,int) ;
 int FUNC_6 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_7 (TYPE_6__*) ;
 TYPE_4__* FUNC_8 (TYPE_5__*,int,int) ;
 int FUNC_9 (char*,int,char*,int) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (TYPE_6__*,int ,TYPE_2__*,int *,int ) ;

__attribute__((used)) static int FUNC_12(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_1->dst;
    DatascopeContext *VAR_4 = VAR_3->priv;
    AVFilterLink *VAR_5 = VAR_3->outputs[0];
    ThreadData VAR_6 = { 0 };
    int VAR_7 = 0;
    int VAR_8 = 0;
    AVFrame *VAR_9;

    VAR_9 = FUNC_8(VAR_5, VAR_5->w, VAR_5->h);
    if (!VAR_9) {
        FUNC_3(&VAR_2);
        return FUNC_0(VAR_0);
    }
    VAR_9->pts = VAR_2->pts;

    FUNC_5(&VAR_4->draw, &VAR_4->black, VAR_9->data, VAR_9->linesize,
                      0, 0, VAR_5->w, VAR_5->h);

    if (VAR_4->axis) {
        const int VAR_10 = FUNC_1(VAR_4->nb_planes, VAR_4->nb_comps);
        const int VAR_11 = VAR_4->chars;
        int VAR_12 = VAR_5->h / (VAR_10 * 12);
        int VAR_13 = VAR_5->w / (VAR_11 * 10);
        char VAR_14[256] = { 0 };
        int VAR_15, VAR_16;

        FUNC_9(VAR_14, sizeof(VAR_14), "%d", VAR_4->y + VAR_12);
        VAR_7 = FUNC_10(VAR_14);
        VAR_7 *= 10;
        FUNC_9(VAR_14, sizeof(VAR_14), "%d", VAR_4->x + VAR_13);
        VAR_8 = FUNC_10(VAR_14);
        VAR_8 *= 10;

        VAR_12 = (VAR_5->h - VAR_8) / (VAR_10 * 12);
        VAR_13 = (VAR_5->w - VAR_7) / (VAR_11 * 10);

        for (VAR_16 = 0; VAR_16 < VAR_12; VAR_16++) {
            FUNC_9(VAR_14, sizeof(VAR_14), "%d", VAR_4->y + VAR_16);

            FUNC_5(&VAR_4->draw, &VAR_4->gray, VAR_9->data, VAR_9->linesize,
                              0, VAR_8 + VAR_16 * VAR_10 * 12 + (VAR_10 + 1) * VAR_10 - 2, VAR_7, 10);

            FUNC_4(&VAR_4->draw, VAR_9, &VAR_4->yellow, 2, VAR_8 + VAR_16 * VAR_10 * 12 + (VAR_10 + 1) * VAR_10, VAR_14, 0);
        }

        for (VAR_15 = 0; VAR_15 < VAR_13; VAR_15++) {
            FUNC_9(VAR_14, sizeof(VAR_14), "%d", VAR_4->x + VAR_15);

            FUNC_5(&VAR_4->draw, &VAR_4->gray, VAR_9->data, VAR_9->linesize,
                              VAR_7 + VAR_15 * VAR_11 * 10 + 2 * VAR_11 - 2, 0, 10, VAR_8);

            FUNC_4(&VAR_4->draw, VAR_9, &VAR_4->yellow, VAR_7 + VAR_15 * VAR_11 * 10 + 2 * VAR_11, 2, VAR_14, 1);
        }
    }

    VAR_6.in = VAR_2; VAR_6.out = VAR_9, VAR_6.yoff = VAR_8, VAR_6.xoff = VAR_7;
    VAR_3->internal->execute(VAR_3, VAR_4->filter, &VAR_6, ((void*)0), FUNC_2(FUNC_7(VAR_3), FUNC_1(VAR_5->w / 20, 1)));

    FUNC_3(&VAR_2);
    return FUNC_6(VAR_5, VAR_9);
}
