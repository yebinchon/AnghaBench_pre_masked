
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int text ;
struct TYPE_10__ {int xoff; int yoff; int * out; int * in; } ;
typedef TYPE_2__ ThreadData ;
struct TYPE_14__ {TYPE_5__** inputs; TYPE_5__** outputs; TYPE_4__* priv; } ;
struct TYPE_13__ {int const w; int const h; } ;
struct TYPE_12__ {int chars; scalar_t__ y; scalar_t__ x; int white; int draw; int (* pick_color ) (int *,TYPE_3__*,int *,scalar_t__,scalar_t__,int*) ;int nb_comps; int nb_planes; } ;
struct TYPE_9__ {int member_0; } ;
struct TYPE_11__ {TYPE_1__ member_0; } ;
typedef TYPE_3__ FFDrawColor ;
typedef TYPE_4__ DatascopeContext ;
typedef int AVFrame ;
typedef TYPE_5__ AVFilterLink ;
typedef TYPE_6__ AVFilterContext ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int *,int *,int const,int const,char*,int ) ;
 int FUNC_2 (char*,int,char const*,int) ;
 int FUNC_3 (int *,TYPE_3__*,int *,scalar_t__,scalar_t__,int*) ;

__attribute__((used)) static int FUNC_4(AVFilterContext *VAR_0, void *VAR_1, int VAR_2, int VAR_3)
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
            int VAR_23[4] = { 0 };

            VAR_4->pick_color(&VAR_4->draw, &VAR_22, VAR_8, VAR_19 + VAR_4->x, VAR_20 + VAR_4->y, VAR_23);
            for (VAR_21 = 0; VAR_21 < VAR_12; VAR_21++) {
                char VAR_24[256];

                FUNC_2(VAR_24, sizeof(VAR_24), VAR_16[VAR_13>>2], VAR_23[VAR_21]);
                FUNC_1(&VAR_4->draw, VAR_9, &VAR_4->white, VAR_10 + VAR_19 * VAR_13 * 10 + 2, VAR_11 + VAR_20 * VAR_12 * 12 + VAR_21 * 10 + 2, VAR_24, 0);
            }
        }
    }

    return 0;
}
