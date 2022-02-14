
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_5__ {size_t** diff_peak_cb; size_t** scale_factor; int * cb_to_level; int ** quantized; scalar_t__** adpcm_history; int ** subband; int ** quant; int ** prediction_mode; int ** abits; } ;
typedef TYPE_1__ DCAEncContext ;


 int VAR_0 ;
 size_t FUNC_0 (TYPE_1__*,size_t,int ,int *) ;
 int * VAR_1 ;
 int FUNC_1 (int ,int ,int ,size_t,scalar_t__,int ,scalar_t__,int ,int ,int ) ;
 size_t FUNC_2 (TYPE_1__*,int,int) ;

__attribute__((used)) static inline void FUNC_3(DCAEncContext *VAR_2, int VAR_3, int VAR_4)
{
    int32_t VAR_5;
    int32_t VAR_6 = VAR_2->diff_peak_cb[VAR_3][VAR_4];
    VAR_2->scale_factor[VAR_3][VAR_4] = FUNC_0(VAR_2, VAR_6,
                                               VAR_2->abits[VAR_3][VAR_4],
                                               &VAR_2->quant[VAR_3][VAR_4]);

    VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_4);
    FUNC_1(VAR_2->prediction_mode[VAR_3][VAR_4],
                        VAR_2->quant[VAR_3][VAR_4],
                        VAR_1[VAR_2->scale_factor[VAR_3][VAR_4]],
                        VAR_5, VAR_2->adpcm_history[VAR_3][VAR_4], VAR_2->subband[VAR_3][VAR_4],
                        VAR_2->adpcm_history[VAR_3][VAR_4] + 4, VAR_2->quantized[VAR_3][VAR_4],
                        VAR_0, VAR_2->cb_to_level[-VAR_6]);
}
