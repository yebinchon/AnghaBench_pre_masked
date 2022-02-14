
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_11__ {TYPE_2__* pps; } ;
struct TYPE_9__ {int h264_loop_filter_strength; } ;
struct TYPE_12__ {int pixel_shift; TYPE_3__ ps; TYPE_1__ h264dsp; } ;
struct TYPE_10__ {scalar_t__ chroma_qp_diff; } ;
typedef int H264SliceContext ;
typedef TYPE_4__ H264Context ;


 int FUNC_0 (TYPE_4__ const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_4__ const*,int *,int,int,int *,int *,int *,unsigned int,unsigned int) ;
 int FUNC_3 (TYPE_4__ const*,int *,int,int,int *,int *,int *,unsigned int,unsigned int,int) ;

void FUNC_4(const H264Context *VAR_0, H264SliceContext *VAR_1,
                            int VAR_2, int VAR_3, uint8_t *VAR_4,
                            uint8_t *VAR_5, uint8_t *VAR_6,
                            unsigned int VAR_7, unsigned int VAR_8)
{
    FUNC_1(!FUNC_0(VAR_0));
    if(!VAR_0->h264dsp.h264_loop_filter_strength || VAR_0->ps.pps->chroma_qp_diff) {
        FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
        return;
    }




    if(VAR_0->pixel_shift){
        FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, 1);
    }else{
        FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, 0);
    }

}
