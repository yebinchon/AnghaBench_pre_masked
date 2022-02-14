
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int (* h263_h_loop_filter ) (int *,int const,int const) ;int (* h263_v_loop_filter ) (int *,int const,int const) ;} ;
struct TYPE_5__ {int* qscale_table; int * mb_type; } ;
struct TYPE_7__ {int linesize; int uvlinesize; int mb_y; int mb_stride; int mb_x; int qscale; int* chroma_qscale_table; int mb_height; TYPE_2__ h263dsp; TYPE_1__ current_picture; int ** dest; } ;
typedef TYPE_3__ MpegEncContext ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int const,int) ;
 int FUNC_2 (int *,int const,int const) ;
 int FUNC_3 (int *,int const,int) ;
 int FUNC_4 (int *,int const,int) ;
 int FUNC_5 (int *,int const,int) ;
 int FUNC_6 (int *,int const,int) ;
 int FUNC_7 (int *,int const,int const) ;
 int FUNC_8 (int *,int const,int const) ;
 int FUNC_9 (int *,int const,int) ;
 int FUNC_10 (int *,int const,int) ;
 int FUNC_11 (int *,int const,int) ;
 int FUNC_12 (int *,int const,int const) ;
 int FUNC_13 (int *,int const,int const) ;
 int FUNC_14 (int *,int const,int) ;
 int FUNC_15 (int *,int const,int) ;
 int FUNC_16 (int *,int const,int const) ;

void FUNC_17(MpegEncContext * VAR_0){
    int VAR_1;
    const int VAR_2 = VAR_0->linesize;
    const int VAR_3= VAR_0->uvlinesize;
    const int VAR_4 = VAR_0->mb_y * VAR_0->mb_stride + VAR_0->mb_x;
    uint8_t *VAR_5 = VAR_0->dest[0];
    uint8_t *VAR_6= VAR_0->dest[1];
    uint8_t *VAR_7= VAR_0->dest[2];





    if (!FUNC_0(VAR_0->current_picture.mb_type[VAR_4])) {
        VAR_1= VAR_0->qscale;
        VAR_0->h263dsp.h263_v_loop_filter(VAR_5 + 8 * VAR_2, VAR_2, VAR_1);
        VAR_0->h263dsp.h263_v_loop_filter(VAR_5 + 8 * VAR_2 + 8, VAR_2, VAR_1);
    }else
        VAR_1= 0;

    if(VAR_0->mb_y){
        int VAR_8, VAR_9, VAR_10;

        if (FUNC_0(VAR_0->current_picture.mb_type[VAR_4 - VAR_0->mb_stride]))
            VAR_9=0;
        else
            VAR_9 = VAR_0->current_picture.qscale_table[VAR_4 - VAR_0->mb_stride];

        if(VAR_1)
            VAR_10= VAR_1;
        else
            VAR_10= VAR_9;

        if(VAR_10){
            const int VAR_11= VAR_0->chroma_qscale_table[VAR_10];
            VAR_0->h263dsp.h263_v_loop_filter(VAR_5, VAR_2, VAR_10);
            VAR_0->h263dsp.h263_v_loop_filter(VAR_5 + 8, VAR_2, VAR_10);

            VAR_0->h263dsp.h263_v_loop_filter(VAR_6, VAR_3, VAR_11);
            VAR_0->h263dsp.h263_v_loop_filter(VAR_7, VAR_3, VAR_11);
        }

        if(VAR_9)
            VAR_0->h263dsp.h263_h_loop_filter(VAR_5 - 8 * VAR_2 + 8, VAR_2, VAR_9);

        if(VAR_0->mb_x){
            if (VAR_9 || FUNC_0(VAR_0->current_picture.mb_type[VAR_4 - 1 - VAR_0->mb_stride]))
                VAR_8= VAR_9;
            else
                VAR_8 = VAR_0->current_picture.qscale_table[VAR_4 - 1 - VAR_0->mb_stride];

            if(VAR_8){
                const int VAR_12= VAR_0->chroma_qscale_table[VAR_8];
                VAR_0->h263dsp.h263_h_loop_filter(VAR_5 - 8 * VAR_2, VAR_2, VAR_8);
                VAR_0->h263dsp.h263_h_loop_filter(VAR_6 - 8 * VAR_3, VAR_3, VAR_12);
                VAR_0->h263dsp.h263_h_loop_filter(VAR_7 - 8 * VAR_3, VAR_3, VAR_12);
            }
        }
    }

    if(VAR_1){
        VAR_0->h263dsp.h263_h_loop_filter(VAR_5 + 8, VAR_2, VAR_1);
        if(VAR_0->mb_y + 1 == VAR_0->mb_height)
            VAR_0->h263dsp.h263_h_loop_filter(VAR_5 + 8 * VAR_2 + 8, VAR_2, VAR_1);
    }

    if(VAR_0->mb_x){
        int VAR_13;
        if (VAR_1 || FUNC_0(VAR_0->current_picture.mb_type[VAR_4 - 1]))
            VAR_13= VAR_1;
        else
            VAR_13 = VAR_0->current_picture.qscale_table[VAR_4 - 1];

        if(VAR_13){
            VAR_0->h263dsp.h263_h_loop_filter(VAR_5, VAR_2, VAR_13);
            if(VAR_0->mb_y + 1 == VAR_0->mb_height){
                const int VAR_14= VAR_0->chroma_qscale_table[VAR_13];
                VAR_0->h263dsp.h263_h_loop_filter(VAR_5 + 8 * VAR_2, VAR_2, VAR_13);
                VAR_0->h263dsp.h263_h_loop_filter(VAR_6, VAR_3, VAR_14);
                VAR_0->h263dsp.h263_h_loop_filter(VAR_7, VAR_3, VAR_14);
            }
        }
    }
}
