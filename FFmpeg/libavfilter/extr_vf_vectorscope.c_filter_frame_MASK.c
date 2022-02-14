
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {int colorspace; int cs; int depth; int size; int pd; int y; int x; int (* graticulef ) (TYPE_1__*,TYPE_2__*,int ,int ,int ,int) ;int (* vectorscope ) (TYPE_1__*,TYPE_2__*,TYPE_2__*,int ) ;} ;
typedef TYPE_1__ VectorscopeContext ;
struct TYPE_22__ {TYPE_3__** outputs; TYPE_1__* priv; } ;
struct TYPE_21__ {int h; int w; TYPE_4__* dst; } ;
struct TYPE_20__ {int colorspace; int* linesize; scalar_t__* data; } ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;





 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__**) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*) ;
 TYPE_2__* FUNC_4 (TYPE_3__*,int ,int ) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__*,TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_7(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_1->dst;
    VectorscopeContext *VAR_4 = VAR_3->priv;
    AVFilterLink *VAR_5 = VAR_3->outputs[0];
    AVFrame *VAR_6;
    int VAR_7;

    if (VAR_4->colorspace) {
        VAR_4->cs = (VAR_4->depth - 8) * 2 + VAR_4->colorspace - 1;
    } else {
        switch (VAR_2->colorspace) {
        case 128:
        case 130:
            VAR_4->cs = (VAR_4->depth - 8) * 2 + 0;
            break;
        case 129:
        default:
            VAR_4->cs = (VAR_4->depth - 8) * 2 + 1;
        }
    }

    VAR_6 = FUNC_4(VAR_5, VAR_5->w, VAR_5->h);
    if (!VAR_6) {
        FUNC_2(&VAR_2);
        return FUNC_0(VAR_0);
    }
    FUNC_1(VAR_6, VAR_2);

    VAR_4->vectorscope(VAR_4, VAR_2, VAR_6, VAR_4->pd);
    VAR_4->graticulef(VAR_4, VAR_6, VAR_4->x, VAR_4->y, VAR_4->pd, VAR_4->cs);

    for (VAR_7 = 0; VAR_7 < 4; VAR_7++) {
        if (VAR_6->data[VAR_7]) {
            VAR_6->data[VAR_7] += (VAR_4->size - 1) * VAR_6->linesize[VAR_7];
            VAR_6->linesize[VAR_7] = -VAR_6->linesize[VAR_7];
        }
    }

    FUNC_2(&VAR_2);
    return FUNC_3(VAR_5, VAR_6);
}
