
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int fill_mode; scalar_t__ num_coded_vals; int ch_num; void* split_point; } ;
struct TYPE_5__ {scalar_t__ num_quant_units; } ;
typedef int GetBitContext ;
typedef TYPE_1__ Atrac3pChanUnitCtx ;
typedef TYPE_2__ Atrac3pChanParams ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*) ;
 void* FUNC_1 (int *,int) ;

__attribute__((used)) static int FUNC_2(GetBitContext *VAR_2, Atrac3pChanParams *VAR_3,
                           Atrac3pChanUnitCtx *VAR_4, AVCodecContext *VAR_5)
{
    VAR_3->fill_mode = FUNC_1(VAR_2, 2);
    if (!VAR_3->fill_mode) {
        VAR_3->num_coded_vals = VAR_4->num_quant_units;
    } else {
        VAR_3->num_coded_vals = FUNC_1(VAR_2, 5);
        if (VAR_3->num_coded_vals > VAR_4->num_quant_units) {
            FUNC_0(VAR_5, VAR_1,
                   "Invalid number of transmitted units!\n");
            return VAR_0;
        }

        if (VAR_3->fill_mode == 3)
            VAR_3->split_point = FUNC_1(VAR_2, 2) + (VAR_3->ch_num << 1) + 1;
    }

    return 0;
}
