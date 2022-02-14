
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_6__ {scalar_t__ huffman; scalar_t__ chroma_format; int mb_x; int width; int i_tex_bits; } ;
typedef TYPE_1__ MpegEncContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*,int *,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int *,int) ;

void FUNC_3(MpegEncContext *VAR_3, int16_t VAR_4[12][64])
{
    int VAR_5;
    if (VAR_3->huffman == VAR_2) {
        if (VAR_3->chroma_format == VAR_1) {
            FUNC_2(VAR_3, VAR_4[0], 0);
            FUNC_2(VAR_3, VAR_4[2], 2);
            FUNC_2(VAR_3, VAR_4[4], 4);
            FUNC_2(VAR_3, VAR_4[8], 8);
            FUNC_2(VAR_3, VAR_4[5], 5);
            FUNC_2(VAR_3, VAR_4[9], 9);

            if (16*VAR_3->mb_x+8 < VAR_3->width) {
                FUNC_2(VAR_3, VAR_4[1], 1);
                FUNC_2(VAR_3, VAR_4[3], 3);
                FUNC_2(VAR_3, VAR_4[6], 6);
                FUNC_2(VAR_3, VAR_4[10], 10);
                FUNC_2(VAR_3, VAR_4[7], 7);
                FUNC_2(VAR_3, VAR_4[11], 11);
            }
        } else {
            for(VAR_5=0;VAR_5<5;VAR_5++) {
                FUNC_2(VAR_3, VAR_4[VAR_5], VAR_5);
            }
            if (VAR_3->chroma_format == VAR_0) {
                FUNC_2(VAR_3, VAR_4[5], 5);
            } else {
                FUNC_2(VAR_3, VAR_4[6], 6);
                FUNC_2(VAR_3, VAR_4[5], 5);
                FUNC_2(VAR_3, VAR_4[7], 7);
            }
        }
    } else {
        if (VAR_3->chroma_format == VAR_1) {
            FUNC_0(VAR_3, VAR_4[0], 0);
            FUNC_0(VAR_3, VAR_4[2], 2);
            FUNC_0(VAR_3, VAR_4[4], 4);
            FUNC_0(VAR_3, VAR_4[8], 8);
            FUNC_0(VAR_3, VAR_4[5], 5);
            FUNC_0(VAR_3, VAR_4[9], 9);

            if (16*VAR_3->mb_x+8 < VAR_3->width) {
                FUNC_0(VAR_3, VAR_4[1], 1);
                FUNC_0(VAR_3, VAR_4[3], 3);
                FUNC_0(VAR_3, VAR_4[6], 6);
                FUNC_0(VAR_3, VAR_4[10], 10);
                FUNC_0(VAR_3, VAR_4[7], 7);
                FUNC_0(VAR_3, VAR_4[11], 11);
            }
        } else {
            for(VAR_5=0;VAR_5<5;VAR_5++) {
                FUNC_0(VAR_3, VAR_4[VAR_5], VAR_5);
            }
            if (VAR_3->chroma_format == VAR_0) {
                FUNC_0(VAR_3, VAR_4[5], 5);
            } else {
                FUNC_0(VAR_3, VAR_4[6], 6);
                FUNC_0(VAR_3, VAR_4[5], 5);
                FUNC_0(VAR_3, VAR_4[7], 7);
            }
        }

        VAR_3->i_tex_bits += FUNC_1(VAR_3);
    }
}
