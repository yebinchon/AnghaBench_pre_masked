
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int* linesize; int** data; int height; int width; } ;
struct TYPE_5__ {int height; int width; } ;
typedef TYPE_1__ CoverContext ;
typedef TYPE_2__ AVFrame ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(CoverContext *VAR_0, AVFrame *VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4, VAR_5, VAR_6;

    for (VAR_6=0; VAR_6<3; VAR_6++) {
        int VAR_7 = VAR_2>>!!VAR_6;
        int VAR_8 = VAR_3>>!!VAR_6;
        int VAR_9 = VAR_1->linesize[VAR_6];
        uint8_t *VAR_10 = VAR_1->data[VAR_6] + VAR_7 + VAR_8 * VAR_9;
        int VAR_11 = FUNC_0(VAR_0->width , !!VAR_6);
        int VAR_12 = FUNC_0(VAR_0->height, !!VAR_6);
        int VAR_13 = FUNC_0(VAR_1->width , !!VAR_6);
        int VAR_14 = FUNC_0(VAR_1->height, !!VAR_6);
        for (VAR_5 = 0; VAR_5 < VAR_12; VAR_5++) {
            for (VAR_4 = 0; VAR_4 < VAR_11; VAR_4++) {
                int VAR_15 = 0;
                int VAR_16 = 0;
                if (VAR_7) {
                    int VAR_17 = 65536 / (VAR_4 + 1);
                    VAR_16 += VAR_10[-1 + VAR_5*VAR_9] * VAR_17;
                    VAR_15 += VAR_17;
                }
                if (VAR_8) {
                    int VAR_18 = 65536 / (VAR_5 + 1);
                    VAR_16 += VAR_10[VAR_4 - VAR_9] * VAR_18;
                    VAR_15 += VAR_18;
                }
                if (VAR_7 + VAR_11 < VAR_13) {
                    int VAR_19 = 65536 / (VAR_11 - VAR_4);
                    VAR_16 += VAR_10[VAR_11 + VAR_5*VAR_9] * VAR_19;
                    VAR_15 += VAR_19;
                }
                if (VAR_8 + VAR_12 < VAR_14) {
                    int VAR_20 = 65536 / (VAR_12 - VAR_5);
                    VAR_16 += VAR_10[VAR_4 + VAR_12*VAR_9] * VAR_20;
                    VAR_15 += VAR_20;
                }
                VAR_10[VAR_4 + VAR_5*VAR_9] = VAR_15 ? (VAR_16 + (VAR_15>>1)) / VAR_15 : 0;
            }
        }
    }
}
