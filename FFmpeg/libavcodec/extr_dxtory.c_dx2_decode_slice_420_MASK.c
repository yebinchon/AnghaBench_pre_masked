
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
    int VAR_5, VAR_6;

    int VAR_7 = VAR_1->width;

    int VAR_8 = VAR_1->linesize[0];
    int VAR_9 = VAR_1->linesize[1];
    int VAR_10 = VAR_1->linesize[2];

    uint8_t *VAR_11 = VAR_1->data[0] + VAR_8 * VAR_2;
    uint8_t *VAR_12 = VAR_1->data[1] + (VAR_9 >> 1) * VAR_2;
    uint8_t *VAR_13 = VAR_1->data[2] + (VAR_10 >> 1) * VAR_2;


    for (VAR_6 = 0; VAR_6 < VAR_3 - 1 && FUNC_1(VAR_0) > 6 * VAR_7; VAR_6 += 2) {
        for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5 += 2) {
            VAR_11[VAR_5 + 0 + 0 * VAR_8] = FUNC_0(VAR_0, VAR_4[0]);
            VAR_11[VAR_5 + 1 + 0 * VAR_8] = FUNC_0(VAR_0, VAR_4[0]);
            VAR_11[VAR_5 + 0 + 1 * VAR_8] = FUNC_0(VAR_0, VAR_4[0]);
            VAR_11[VAR_5 + 1 + 1 * VAR_8] = FUNC_0(VAR_0, VAR_4[0]);
            VAR_12[VAR_5 >> 1] = FUNC_0(VAR_0, VAR_4[1]) ^ 0x80;
            VAR_13[VAR_5 >> 1] = FUNC_0(VAR_0, VAR_4[2]) ^ 0x80;
        }

        VAR_11 += VAR_8 << 1;
        VAR_12 += VAR_9;
        VAR_13 += VAR_10;
    }

    return VAR_6;
}
