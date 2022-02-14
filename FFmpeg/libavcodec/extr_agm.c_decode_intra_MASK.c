
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int compression; int blocks_w; int blocks_h; int chroma_quant_matrix; int * size; int gbyte; int luma_quant_matrix; } ;
struct TYPE_6__ {int coded_width; int coded_height; TYPE_2__* priv_data; } ;
typedef int GetBitContext ;
typedef int AVFrame ;
typedef TYPE_1__ AVCodecContext ;
typedef TYPE_2__ AGMContext ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,int *,int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_3(AVCodecContext *VAR_0, GetBitContext *VAR_1, AVFrame *VAR_2)
{
    AGMContext *VAR_3 = VAR_0->priv_data;
    int VAR_4;

    FUNC_1(VAR_3, (2 * VAR_3->compression - 100) / 100.0);

    VAR_3->blocks_w = VAR_0->coded_width >> 3;
    VAR_3->blocks_h = VAR_0->coded_height >> 3;

    VAR_4 = FUNC_2(VAR_3, VAR_1, VAR_3->size[0], VAR_3->luma_quant_matrix, VAR_2, 0);
    if (VAR_4 < 0)
        return VAR_4;

    FUNC_0(&VAR_3->gbyte, VAR_3->size[0]);

    VAR_3->blocks_w = VAR_0->coded_width >> 4;
    VAR_3->blocks_h = VAR_0->coded_height >> 4;

    VAR_4 = FUNC_2(VAR_3, VAR_1, VAR_3->size[1], VAR_3->chroma_quant_matrix, VAR_2, 2);
    if (VAR_4 < 0)
        return VAR_4;

    FUNC_0(&VAR_3->gbyte, VAR_3->size[1]);

    VAR_3->blocks_w = VAR_0->coded_width >> 4;
    VAR_3->blocks_h = VAR_0->coded_height >> 4;

    VAR_4 = FUNC_2(VAR_3, VAR_1, VAR_3->size[2], VAR_3->chroma_quant_matrix, VAR_2, 1);
    if (VAR_4 < 0)
        return VAR_4;

    return 0;
}
