
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double diff_blocks; int tot_blocks; double diff_lines; int tot_lines; int raw_size; int comp_size; int uncomp_size; } ;
typedef TYPE_1__ FlashSV2Context ;



__attribute__((used)) static void FUNC_0(FlashSV2Context * VAR_0)
{

    VAR_0->diff_blocks = 0.1;
    VAR_0->tot_blocks = 1;
    VAR_0->diff_lines = 0.1;
    VAR_0->tot_lines = 1;
    VAR_0->raw_size = VAR_0->comp_size = VAR_0->uncomp_size = 10;

}
