
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_6__ {int height; } ;
struct TYPE_5__ {int* linesize; int width; int height; scalar_t__** data; } ;
typedef int GetByteContext ;
typedef TYPE_1__ AVFrame ;
typedef TYPE_2__ AVCodecContext ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 unsigned int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_0, GetByteContext *VAR_1, AVFrame *VAR_2)
{
    uint8_t *VAR_3 = VAR_2->data[0] + (VAR_0->height - 1) * VAR_2->linesize[0];
    int VAR_4, VAR_5 = 0, VAR_6 = 0;
    uint8_t VAR_7[4];
    unsigned VAR_8;

    while (FUNC_1(VAR_1) > 0) {
        VAR_8 = FUNC_2(VAR_1);
        VAR_4 = VAR_8 & 0xFFFFFF;

        if (VAR_8 >> 24 == 0x77) {
            FUNC_3(VAR_1, 4);

            for (int VAR_9 = 0; VAR_9 < 4; VAR_9++)
                VAR_7[VAR_9] = FUNC_0(VAR_1);

            while (VAR_4 > 0) {
                VAR_4--;

                for (int VAR_10 = 0; VAR_10 < 4; VAR_10++) {
                    VAR_3[VAR_6] += VAR_7[VAR_10];
                    VAR_6++;
                    if (VAR_6 >= VAR_2->width * 3) {
                        VAR_6 = 0;
                        VAR_5++;
                        VAR_3 -= VAR_2->linesize[0];
                        if (VAR_5 >= VAR_2->height)
                            return 0;
                    }
                }
            }
        } else {
            for (int VAR_11 = 0; VAR_11 < 4; VAR_11++)
                VAR_7[VAR_11] = FUNC_0(VAR_1);

            for (int VAR_12 = 0; VAR_12 < 4; VAR_12++) {
                VAR_3[VAR_6] += VAR_7[VAR_12];
                VAR_6++;
                if (VAR_6 >= VAR_2->width * 3) {
                    VAR_6 = 0;
                    VAR_5++;
                    VAR_3 -= VAR_2->linesize[0];
                    if (VAR_5 >= VAR_2->height)
                        return 0;
                }
            }
        }
    }

    return 0;
}
