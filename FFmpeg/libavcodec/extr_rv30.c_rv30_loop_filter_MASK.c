
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {int mb_stride; int mb_width; int linesize; int uvlinesize; TYPE_2__* current_picture_ptr; } ;
struct TYPE_8__ {int* deblock_coefs; int* cbp_chroma; TYPE_4__ s; } ;
struct TYPE_7__ {int* mb_type; size_t* qscale_table; TYPE_1__* f; } ;
struct TYPE_6__ {int ** data; } ;
typedef TYPE_3__ RV34DecContext ;
typedef TYPE_4__ MpegEncContext ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int* VAR_0 ;
 int FUNC_2 (int *,int,int,int) ;

__attribute__((used)) static void FUNC_3(RV34DecContext *VAR_1, int VAR_2)
{
    MpegEncContext *VAR_3 = &VAR_1->s;
    int VAR_4, VAR_5;
    int VAR_6, VAR_7, VAR_8;
    uint8_t *VAR_9, *VAR_10;
    int VAR_11, VAR_12, VAR_13 = 0, VAR_14 = 0;

    VAR_4 = VAR_2 * VAR_3->mb_stride;
    for(VAR_5 = 0; VAR_5 < VAR_3->mb_width; VAR_5++, VAR_4++){
        int VAR_15 = VAR_3->current_picture_ptr->mb_type[VAR_4];
        if(FUNC_0(VAR_15) || FUNC_1(VAR_15))
            VAR_1->deblock_coefs[VAR_4] = 0xFFFF;
        if(FUNC_0(VAR_15))
            VAR_1->cbp_chroma[VAR_4] = 0xFF;
    }




    VAR_4 = VAR_2 * VAR_3->mb_stride;
    for(VAR_5 = 0; VAR_5 < VAR_3->mb_width; VAR_5++, VAR_4++){
        VAR_12 = VAR_0[VAR_3->current_picture_ptr->qscale_table[VAR_4]];
        if(VAR_5)
            VAR_13 = VAR_0[VAR_3->current_picture_ptr->qscale_table[VAR_4 - 1]];
        for(VAR_7 = 0; VAR_7 < 16; VAR_7 += 4){
            VAR_9 = VAR_3->current_picture_ptr->f->data[0] + VAR_5*16 + (VAR_2*16 + VAR_7) * VAR_3->linesize + 4 * !VAR_5;
            for(VAR_6 = !VAR_5; VAR_6 < 4; VAR_6++, VAR_9 += 4){
                int VAR_16 = VAR_6 + VAR_7;
                VAR_11 = 0;
                if(VAR_1->deblock_coefs[VAR_4] & (1 << VAR_16))
                    VAR_11 = VAR_12;
                else if(!VAR_6 && VAR_1->deblock_coefs[VAR_4 - 1] & (1 << (VAR_16 + 3)))
                    VAR_11 = VAR_13;
                else if( VAR_6 && VAR_1->deblock_coefs[VAR_4] & (1 << (VAR_16 - 1)))
                    VAR_11 = VAR_12;
                if(VAR_11)
                    FUNC_2(VAR_9, 1, VAR_3->linesize, VAR_11);
            }
        }
        for(VAR_8 = 0; VAR_8 < 2; VAR_8++){
            int VAR_17, VAR_18 = 0;
            VAR_17 = (VAR_1->cbp_chroma[VAR_4] >> (VAR_8*4)) & 0xF;
            if(VAR_5)
                VAR_18 = (VAR_1->cbp_chroma[VAR_4 - 1] >> (VAR_8*4)) & 0xF;
            for(VAR_7 = 0; VAR_7 < 8; VAR_7 += 4){
                VAR_10 = VAR_3->current_picture_ptr->f->data[VAR_8 + 1] + VAR_5*8 + (VAR_2*8 + VAR_7) * VAR_3->uvlinesize + 4 * !VAR_5;
                for(VAR_6 = !VAR_5; VAR_6 < 2; VAR_6++, VAR_10 += 4){
                    int VAR_19 = VAR_6 + (VAR_7 >> 1);
                    VAR_11 = 0;
                    if (VAR_17 & (1 << VAR_19))
                        VAR_11 = VAR_12;
                    else if(!VAR_6 && VAR_18 & (1 << (VAR_19 + 1)))
                        VAR_11 = VAR_13;
                    else if( VAR_6 && VAR_17 & (1 << (VAR_19 - 1)))
                        VAR_11 = VAR_12;
                    if(VAR_11)
                        FUNC_2(VAR_10, 1, VAR_3->uvlinesize, VAR_11);
                }
            }
        }
    }
    VAR_4 = VAR_2 * VAR_3->mb_stride;
    for(VAR_5 = 0; VAR_5 < VAR_3->mb_width; VAR_5++, VAR_4++){
        VAR_12 = VAR_0[VAR_3->current_picture_ptr->qscale_table[VAR_4]];
        if(VAR_2)
            VAR_14 = VAR_0[VAR_3->current_picture_ptr->qscale_table[VAR_4 - VAR_3->mb_stride]];
        for(VAR_7 = 4*!VAR_2; VAR_7 < 16; VAR_7 += 4){
            VAR_9 = VAR_3->current_picture_ptr->f->data[0] + VAR_5*16 + (VAR_2*16 + VAR_7) * VAR_3->linesize;
            for(VAR_6 = 0; VAR_6 < 4; VAR_6++, VAR_9 += 4){
                int VAR_20 = VAR_6 + VAR_7;
                VAR_11 = 0;
                if(VAR_1->deblock_coefs[VAR_4] & (1 << VAR_20))
                    VAR_11 = VAR_12;
                else if(!VAR_7 && VAR_1->deblock_coefs[VAR_4 - VAR_3->mb_stride] & (1 << (VAR_20 + 12)))
                    VAR_11 = VAR_14;
                else if( VAR_7 && VAR_1->deblock_coefs[VAR_4] & (1 << (VAR_20 - 4)))
                    VAR_11 = VAR_12;
                if(VAR_11)
                    FUNC_2(VAR_9, VAR_3->linesize, 1, VAR_11);
            }
        }
        for(VAR_8 = 0; VAR_8 < 2; VAR_8++){
            int VAR_21, VAR_22 = 0;
            VAR_21 = (VAR_1->cbp_chroma[VAR_4] >> (VAR_8*4)) & 0xF;
            if(VAR_2)
                VAR_22 = (VAR_1->cbp_chroma[VAR_4 - VAR_3->mb_stride] >> (VAR_8*4)) & 0xF;
            for(VAR_7 = 4*!VAR_2; VAR_7 < 8; VAR_7 += 4){
                VAR_10 = VAR_3->current_picture_ptr->f->data[VAR_8+1] + VAR_5*8 + (VAR_2*8 + VAR_7) * VAR_3->uvlinesize;
                for(VAR_6 = 0; VAR_6 < 2; VAR_6++, VAR_10 += 4){
                    int VAR_23 = VAR_6 + (VAR_7 >> 1);
                    VAR_11 = 0;
                    if (VAR_1->cbp_chroma[VAR_4] & (1 << VAR_23))
                        VAR_11 = VAR_12;
                    else if(!VAR_7 && VAR_22 & (1 << (VAR_23 + 2)))
                        VAR_11 = VAR_14;
                    else if( VAR_7 && VAR_21 & (1 << (VAR_23 - 2)))
                        VAR_11 = VAR_12;
                    if(VAR_11)
                        FUNC_2(VAR_10, VAR_3->uvlinesize, 1, VAR_11);
                }
            }
        }
    }
}
