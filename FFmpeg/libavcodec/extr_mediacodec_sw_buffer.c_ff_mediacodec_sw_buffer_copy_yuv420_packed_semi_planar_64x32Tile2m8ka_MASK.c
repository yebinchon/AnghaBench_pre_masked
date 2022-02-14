
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {size_t width; size_t* linesize; size_t height; scalar_t__* data; } ;
typedef int MediaCodecDecContext ;
typedef int FFAMediaCodecBufferInfo ;
typedef TYPE_1__ AVFrame ;
typedef int AVCodecContext ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t const VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (scalar_t__,int const*,size_t) ;
 size_t const FUNC_1 (size_t,size_t,size_t const,size_t const) ;

void FUNC_2(AVCodecContext *VAR_4,
                                                                           MediaCodecDecContext *VAR_5,
                                                                           uint8_t *VAR_6,
                                                                           size_t VAR_7,
                                                                           FFAMediaCodecBufferInfo *VAR_8,
                                                                           AVFrame *VAR_9)
{
    size_t VAR_10 = VAR_9->width;
    size_t VAR_11 = VAR_9->linesize[0];
    size_t VAR_12 = VAR_9->height;

    const size_t VAR_13 = (VAR_10 - 1) / VAR_3 + 1;
    const size_t VAR_14 = (VAR_13 + 1) & ~1;
    const size_t VAR_15 = (VAR_12 - 1) / VAR_1 + 1;
    const size_t VAR_16 = (VAR_12 / 2 - 1) / VAR_1 + 1;

    size_t VAR_17 = VAR_14 * VAR_15 * VAR_2;
    if((VAR_17 % VAR_0) != 0)
        VAR_17 = (((VAR_17 - 1) / VAR_0) + 1) * VAR_0;

    for(size_t VAR_18 = 0; VAR_18 < VAR_15; VAR_18++) {
        size_t VAR_19 = VAR_10;
        for(size_t VAR_20 = 0; VAR_20 < VAR_13; VAR_20++) {
            size_t VAR_21 = VAR_19;
            size_t VAR_22 = VAR_12;

            size_t VAR_23 = VAR_18 * VAR_1 * VAR_11 + VAR_20 * VAR_3;


            size_t VAR_24 = (VAR_23 / VAR_11) * VAR_11 / 2 + (VAR_23 % VAR_11);


            const uint8_t *VAR_25 = VAR_6
                + FUNC_1(VAR_20, VAR_18,VAR_14, VAR_15) * VAR_2;


            const uint8_t *VAR_26 = VAR_6 + VAR_17
                + FUNC_1(VAR_20, VAR_18/2, VAR_14, VAR_16) * VAR_2;
            if (VAR_18 & 1)
                VAR_26 += VAR_2/2;


            if (VAR_21 > VAR_3)
                VAR_21 = VAR_3;


            if (VAR_22 > VAR_1)
                VAR_22 = VAR_1;

            VAR_22 /= 2;
            while (VAR_22--) {
                FUNC_0(VAR_9->data[0] + VAR_23, VAR_25, VAR_21);
                VAR_25 += VAR_3;
                VAR_23 += VAR_11;

                FUNC_0(VAR_9->data[0] + VAR_23, VAR_25, VAR_21);
                VAR_25 += VAR_3;
                VAR_23 += VAR_11;

                FUNC_0(VAR_9->data[1] + VAR_24, VAR_26, VAR_21);
                VAR_26 += VAR_3;
                VAR_24 += VAR_11;
            }
            VAR_19 -= VAR_3;
        }
        VAR_12 -= VAR_1;
    }
}
