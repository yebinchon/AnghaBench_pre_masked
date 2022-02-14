
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* block_index; int b8_stride; int mb_y; int mb_x; int mb_stride; int mb_height; } ;
typedef TYPE_1__ MpegEncContext ;



__attribute__((used)) static void FUNC_0(MpegEncContext *VAR_0){
    VAR_0->block_index[0]= VAR_0->b8_stride*(VAR_0->mb_y*2 ) + VAR_0->mb_x*2;
    VAR_0->block_index[1]= VAR_0->b8_stride*(VAR_0->mb_y*2 ) + 1 + VAR_0->mb_x*2;
    VAR_0->block_index[2]= VAR_0->b8_stride*(VAR_0->mb_y*2 + 1) + VAR_0->mb_x*2;
    VAR_0->block_index[3]= VAR_0->b8_stride*(VAR_0->mb_y*2 + 1) + 1 + VAR_0->mb_x*2;
    VAR_0->block_index[4]= VAR_0->mb_stride*(VAR_0->mb_y + 1) + VAR_0->b8_stride*VAR_0->mb_height*2 + VAR_0->mb_x;
    VAR_0->block_index[5]= VAR_0->mb_stride*(VAR_0->mb_y + VAR_0->mb_height + 2) + VAR_0->b8_stride*VAR_0->mb_height*2 + VAR_0->mb_x;
}
