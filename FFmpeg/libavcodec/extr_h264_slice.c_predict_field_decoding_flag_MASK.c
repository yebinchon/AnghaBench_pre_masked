
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int* mb_type; } ;
struct TYPE_8__ {int mb_stride; scalar_t__* slice_table; TYPE_1__ cur_pic; } ;
struct TYPE_7__ {int mb_x; int mb_y; scalar_t__ slice_num; int mb_mbaff; int mb_field_decoding_flag; } ;
typedef TYPE_2__ H264SliceContext ;
typedef TYPE_3__ H264Context ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(const H264Context *VAR_0, H264SliceContext *VAR_1)
{
    const int VAR_2 = VAR_1->mb_x + VAR_1->mb_y * VAR_0->mb_stride;
    int VAR_3 = (VAR_0->slice_table[VAR_2 - 1] == VAR_1->slice_num) ?
                      VAR_0->cur_pic.mb_type[VAR_2 - 1] :
                      (VAR_0->slice_table[VAR_2 - VAR_0->mb_stride] == VAR_1->slice_num) ?
                      VAR_0->cur_pic.mb_type[VAR_2 - VAR_0->mb_stride] : 0;
    VAR_1->mb_mbaff = VAR_1->mb_field_decoding_flag = FUNC_0(VAR_3) ? 1 : 0;
}
