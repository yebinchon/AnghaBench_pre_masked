
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int ** ref_index; } ;
struct TYPE_10__ {int mb_stride; TYPE_3__* slice_ctx; TYPE_2__ cur_pic; int avctx; } ;
struct TYPE_9__ {int mb_x; int mb_y; int mb_xy; int* ref_count; scalar_t__ mb_field_decoding_flag; scalar_t__ mb_mbaff; int *** mv_cache; int ** ref_cache; TYPE_1__** ref_list; int non_zero_count_cache; } ;
struct TYPE_7__ {int reference; int * data; } ;
typedef TYPE_3__ H264SliceContext ;
typedef TYPE_4__ H264Context ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_3 (int *,int,int,int,int,int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int,int) ;
 size_t* VAR_1 ;

__attribute__((used)) static void FUNC_6(void *VAR_2, int VAR_3, int VAR_4, int VAR_5,
                              int (*VAR_6)[2][4][2],
                              int VAR_7, int VAR_8, int VAR_9, int VAR_10)
{
    H264Context *VAR_11 = VAR_2;
    H264SliceContext *VAR_12 = &VAR_11->slice_ctx[0];

    VAR_12->mb_x = VAR_7;
    VAR_12->mb_y = VAR_8;
    VAR_12->mb_xy = VAR_7 + VAR_8 * VAR_11->mb_stride;
    FUNC_4(VAR_12->non_zero_count_cache, 0, sizeof(VAR_12->non_zero_count_cache));
    FUNC_0(VAR_3 >= 0);




    if (VAR_3 >= VAR_12->ref_count[0])
        VAR_3 = 0;
    if (!VAR_12->ref_list[0][VAR_3].data[0]) {
        FUNC_1(VAR_11->avctx, VAR_0, "Reference not available for error concealing\n");
        VAR_3 = 0;
    }
    if ((VAR_12->ref_list[0][VAR_3].reference&3) != 3) {
        FUNC_1(VAR_11->avctx, VAR_0, "Reference invalid\n");
        return;
    }
    FUNC_3(&VAR_11->cur_pic.ref_index[0][4 * VAR_12->mb_xy],
                   2, 2, 2, VAR_3, 1);
    FUNC_3(&VAR_12->ref_cache[0][VAR_1[0]], 4, 4, 8, VAR_3, 1);
    FUNC_3(VAR_12->mv_cache[0][VAR_1[0]], 4, 4, 8,
                   FUNC_5((*VAR_6)[0][0][0], (*VAR_6)[0][0][1]), 4);
    VAR_12->mb_mbaff =
    VAR_12->mb_field_decoding_flag = 0;
    FUNC_2(VAR_11, &VAR_11->slice_ctx[0]);
}
