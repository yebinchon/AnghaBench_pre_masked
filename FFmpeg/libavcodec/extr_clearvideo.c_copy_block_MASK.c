
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int coded_width; int coded_height; } ;
struct TYPE_6__ {int* linesize; int ** data; } ;
typedef TYPE_1__ AVFrame ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static int FUNC_1(AVCodecContext *VAR_1, AVFrame *VAR_2, AVFrame *VAR_3,
                      int VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8, int VAR_9)
{
    int VAR_10 = VAR_4 > 0;
    int VAR_11 = VAR_5 + VAR_7;
    int VAR_12 = VAR_6 + VAR_8;
    int VAR_13, VAR_14, VAR_15, VAR_16;
    uint8_t *VAR_17, *VAR_18;
    int VAR_19;

    if (VAR_5 < 0 || VAR_11 < 0 || VAR_6 < 0 || VAR_12 < 0 ||
        VAR_5 + VAR_9 > VAR_1->coded_width >> VAR_10 ||
        VAR_6 + VAR_9 > VAR_1->coded_height >> VAR_10 ||
        VAR_11 + VAR_9 > VAR_1->coded_width >> VAR_10 ||
        VAR_12 + VAR_9 > VAR_1->coded_height >> VAR_10)
        return VAR_0;

    VAR_13 = VAR_3->linesize[VAR_4];
    VAR_14 = VAR_2->linesize[VAR_4];
    VAR_15 = VAR_11 + VAR_12 * VAR_13;
    VAR_17 = VAR_3->data[VAR_4];
    VAR_16 = VAR_5 + VAR_6 * VAR_14;
    VAR_18 = VAR_2->data[VAR_4];

    for (VAR_19 = 0; VAR_19 < VAR_9; VAR_19++) {
        uint8_t *VAR_20 = &VAR_18[VAR_16];
        uint8_t *VAR_21 = &VAR_17[VAR_15];

        FUNC_0(VAR_20, VAR_21, VAR_9);
        VAR_16 += VAR_14;
        VAR_15 += VAR_13;
    }

    return 0;
}
