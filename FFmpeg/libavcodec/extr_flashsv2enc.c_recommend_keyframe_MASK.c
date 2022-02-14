
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {double diff_blocks; double tot_blocks; double diff_lines; double tot_lines; double uncomp_size; double raw_size; double comp_size; TYPE_1__* avctx; } ;
struct TYPE_4__ {scalar_t__ gop_size; } ;
typedef TYPE_2__ FlashSV2Context ;



__attribute__((used)) static void FUNC_0(FlashSV2Context * VAR_0, int *VAR_1)
{

    double VAR_2, VAR_3, VAR_4, VAR_5, VAR_6;
    if (VAR_0->avctx->gop_size > 0) {
        VAR_2 = VAR_0->diff_blocks / VAR_0->tot_blocks;
        VAR_3 = VAR_0->diff_lines / VAR_0->tot_lines;
        VAR_4 = VAR_0->uncomp_size / VAR_0->raw_size;
        VAR_5 = VAR_0->comp_size / VAR_0->uncomp_size;
        VAR_6 = VAR_0->comp_size / VAR_0->raw_size;

        if ((VAR_2 >= 0.5 && VAR_3 / VAR_2 <= 0.5) || VAR_3 >= 0.95) {
            *VAR_1 = 1;
            return;
        }
    }



}
