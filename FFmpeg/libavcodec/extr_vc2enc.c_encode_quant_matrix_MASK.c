
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wavelet_depth; int ** quant; int pb; scalar_t__ custom_quant_matrix; } ;
typedef TYPE_1__ VC2EncContext ;


 int FUNC_0 (int *,int,scalar_t__) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(VC2EncContext *VAR_0)
{
    int VAR_1;
    FUNC_0(&VAR_0->pb, 1, VAR_0->custom_quant_matrix);
    if (VAR_0->custom_quant_matrix) {
        FUNC_1(&VAR_0->pb, VAR_0->quant[0][0]);
        for (VAR_1 = 0; VAR_1 < VAR_0->wavelet_depth; VAR_1++) {
            FUNC_1(&VAR_0->pb, VAR_0->quant[VAR_1][1]);
            FUNC_1(&VAR_0->pb, VAR_0->quant[VAR_1][2]);
            FUNC_1(&VAR_0->pb, VAR_0->quant[VAR_1][3]);
        }
    }
}
