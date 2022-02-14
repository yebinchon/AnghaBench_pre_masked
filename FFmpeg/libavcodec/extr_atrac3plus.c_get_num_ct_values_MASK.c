
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int used_quant_units; } ;
typedef int GetBitContext ;
typedef TYPE_1__ Atrac3pChanUnitCtx ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*,int) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(GetBitContext *VAR_2, Atrac3pChanUnitCtx *VAR_3,
                             AVCodecContext *VAR_4)
{
    int VAR_5;

    if (FUNC_2(VAR_2)) {
        VAR_5 = FUNC_1(VAR_2, 5);
        if (VAR_5 > VAR_3->used_quant_units) {
            FUNC_0(VAR_4, VAR_1,
                   "Invalid number of code table indexes: %d!\n", VAR_5);
            return VAR_0;
        }
        return VAR_5;
    } else
        return VAR_3->used_quant_units;
}
