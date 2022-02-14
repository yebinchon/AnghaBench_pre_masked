
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int member_0; int member_1; int member_2; int member_3; int member_4; int member_5; int member_6; int member_7; int member_8; int member_9; int member_10; int member_11; int member_12; int member_13; int member_14; int member_15; } ;
typedef TYPE_2__ uint8_t ;
struct TYPE_9__ {int* mb_type; } ;
struct TYPE_12__ {int const mb_stride; scalar_t__* slice_table; TYPE_1__ cur_pic; } ;
struct TYPE_11__ {int mb_xy; int topleft_partition; int mb_y; int topleft_mb_xy; int top_mb_xy; int topright_mb_xy; int* left_mb_xy; int topleft_type; int top_type; int topright_type; int* left_type; scalar_t__ slice_num; TYPE_2__ const* left_block; } ;
typedef TYPE_3__ H264SliceContext ;
typedef TYPE_4__ H264Context ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_4__ const*) ;
 int FUNC_1 (int) ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int const FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_3(const H264Context *VAR_4, H264SliceContext *VAR_5, int VAR_6)
{
    const int VAR_7 = VAR_5->mb_xy;
    int VAR_8, VAR_9, VAR_10, VAR_11[VAR_2];
    static const uint8_t VAR_12[4][32] = {
        { 0, 1, 2, 3, 7, 10, 8, 11, 3 + 0 * 4, 3 + 1 * 4, 3 + 2 * 4, 3 + 3 * 4, 1 + 4 * 4, 1 + 8 * 4, 1 + 5 * 4, 1 + 9 * 4 },
        { 2, 2, 3, 3, 8, 11, 8, 11, 3 + 2 * 4, 3 + 2 * 4, 3 + 3 * 4, 3 + 3 * 4, 1 + 5 * 4, 1 + 9 * 4, 1 + 5 * 4, 1 + 9 * 4 },
        { 0, 0, 1, 1, 7, 10, 7, 10, 3 + 0 * 4, 3 + 0 * 4, 3 + 1 * 4, 3 + 1 * 4, 1 + 4 * 4, 1 + 8 * 4, 1 + 4 * 4, 1 + 8 * 4 },
        { 0, 2, 0, 2, 7, 10, 7, 10, 3 + 0 * 4, 3 + 2 * 4, 3 + 0 * 4, 3 + 2 * 4, 1 + 4 * 4, 1 + 8 * 4, 1 + 4 * 4, 1 + 8 * 4 }
    };

    VAR_5->topleft_partition = -1;

    VAR_9 = VAR_7 - (VAR_4->mb_stride << FUNC_2(VAR_5));




    VAR_8 = VAR_9 - 1;
    VAR_10 = VAR_9 + 1;
    VAR_11[VAR_1] = VAR_11[VAR_3] = VAR_7 - 1;
    VAR_5->left_block = VAR_12[0];
    if (FUNC_0(VAR_4)) {
        const int VAR_13 = FUNC_1(VAR_4->cur_pic.mb_type[VAR_7 - 1]);
        const int VAR_14 = FUNC_1(VAR_6);
        if (VAR_5->mb_y & 1) {
            if (VAR_13 != VAR_14) {
                VAR_11[VAR_1] = VAR_11[VAR_3] = VAR_7 - VAR_4->mb_stride - 1;
                if (VAR_14) {
                    VAR_11[VAR_1] += VAR_4->mb_stride;
                    VAR_5->left_block = VAR_12[3];
                } else {
                    VAR_8 += VAR_4->mb_stride;


                    VAR_5->topleft_partition = 0;
                    VAR_5->left_block = VAR_12[1];
                }
            }
        } else {
            if (VAR_14) {
                VAR_8 += VAR_4->mb_stride & (((VAR_4->cur_pic.mb_type[VAR_9 - 1] >> 7) & 1) - 1);
                VAR_10 += VAR_4->mb_stride & (((VAR_4->cur_pic.mb_type[VAR_9 + 1] >> 7) & 1) - 1);
                VAR_9 += VAR_4->mb_stride & (((VAR_4->cur_pic.mb_type[VAR_9] >> 7) & 1) - 1);
            }
            if (VAR_13 != VAR_14) {
                if (VAR_14) {
                    VAR_11[VAR_1] += VAR_4->mb_stride;
                    VAR_5->left_block = VAR_12[3];
                } else {
                    VAR_5->left_block = VAR_12[2];
                }
            }
        }
    }

    VAR_5->topleft_mb_xy = VAR_8;
    VAR_5->top_mb_xy = VAR_9;
    VAR_5->topright_mb_xy = VAR_10;
    VAR_5->left_mb_xy[VAR_3] = VAR_11[VAR_3];
    VAR_5->left_mb_xy[VAR_1] = VAR_11[VAR_1];


    VAR_5->topleft_type = VAR_4->cur_pic.mb_type[VAR_8];
    VAR_5->top_type = VAR_4->cur_pic.mb_type[VAR_9];
    VAR_5->topright_type = VAR_4->cur_pic.mb_type[VAR_10];
    VAR_5->left_type[VAR_3] = VAR_4->cur_pic.mb_type[VAR_11[VAR_3]];
    VAR_5->left_type[VAR_1] = VAR_4->cur_pic.mb_type[VAR_11[VAR_1]];

    if (VAR_0) {
        if (VAR_4->slice_table[VAR_8] != VAR_5->slice_num)
            VAR_5->topleft_type = 0;
        if (VAR_4->slice_table[VAR_9] != VAR_5->slice_num)
            VAR_5->top_type = 0;
        if (VAR_4->slice_table[VAR_11[VAR_3]] != VAR_5->slice_num)
            VAR_5->left_type[VAR_3] = VAR_5->left_type[VAR_1] = 0;
    } else {
        if (VAR_4->slice_table[VAR_8] != VAR_5->slice_num) {
            VAR_5->topleft_type = 0;
            if (VAR_4->slice_table[VAR_9] != VAR_5->slice_num)
                VAR_5->top_type = 0;
            if (VAR_4->slice_table[VAR_11[VAR_3]] != VAR_5->slice_num)
                VAR_5->left_type[VAR_3] = VAR_5->left_type[VAR_1] = 0;
        }
    }
    if (VAR_4->slice_table[VAR_10] != VAR_5->slice_num)
        VAR_5->topright_type = 0;
}
