
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_5__ {int compression_level; TYPE_1__* lpc; int max_prediction_order; int min_prediction_order; int frame_size; int * sample_buf; int lpc_ctx; } ;
struct TYPE_4__ {int lpc_order; int lpc_quant; int* lpc_coeff; } ;
typedef TYPE_2__ AlacEncodeContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,int ,int ,int ,int ,int **,int*,int ,int ,int ,int ,int ,int) ;
 int FUNC_1 (int*,int *,int) ;

__attribute__((used)) static void FUNC_2(AlacEncodeContext *VAR_6, int VAR_7)
{
    int32_t VAR_8[VAR_4][VAR_4];
    int VAR_9[VAR_4];
    int VAR_10;

    if (VAR_6->compression_level == 1) {
        VAR_6->lpc[VAR_7].lpc_order = 6;
        VAR_6->lpc[VAR_7].lpc_quant = 6;
        VAR_6->lpc[VAR_7].lpc_coeff[0] = 160;
        VAR_6->lpc[VAR_7].lpc_coeff[1] = -190;
        VAR_6->lpc[VAR_7].lpc_coeff[2] = 170;
        VAR_6->lpc[VAR_7].lpc_coeff[3] = -130;
        VAR_6->lpc[VAR_7].lpc_coeff[4] = 80;
        VAR_6->lpc[VAR_7].lpc_coeff[5] = -25;
    } else {
        VAR_10 = FUNC_0(&VAR_6->lpc_ctx, VAR_6->sample_buf[VAR_7],
                                      VAR_6->frame_size,
                                      VAR_6->min_prediction_order,
                                      VAR_6->max_prediction_order,
                                      VAR_0, VAR_8, VAR_9,
                                      VAR_3, 0,
                                      VAR_5, VAR_2,
                                      VAR_1, 1);

        VAR_6->lpc[VAR_7].lpc_order = VAR_10;
        VAR_6->lpc[VAR_7].lpc_quant = VAR_9[VAR_10-1];
        FUNC_1(VAR_6->lpc[VAR_7].lpc_coeff, VAR_8[VAR_10-1], VAR_10*sizeof(int));
    }
}
