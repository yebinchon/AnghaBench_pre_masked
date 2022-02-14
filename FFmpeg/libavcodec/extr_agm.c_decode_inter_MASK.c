
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int compression; int flags; int blocks_w; int blocks_h; int chroma_quant_matrix; int * size; int gbyte; int luma_quant_matrix; } ;
struct TYPE_7__ {int coded_width; int coded_height; TYPE_2__* priv_data; } ;
typedef int GetBitContext ;
typedef int AVFrame ;
typedef TYPE_1__ AVCodecContext ;
typedef TYPE_2__ AGMContext ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,int *,int ,int ,int *,int *,int) ;
 int FUNC_3 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_0, GetBitContext *VAR_1,
                        AVFrame *VAR_2, AVFrame *VAR_3)
{
    AGMContext *VAR_4 = VAR_0->priv_data;
    int VAR_5;

    FUNC_1(VAR_4, (2 * VAR_4->compression - 100) / 100.0);

    if (VAR_4->flags & 2) {
        VAR_5 = FUNC_3(VAR_0, VAR_1);
        if (VAR_5 < 0)
            return VAR_5;
    }

    VAR_4->blocks_w = VAR_0->coded_width >> 3;
    VAR_4->blocks_h = VAR_0->coded_height >> 3;

    VAR_5 = FUNC_2(VAR_4, VAR_1, VAR_4->size[0], VAR_4->luma_quant_matrix, VAR_2, VAR_3, 0);
    if (VAR_5 < 0)
        return VAR_5;

    FUNC_0(&VAR_4->gbyte, VAR_4->size[0]);

    VAR_4->blocks_w = VAR_0->coded_width >> 4;
    VAR_4->blocks_h = VAR_0->coded_height >> 4;

    VAR_5 = FUNC_2(VAR_4, VAR_1, VAR_4->size[1], VAR_4->chroma_quant_matrix, VAR_2, VAR_3, 2);
    if (VAR_5 < 0)
        return VAR_5;

    FUNC_0(&VAR_4->gbyte, VAR_4->size[1]);

    VAR_4->blocks_w = VAR_0->coded_width >> 4;
    VAR_4->blocks_h = VAR_0->coded_height >> 4;

    VAR_5 = FUNC_2(VAR_4, VAR_1, VAR_4->size[2], VAR_4->chroma_quant_matrix, VAR_2, VAR_3, 1);
    if (VAR_5 < 0)
        return VAR_5;

    return 0;
}
