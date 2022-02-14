
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef unsigned int ptrdiff_t ;
struct TYPE_7__ {scalar_t__ blend_op; unsigned int width; unsigned int height; unsigned int x_offset; unsigned int y_offset; } ;
struct TYPE_6__ {unsigned int width; unsigned int height; unsigned int** data; unsigned int* linesize; int format; } ;
typedef TYPE_1__ AVFrame ;
typedef TYPE_2__ APNGFctlChunk ;


 scalar_t__ VAR_0 ;





 int FUNC_0 (unsigned int const*,unsigned int*,unsigned int) ;
 int FUNC_1 (unsigned int*,unsigned int*,unsigned int) ;
 int FUNC_2 (unsigned int*,unsigned int*,unsigned int) ;
 int FUNC_3 (unsigned int*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_4(AVFrame *VAR_1, const AVFrame *VAR_2,
                                  APNGFctlChunk *VAR_3, uint8_t VAR_4)
{



    unsigned int VAR_5, VAR_6;
    unsigned int VAR_7 = VAR_2->width;
    unsigned int VAR_8 = 0;
    unsigned int VAR_9 = VAR_2->height;
    unsigned int VAR_10 = 0;
    const uint8_t *VAR_11 = VAR_2->data[0];
    uint8_t *VAR_12 = VAR_1->data[0];
    ptrdiff_t VAR_13 = VAR_2->linesize[0];
    ptrdiff_t VAR_14 = VAR_1->linesize[0];


    for (VAR_6 = 0; VAR_6 < VAR_2->height; ++VAR_6) {
        for (VAR_5 = 0; VAR_5 < VAR_2->width; ++VAR_5) {
            if (!FUNC_0(VAR_11 + VAR_4 * VAR_5, VAR_12 + VAR_4 * VAR_5, VAR_4))
                continue;

            if (VAR_5 < VAR_7)
                VAR_7 = VAR_5;
            if (VAR_5 >= VAR_8)
                VAR_8 = VAR_5 + 1;
            if (VAR_6 < VAR_9)
                VAR_9 = VAR_6;
            if (VAR_6 >= VAR_10)
                VAR_10 = VAR_6 + 1;
        }

        VAR_11 += VAR_13;
        VAR_12 += VAR_14;
    }

    if (VAR_7 == VAR_2->width && VAR_8 == 0) {


        VAR_7 = VAR_9 = 0;
        VAR_8 = VAR_10 = 1;
    }


    if (VAR_3->blend_op == VAR_0) {
        VAR_12 = VAR_1->data[0];
        for (VAR_6 = VAR_9; VAR_6 < VAR_10; ++VAR_6) {
            FUNC_1(VAR_12,
                   VAR_2->data[0] + VAR_13 * VAR_6 + VAR_4 * VAR_7,
                   VAR_4 * (VAR_8 - VAR_7));
            VAR_12 += VAR_14;
        }
    } else {
        size_t VAR_15;
        uint32_t *VAR_16;

        switch (VAR_2->format) {
        case 129:
        case 128:
        case 130:
        case 132:
            break;

        case 131:
            VAR_16 = (uint32_t*)VAR_2->data[1];
            for (VAR_15 = 0; VAR_15 < 256; ++VAR_15)
                if (VAR_16[VAR_15] >> 24 == 0)
                    break;
            break;

        default:

            return -1;
        }

        for (VAR_6 = VAR_9; VAR_6 < VAR_10; ++VAR_6) {
            uint8_t *VAR_17 = VAR_2->data[0] + VAR_13 * VAR_6 + VAR_4 * VAR_7;
            uint8_t *VAR_18 = VAR_1->data[0] + VAR_14 * VAR_6 + VAR_4 * VAR_7;
            VAR_12 = VAR_1->data[0] + VAR_14 * (VAR_6 - VAR_9);
            for (VAR_5 = VAR_7; VAR_5 < VAR_8; ++VAR_5, VAR_17 += VAR_4, VAR_18 += VAR_4, VAR_12 += VAR_4) {
                if (!FUNC_0(VAR_17, VAR_18, VAR_4)) {
                    if (VAR_2->format == 131) {
                        if (VAR_15 == 256) {

                            return -1;
                        }

                        *VAR_12 = VAR_15;
                    } else {
                        FUNC_3(VAR_12, 0, VAR_4);
                    }
                    continue;
                }





                switch (VAR_2->format) {
                case 129:
                    if (((uint16_t*)VAR_17)[3] == 0xffff ||
                        ((uint16_t*)VAR_18)[3] == 0)
                        break;
                    return -1;

                case 128:
                    if (((uint16_t*)VAR_17)[1] == 0xffff ||
                        ((uint16_t*)VAR_18)[1] == 0)
                        break;
                    return -1;

                case 130:
                    if (VAR_17[3] == 0xff || VAR_18[3] == 0)
                        break;
                    return -1;

                case 132:
                    if (VAR_17[1] == 0xff || VAR_18[1] == 0)
                        break;
                    return -1;

                case 131:
                    if (VAR_16[*VAR_17] >> 24 == 0xff ||
                        VAR_16[*VAR_18] >> 24 == 0)
                        break;
                    return -1;
                }

                FUNC_2(VAR_12, VAR_17, VAR_4);
            }
        }
    }

    VAR_1->width = VAR_8 - VAR_7;
    VAR_1->height = VAR_10 - VAR_9;
    VAR_3->width = VAR_1->width;
    VAR_3->height = VAR_1->height;
    VAR_3->x_offset = VAR_7;
    VAR_3->y_offset = VAR_9;

    return 0;
}
