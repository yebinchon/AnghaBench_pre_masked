
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int qpel_mc_func ;
typedef int h264_weight_func ;
typedef int h264_chroma_mc_func ;
typedef int h264_biweight_func ;
struct TYPE_6__ {int use_weight; int*** implicit_weight; } ;
struct TYPE_7__ {size_t** ref_cache; int mb_y; TYPE_1__ pwt; } ;
typedef TYPE_2__ H264SliceContext ;
typedef int H264Context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*,TYPE_2__*,int,int,int,int,int *,int *,int *,int,int,int const*,int ,int const*,int ,int,int,int ,int ) ;
 int FUNC_1 (int const*,TYPE_2__*,int,int,int,int,int *,int *,int *,int,int,int const*,int ,int const,int const,int const,int const,int,int,int ,int ) ;
 size_t* VAR_2 ;

__attribute__((used)) static void FUNC_2(const H264Context *VAR_3, H264SliceContext *VAR_4,
                    int VAR_5, int VAR_6,
                    int VAR_7, int VAR_8,
                    uint8_t *VAR_9, uint8_t *VAR_10,
                    uint8_t *VAR_11,
                    int VAR_12, int VAR_13,
                    const qpel_mc_func *VAR_14,
                    h264_chroma_mc_func VAR_15,
                    const qpel_mc_func *VAR_16,
                    h264_chroma_mc_func VAR_17,
                    const h264_weight_func *VAR_18,
                    const h264_biweight_func *VAR_19,
                    int VAR_20, int VAR_21)
{
    if ((VAR_4->pwt.use_weight == 2 && VAR_20 && VAR_21 &&
         (VAR_4->pwt.implicit_weight[VAR_4->ref_cache[0][VAR_2[VAR_5]]][VAR_4->ref_cache[1][VAR_2[VAR_5]]][VAR_4->mb_y & 1] != 32)) ||
        VAR_4->pwt.use_weight == 1)
        FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11,
                         VAR_12, VAR_13, VAR_14, VAR_15,
                         VAR_18[0], VAR_18[1], VAR_19[0],
                         VAR_19[1], VAR_20, VAR_21, VAR_1, VAR_0);
    else
        FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11,
                    VAR_12, VAR_13, VAR_14, VAR_15, VAR_16,
                    VAR_17, VAR_20, VAR_21, VAR_1, VAR_0);
}
