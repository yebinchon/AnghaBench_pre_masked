
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int text ;
struct TYPE_17__ {int xoff; int yoff; TYPE_5__* out; TYPE_5__* in; } ;
typedef TYPE_2__ ThreadData ;
struct TYPE_22__ {TYPE_6__** inputs; TYPE_6__** outputs; TYPE_4__* priv; } ;
struct TYPE_21__ {int const w; int const h; } ;
struct TYPE_20__ {int linesize; int data; } ;
struct TYPE_19__ {int chars; scalar_t__ y; scalar_t__ x; int draw; int (* reverse_color ) (int *,TYPE_3__*,TYPE_3__*) ;int (* pick_color ) (int *,TYPE_3__*,TYPE_5__*,scalar_t__,scalar_t__,int*) ;int nb_comps; int nb_planes; } ;
struct TYPE_16__ {int member_0; } ;
struct TYPE_18__ {TYPE_1__ member_0; } ;
typedef TYPE_3__ FFDrawColor ;
typedef TYPE_4__ DatascopeContext ;
typedef TYPE_5__ AVFrame ;
typedef TYPE_6__ AVFilterLink ;
typedef TYPE_7__ AVFilterContext ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,TYPE_5__*,TYPE_3__*,int const,int const,char*,int ) ;
 int FUNC_2 (int *,TYPE_3__*,int ,int ,int const,int const,int const,int const) ;
 int FUNC_3 (char*,int,char const*,int) ;
 int FUNC_4 (int *,TYPE_3__*,TYPE_5__*,scalar_t__,scalar_t__,int*) ;
 int FUNC_5 (int *,TYPE_3__*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_6(AVFilterContext *VAR_0, void *VAR_1, int VAR_2, int VAR_3)
{
    DatascopeContext *VAR_4 = VAR_0->priv;
    AVFilterLink *VAR_5 = VAR_0->outputs[0];
    AVFilterLink *VAR_6 = VAR_0->inputs[0];
    ThreadData *VAR_7 = VAR_1;
    AVFrame *VAR_8 = VAR_7->in;
    AVFrame *VAR_9 = VAR_7->out;
    const int VAR_10 = VAR_7->xoff;
    const int VAR_11 = VAR_7->yoff;
    const int VAR_12 = FUNC_0(VAR_4->nb_planes, VAR_4->nb_comps);
    const int VAR_13 = VAR_4->chars;
    const int VAR_14 = (VAR_5->w - VAR_10) / (VAR_13 * 10);
    const int VAR_15 = (VAR_5->h - VAR_11) / (VAR_12 * 12);
    const char *VAR_16[2] = {"%02X\n", "%04X\n"};
    const int VAR_17 = (VAR_14 * VAR_2) / VAR_3;
    const int VAR_18 = (VAR_14 * (VAR_2+1)) / VAR_3;
    int VAR_19, VAR_20, VAR_21;

    for (VAR_20 = 0; VAR_20 < VAR_15 && (VAR_20 + VAR_4->y < VAR_6->h); VAR_20++) {
        for (VAR_19 = VAR_17; VAR_19 < VAR_18 && (VAR_19 + VAR_4->x < VAR_6->w); VAR_19++) {
            FFDrawColor VAR_22 = { { 0 } };
            FFDrawColor VAR_23 = { { 0 } };
            int VAR_24[4] = { 0 };

            VAR_4->pick_color(&VAR_4->draw, &VAR_22, VAR_8, VAR_19 + VAR_4->x, VAR_20 + VAR_4->y, VAR_24);
            VAR_4->reverse_color(&VAR_4->draw, &VAR_22, &VAR_23);
            FUNC_2(&VAR_4->draw, &VAR_22, VAR_9->data, VAR_9->linesize,
                              VAR_10 + VAR_19 * VAR_13 * 10, VAR_11 + VAR_20 * VAR_12 * 12, VAR_13 * 10, VAR_12 * 12);

            for (VAR_21 = 0; VAR_21 < VAR_12; VAR_21++) {
                char VAR_25[256];

                FUNC_3(VAR_25, sizeof(VAR_25), VAR_16[VAR_13>>2], VAR_24[VAR_21]);
                FUNC_1(&VAR_4->draw, VAR_9, &VAR_23, VAR_10 + VAR_19 * VAR_13 * 10 + 2, VAR_11 + VAR_20 * VAR_12 * 12 + VAR_21 * 10 + 2, VAR_25, 0);
            }
        }
    }

    return 0;
}
