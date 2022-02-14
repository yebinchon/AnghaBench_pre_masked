
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int height; int width; } ;
struct TYPE_6__ {unsigned char** data; int* linesize; } ;
typedef int GetByteContext ;
typedef TYPE_1__ AVFrame ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,char*,...) ;
 unsigned char FUNC_1 (int *) ;
 char FUNC_2 (int *) ;
 unsigned char FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static int FUNC_5(AVCodecContext *VAR_2, AVFrame *VAR_3,
                             GetByteContext *VAR_4)
{
    unsigned char VAR_5;
    unsigned char VAR_6, VAR_7;
    unsigned char VAR_8;
    int VAR_9 = 0;
    int VAR_10 = VAR_2->height - 1;
    int VAR_11;

    while (VAR_10 >= 0 && VAR_9 <= VAR_2->width) {
        if (FUNC_2(VAR_4) <= 0) {
            FUNC_0(VAR_2, VAR_1,
                   "MS RLE: bytestream overrun, %dx%d left\n",
                   VAR_2->width - VAR_9, VAR_10);
            return VAR_0;
        }
        VAR_5 = VAR_8 = FUNC_3(VAR_4);
        if (VAR_5 == 0) {

            VAR_8 = FUNC_1(VAR_4);
            if (VAR_8 == 0) {

                VAR_10--;
                VAR_9 = 0;
            } else if (VAR_8 == 1) {

                return 0;
            } else if (VAR_8 == 2) {

                VAR_8 = FUNC_1(VAR_4);
                VAR_9 += VAR_8;
                VAR_8 = FUNC_1(VAR_4);
                VAR_10 -= VAR_8;
            } else {

                VAR_7 = VAR_8 & 1;
                VAR_5 = (VAR_8 + 1) / 2;
                VAR_6 = VAR_5 & 0x01;
                if (VAR_9 + 2*VAR_5 - VAR_7 > VAR_2->width ||
                    FUNC_2(VAR_4) < VAR_5) {
                    FUNC_0(VAR_2, VAR_1,
                           "MS RLE: frame/stream ptr just went out of bounds (copy)\n");
                    return VAR_0;
                }

                for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
                    if (VAR_9 >= VAR_2->width)
                        break;
                    VAR_8 = FUNC_3(VAR_4);
                    VAR_3->data[0][VAR_10 * VAR_3->linesize[0] + VAR_9] = VAR_8 >> 4;
                    VAR_9++;
                    if (VAR_11 + 1 == VAR_5 && VAR_7)
                        break;
                    if (VAR_9 >= VAR_2->width)
                        break;
                    VAR_3->data[0][VAR_10 * VAR_3->linesize[0] + VAR_9] = VAR_8 & 0x0F;
                    VAR_9++;
                }


                if (VAR_6)
                    FUNC_4(VAR_4, 1);
            }
        } else {

            if (VAR_9 + VAR_5 > VAR_2->width + 1) {
                FUNC_0(VAR_2, VAR_1,
                       "MS RLE: frame ptr just went out of bounds (run) %d %d %d\n", VAR_9, VAR_5, VAR_2->width);
                return VAR_0;
            }
            VAR_8 = FUNC_1(VAR_4);
            for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
                if (VAR_9 >= VAR_2->width)
                    break;
                if ((VAR_11 & 1) == 0)
                    VAR_3->data[0][VAR_10 * VAR_3->linesize[0] + VAR_9] = VAR_8 >> 4;
                else
                    VAR_3->data[0][VAR_10 * VAR_3->linesize[0] + VAR_9] = VAR_8 & 0x0F;
                VAR_9++;
            }
        }
    }


    if (FUNC_2(VAR_4)) {
        FUNC_0(VAR_2, VAR_1,
               "MS RLE: ended frame decode with %d bytes left over\n",
               FUNC_2(VAR_4));
        return VAR_0;
    }

    return 0;
}
