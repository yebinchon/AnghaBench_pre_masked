
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int mb_width; int* slice_quants; TYPE_1__* pic; scalar_t__* quant; int * q; int gb; } ;
struct TYPE_5__ {int* linesize; scalar_t__* data; } ;
typedef TYPE_2__ TSCC2Context ;


 int FUNC_0 (int *,int const*,int) ;
 int FUNC_1 (TYPE_2__*,int ,scalar_t__,scalar_t__,int,int) ;

__attribute__((used)) static int FUNC_2(TSCC2Context *VAR_0, int VAR_1,
                              const uint8_t *VAR_2, int VAR_3)
{
    int VAR_4, VAR_5, VAR_6, VAR_7;
    int VAR_8;

    if ((VAR_7 = FUNC_0(&VAR_0->gb, VAR_2, VAR_3)) < 0)
        return VAR_7;

    for (VAR_5 = 0; VAR_5 < VAR_0->mb_width; VAR_5++) {
        VAR_6 = VAR_0->slice_quants[VAR_5 + VAR_0->mb_width * VAR_1];

        if (VAR_6 == 0 || VAR_6 == 3)
            continue;
        for (VAR_4 = 0; VAR_4 < 3; VAR_4++) {
            VAR_8 = VAR_5 * 16 + VAR_1 * 8 * VAR_0->pic->linesize[VAR_4];
            VAR_7 = FUNC_1(VAR_0, VAR_0->q[VAR_6 - 1], VAR_0->quant[VAR_6 - 1] - 2,
                                  VAR_0->pic->data[VAR_4] + VAR_8, VAR_0->pic->linesize[VAR_4], VAR_4);
            if (VAR_7)
                return VAR_7;
        }
    }

    return 0;
}
