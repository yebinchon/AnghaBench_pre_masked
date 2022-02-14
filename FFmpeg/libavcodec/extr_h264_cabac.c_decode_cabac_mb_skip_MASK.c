
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int * mb_type; } ;
struct TYPE_11__ {int mb_stride; scalar_t__* slice_table; TYPE_1__ cur_pic; } ;
struct TYPE_10__ {scalar_t__ slice_num; int mb_xy; scalar_t__ slice_type_nos; int * cabac_state; int cabac; } ;
typedef TYPE_2__ H264SliceContext ;
typedef TYPE_3__ H264Context ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__ const*) ;
 scalar_t__ FUNC_1 (TYPE_3__ const*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static int FUNC_6(const H264Context *VAR_1, H264SliceContext *VAR_2,
                                int VAR_3, int VAR_4)
{
    int VAR_5, VAR_6;
    int VAR_7 = 0;

    if (FUNC_1(VAR_1)) {
        int VAR_8 = VAR_3 + (VAR_4&~1)*VAR_1->mb_stride;
        VAR_5 = VAR_8 - 1;
        if( (VAR_4&1)
            && VAR_1->slice_table[VAR_5] == VAR_2->slice_num
            && FUNC_4(VAR_2) == !!FUNC_2( VAR_1->cur_pic.mb_type[VAR_5] ) )
            VAR_5 += VAR_1->mb_stride;
        if (FUNC_4(VAR_2)) {
            VAR_6 = VAR_8 - VAR_1->mb_stride;
            if( !(VAR_4&1)
                && VAR_1->slice_table[VAR_6] == VAR_2->slice_num
                && FUNC_2( VAR_1->cur_pic.mb_type[VAR_6] ) )
                VAR_6 -= VAR_1->mb_stride;
        }else
            VAR_6 = VAR_3 + (VAR_4-1)*VAR_1->mb_stride;
    }else{
        int VAR_9 = VAR_2->mb_xy;
        VAR_5 = VAR_9 - 1;
        VAR_6 = VAR_9 - (VAR_1->mb_stride << FUNC_0(VAR_1));
    }

    if( VAR_1->slice_table[VAR_5] == VAR_2->slice_num && !FUNC_3(VAR_1->cur_pic.mb_type[VAR_5] ))
        VAR_7++;
    if( VAR_1->slice_table[VAR_6] == VAR_2->slice_num && !FUNC_3(VAR_1->cur_pic.mb_type[VAR_6] ))
        VAR_7++;

    if (VAR_2->slice_type_nos == VAR_0)
        VAR_7 += 13;
    return FUNC_5( &VAR_2->cabac, &VAR_2->cabac_state[11+VAR_7] );
}
