
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int* linesize; int** data; } ;
struct TYPE_5__ {int* hsample; int* vsample; int huff_code_dc_chrominance; int huff_size_dc_chrominance; int huff_code_dc_luminance; int huff_size_dc_luminance; } ;
typedef int PutBitContext ;
typedef TYPE_1__ LJpegEncContext ;
typedef TYPE_2__ AVFrame ;


 int FUNC_0 (int,int,int,int,int) ;
 int FUNC_1 (int *,int,int ,int ) ;

__attribute__((used)) static inline void FUNC_2(LJpegEncContext *VAR_0, PutBitContext *VAR_1,
                                       const AVFrame *VAR_2, int VAR_3,
                                       int VAR_4, int VAR_5)
{
    int VAR_6;

    if (VAR_4 == 0 || VAR_5 == 0) {
        for (VAR_6 = 0; VAR_6 < 3; VAR_6++) {
            uint8_t *VAR_7;
            int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
            VAR_10 = VAR_0->hsample[VAR_6];
            VAR_11 = VAR_0->vsample[VAR_6];
            VAR_12 = VAR_2->linesize[VAR_6];

            for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9++) {
                for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++) {
                    int VAR_13;

                    VAR_7 = VAR_2->data[VAR_6] + (VAR_12 * (VAR_11 * VAR_5 + VAR_9)) + (VAR_10 * VAR_4 + VAR_8);
                    if (VAR_9 == 0 && VAR_5 == 0) {
                        if (VAR_8 == 0 && VAR_4 == 0)
                            VAR_13 = 128;
                        else
                            VAR_13 = VAR_7[-1];
                    } else {
                        if (VAR_8 == 0 && VAR_4 == 0) {
                            VAR_13 = VAR_7[-VAR_12];
                        } else {
                            FUNC_0(VAR_13, VAR_7[-VAR_12 - 1], VAR_7[-VAR_12],
                                    VAR_7[-1], VAR_3);
                        }
                    }

                    if (VAR_6 == 0)
                        FUNC_1(VAR_1, *VAR_7 - VAR_13, VAR_0->huff_size_dc_luminance, VAR_0->huff_code_dc_luminance);
                    else
                        FUNC_1(VAR_1, *VAR_7 - VAR_13, VAR_0->huff_size_dc_chrominance, VAR_0->huff_code_dc_chrominance);
                }
            }
        }
    } else {
        for (VAR_6 = 0; VAR_6 < 3; VAR_6++) {
            uint8_t *VAR_14;
            int VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
            VAR_17 = VAR_0->hsample[VAR_6];
            VAR_18 = VAR_0->vsample[VAR_6];
            VAR_19 = VAR_2->linesize[VAR_6];

            for (VAR_16 = 0; VAR_16 < VAR_18; VAR_16++) {
                for (VAR_15 = 0; VAR_15 < VAR_17; VAR_15++) {
                    int VAR_20;

                    VAR_14 = VAR_2->data[VAR_6] + (VAR_19 * (VAR_18 * VAR_5 + VAR_16)) + (VAR_17 * VAR_4 + VAR_15);
                    FUNC_0(VAR_20, VAR_14[-VAR_19 - 1], VAR_14[-VAR_19], VAR_14[-1], VAR_3);

                    if (VAR_6 == 0)
                        FUNC_1(VAR_1, *VAR_14 - VAR_20, VAR_0->huff_size_dc_luminance, VAR_0->huff_code_dc_luminance);
                    else
                        FUNC_1(VAR_1, *VAR_14 - VAR_20, VAR_0->huff_size_dc_chrominance, VAR_0->huff_code_dc_chrominance);
                }
            }
        }
    }
}
