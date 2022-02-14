
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int diff_lines; int diff_blocks; int block_height; int comp_size; int tot_blocks; double rows; double cols; double image_height; } ;
typedef TYPE_1__ FlashSV2Context ;


 int FUNC_0 (int,int,int) ;
 double VAR_0 ;
 int FUNC_1 (int,double) ;
 double FUNC_2 (double) ;

__attribute__((used)) static int FUNC_3(FlashSV2Context * VAR_1)
{

    double VAR_2 = (1-FUNC_1(VAR_1->diff_lines/VAR_1->diff_blocks/VAR_1->block_height, 0.5)) * VAR_1->comp_size/VAR_1->tot_blocks;
    double VAR_3 = VAR_0 * FUNC_2(0.5 * VAR_2 * VAR_1->rows * VAR_1->cols) * VAR_1->image_height;
    int VAR_4 = ((int) VAR_3);
    return FUNC_0(VAR_4 & ~15, 256, 16);



}
