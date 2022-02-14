
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int* mb_type; } ;
struct TYPE_8__ {int mb_stride; scalar_t__* slice_table; TYPE_1__ cur_pic; } ;
struct TYPE_7__ {int mb_xy; int mb_field_decoding_flag; scalar_t__ slice_num; int * cabac_state; int cabac; int mb_x; } ;
typedef TYPE_2__ H264SliceContext ;
typedef TYPE_3__ H264Context ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static int FUNC_1(const H264Context *VAR_0, H264SliceContext *VAR_1)
{
    const int VAR_2 = VAR_1->mb_xy - 2*VAR_0->mb_stride;

    unsigned long VAR_3 = 0;

    VAR_3 += VAR_1->mb_field_decoding_flag & !!VAR_1->mb_x;
    VAR_3 += (VAR_0->cur_pic.mb_type[VAR_2] >> 7) & (VAR_0->slice_table[VAR_2] == VAR_1->slice_num);

    return FUNC_0( &VAR_1->cabac, &(VAR_1->cabac_state+70)[VAR_3] );
}
