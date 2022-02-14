
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_11__ ;


typedef int uint8_t ;
struct TYPE_20__ {int w; int h; TYPE_1__* dst; } ;
struct TYPE_19__ {int const* linesize; int ** data; } ;
struct TYPE_18__ {TYPE_11__* pix_desc; int line; } ;
struct TYPE_17__ {TYPE_4__** outputs; TYPE_2__* priv; } ;
struct TYPE_16__ {int flags; int nb_components; int log2_chroma_h; int log2_chroma_w; } ;
typedef TYPE_2__ PixdescTestContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterLink ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int const FUNC_2 (int const) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_4 (TYPE_3__**) ;
 int FUNC_5 (int ,void*,int const*,TYPE_11__*,int ,int,int,int const,int ,int) ;
 int FUNC_6 (int ,int **,int const*,TYPE_11__*,int ,int,int,int const,int) ;
 int FUNC_7 (TYPE_4__*,TYPE_3__*) ;
 TYPE_3__* FUNC_8 (TYPE_4__*,int,int) ;
 int FUNC_9 (int *,int *,int ) ;
 int FUNC_10 (int *,int ,int const) ;

__attribute__((used)) static int FUNC_11(AVFilterLink *VAR_4, AVFrame *VAR_5)
{
    PixdescTestContext *VAR_6 = VAR_4->dst->priv;
    AVFilterLink *VAR_7 = VAR_4->dst->outputs[0];
    AVFrame *VAR_8;
    int VAR_9, VAR_10, VAR_11 = VAR_4->w, VAR_12 = VAR_4->h;
    const int VAR_13 = FUNC_1(VAR_11, VAR_6->pix_desc->log2_chroma_w);
    const int VAR_14 = FUNC_1(VAR_12, VAR_6->pix_desc->log2_chroma_h);

    VAR_8 = FUNC_8(VAR_7, VAR_7->w, VAR_7->h);
    if (!VAR_8) {
        FUNC_4(&VAR_5);
        return FUNC_0(VAR_2);
    }

    FUNC_3(VAR_8, VAR_5);

    for (VAR_9 = 0; VAR_9 < 4; VAR_9++) {
        const int VAR_15 = VAR_9 == 1 || VAR_9 == 2 ? VAR_14 : VAR_12;
        if (VAR_8->data[VAR_9]) {
            uint8_t *VAR_16 = VAR_8->data[VAR_9] +
                (VAR_8->linesize[VAR_9] > 0 ? 0 : VAR_8->linesize[VAR_9] * (VAR_15-1));
            FUNC_10(VAR_16, 0, FUNC_2(VAR_8->linesize[VAR_9]) * VAR_15);
        }
    }


    if (VAR_6->pix_desc->flags & VAR_1 ||
        ((VAR_6->pix_desc->flags & VAR_3) && VAR_8->data[1] && VAR_5->data[1]))
        FUNC_9(VAR_8->data[1], VAR_5->data[1], VAR_0);

    for (VAR_10 = 0; VAR_10 < VAR_6->pix_desc->nb_components; VAR_10++) {
        const int VAR_17 = VAR_10 == 1 || VAR_10 == 2 ? VAR_13 : VAR_11;
        const int VAR_18 = VAR_10 == 1 || VAR_10 == 2 ? VAR_14 : VAR_12;

        for (VAR_9 = 0; VAR_9 < VAR_18; VAR_9++) {
            FUNC_5(VAR_6->line,
                               (void*)VAR_5->data,
                               VAR_5->linesize,
                               VAR_6->pix_desc,
                               0, VAR_9, VAR_10, VAR_17, 0, 4);

            FUNC_6(VAR_6->line,
                                VAR_8->data,
                                VAR_8->linesize,
                                VAR_6->pix_desc,
                                0, VAR_9, VAR_10, VAR_17, 4);
        }
    }

    FUNC_4(&VAR_5);
    return FUNC_7(VAR_7, VAR_8);
}
