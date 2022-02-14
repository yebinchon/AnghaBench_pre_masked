
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int block_type; int long_end; int short_start; scalar_t__ switch_point; } ;
struct TYPE_5__ {int sample_rate_index; int avctx; } ;
typedef TYPE_1__ MPADecodeContext ;
typedef TYPE_2__ GranuleDef ;


 int FUNC_0 (int ,char*) ;

__attribute__((used)) static void FUNC_1(MPADecodeContext *VAR_0, GranuleDef *VAR_1)
{
    if (VAR_1->block_type == 2) {
        if (VAR_1->switch_point) {
            if(VAR_0->sample_rate_index == 8)
                FUNC_0(VAR_0->avctx, "switch point in 8khz");



            if (VAR_0->sample_rate_index <= 2)
                VAR_1->long_end = 8;
            else
                VAR_1->long_end = 6;

            VAR_1->short_start = 3;
        } else {
            VAR_1->long_end = 0;
            VAR_1->short_start = 0;
        }
    } else {
        VAR_1->short_start = 13;
        VAR_1->long_end = 22;
    }
}
