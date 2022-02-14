
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int width; int* linesize; int** data; } ;
typedef int GetBitContext ;
typedef TYPE_1__ AVFrame ;


 int FUNC_0 (int *,int*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(GetBitContext *VAR_0, AVFrame *VAR_1,
                                int VAR_2, int VAR_3,
                                uint8_t VAR_4[3][8])
{
    int VAR_5, VAR_6, VAR_7, VAR_8;
    int VAR_9 = VAR_1->width;

    int VAR_10 = VAR_1->linesize[0];
    int VAR_11 = VAR_1->linesize[1];
    int VAR_12 = VAR_1->linesize[2];

    uint8_t *VAR_13 = VAR_1->data[0] + VAR_10 * VAR_2;
    uint8_t *VAR_14 = VAR_1->data[1] + (VAR_11 >> 2) * VAR_2;
    uint8_t *VAR_15 = VAR_1->data[2] + (VAR_12 >> 2) * VAR_2;

    for (VAR_6 = 0; VAR_6 < VAR_3 - 3 && FUNC_1(VAR_0) > 9 * VAR_9; VAR_6 += 4) {
        for (VAR_5 = 0; VAR_5 < VAR_9; VAR_5 += 4) {
            for (VAR_8 = 0; VAR_8 < 4; VAR_8++)
                for (VAR_7 = 0; VAR_7 < 4; VAR_7++)
                    VAR_13[VAR_5 + VAR_7 + VAR_8 * VAR_10] = FUNC_0(VAR_0, VAR_4[0]);
            VAR_14[VAR_5 >> 2] = FUNC_0(VAR_0, VAR_4[1]) ^ 0x80;
            VAR_15[VAR_5 >> 2] = FUNC_0(VAR_0, VAR_4[2]) ^ 0x80;
        }

        VAR_13 += VAR_10 << 2;
        VAR_14 += VAR_11;
        VAR_15 += VAR_12;
    }

    return VAR_6;
}
