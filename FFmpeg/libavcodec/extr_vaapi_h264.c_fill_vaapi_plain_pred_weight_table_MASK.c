
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* slice_ctx; } ;
struct TYPE_5__ {unsigned char* luma_weight_flag; unsigned char* chroma_weight_flag; short*** luma_weight; int luma_log2_weight_denom; short**** chroma_weight; int chroma_log2_weight_denom; } ;
struct TYPE_6__ {unsigned int* ref_count; TYPE_1__ pwt; } ;
typedef TYPE_2__ H264SliceContext ;
typedef TYPE_3__ H264Context ;



__attribute__((used)) static void FUNC_0(const H264Context *VAR_0,
                                               int VAR_1,
                                               unsigned char *VAR_2,
                                               short VAR_3[32],
                                               short VAR_4[32],
                                               unsigned char *VAR_5,
                                               short VAR_6[32][2],
                                               short VAR_7[32][2])
{
    const H264SliceContext *VAR_8 = &VAR_0->slice_ctx[0];
    unsigned int VAR_9, VAR_10;

    *VAR_2 = VAR_8->pwt.luma_weight_flag[VAR_1];
    *VAR_5 = VAR_8->pwt.chroma_weight_flag[VAR_1];

    for (VAR_9 = 0; VAR_9 < VAR_8->ref_count[VAR_1]; VAR_9++) {


        if (VAR_8->pwt.luma_weight_flag[VAR_1]) {
            VAR_3[VAR_9] = VAR_8->pwt.luma_weight[VAR_9][VAR_1][0];
            VAR_4[VAR_9] = VAR_8->pwt.luma_weight[VAR_9][VAR_1][1];
        } else {
            VAR_3[VAR_9] = 1 << VAR_8->pwt.luma_log2_weight_denom;
            VAR_4[VAR_9] = 0;
        }
        for (VAR_10 = 0; VAR_10 < 2; VAR_10++) {
            if (VAR_8->pwt.chroma_weight_flag[VAR_1]) {
                VAR_6[VAR_9][VAR_10] = VAR_8->pwt.chroma_weight[VAR_9][VAR_1][VAR_10][0];
                VAR_7[VAR_9][VAR_10] = VAR_8->pwt.chroma_weight[VAR_9][VAR_1][VAR_10][1];
            } else {
                VAR_6[VAR_9][VAR_10] = 1 << VAR_8->pwt.chroma_log2_weight_denom;
                VAR_7[VAR_9][VAR_10] = 0;
            }
        }
    }
}
