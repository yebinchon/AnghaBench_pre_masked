
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_19__ {int w; int h; TYPE_1__* dst; } ;
struct TYPE_18__ {scalar_t__* data; scalar_t__* linesize; } ;
struct TYPE_17__ {int radius; int chroma_w; int chroma_h; int chroma_r; } ;
struct TYPE_16__ {TYPE_4__** outputs; TYPE_2__* priv; } ;
typedef TYPE_2__ GradFunContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterLink ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_3 (TYPE_3__**) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int,int) ;
 int FUNC_6 (TYPE_4__*,TYPE_3__*) ;
 TYPE_3__* FUNC_7 (TYPE_4__*,int,int) ;
 int FUNC_8 (TYPE_2__*,scalar_t__,scalar_t__,int,int,scalar_t__,scalar_t__,int) ;

__attribute__((used)) static int FUNC_9(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    GradFunContext *VAR_3 = VAR_1->dst->priv;
    AVFilterLink *VAR_4 = VAR_1->dst->outputs[0];
    AVFrame *VAR_5;
    int VAR_6, VAR_7;

    if (FUNC_4(VAR_2)) {
        VAR_7 = 1;
        VAR_5 = VAR_2;
    } else {
        VAR_7 = 0;
        VAR_5 = FUNC_7(VAR_4, VAR_4->w, VAR_4->h);
        if (!VAR_5) {
            FUNC_3(&VAR_2);
            return FUNC_0(VAR_0);
        }
        FUNC_2(VAR_5, VAR_2);
    }

    for (VAR_6 = 0; VAR_6 < 4 && VAR_2->data[VAR_6] && VAR_2->linesize[VAR_6]; VAR_6++) {
        int VAR_8 = VAR_1->w;
        int VAR_9 = VAR_1->h;
        int VAR_10 = VAR_3->radius;
        if (VAR_6) {
            VAR_8 = VAR_3->chroma_w;
            VAR_9 = VAR_3->chroma_h;
            VAR_10 = VAR_3->chroma_r;
        }

        if (FUNC_1(VAR_8, VAR_9) > 2 * VAR_10)
            FUNC_8(VAR_3, VAR_5->data[VAR_6], VAR_2->data[VAR_6], VAR_8, VAR_9, VAR_5->linesize[VAR_6], VAR_2->linesize[VAR_6], VAR_10);
        else if (VAR_5->data[VAR_6] != VAR_2->data[VAR_6])
            FUNC_5(VAR_5->data[VAR_6], VAR_5->linesize[VAR_6], VAR_2->data[VAR_6], VAR_2->linesize[VAR_6], VAR_8, VAR_9);
    }

    if (!VAR_7)
        FUNC_3(&VAR_2);

    return FUNC_6(VAR_4, VAR_5);
}
