
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int int64_t ;
struct TYPE_4__ {int* linesize; int width; int height; scalar_t__** data; } ;
typedef TYPE_1__ AVFrame ;


 scalar_t__ FUNC_0 (scalar_t__ const) ;

__attribute__((used)) static int64_t FUNC_1(const AVFrame *VAR_0, const AVFrame *VAR_1)
{
    int VAR_2, VAR_3;
    const uint8_t *VAR_4 = VAR_0->data[0];
    const uint8_t *VAR_5 = VAR_1->data[0];
    const int VAR_6 = VAR_0->linesize[0];
    const int VAR_7 = VAR_1->linesize[0];
    const int VAR_8 = VAR_0->width;
    const int VAR_9 = VAR_0->height;
    int64_t VAR_10 = 0;

    for (VAR_3 = 0; VAR_3 < VAR_9; VAR_3++) {
        for (VAR_2 = 0; VAR_2 < VAR_8; VAR_2++)
            VAR_10 += FUNC_0(VAR_4[VAR_2] - VAR_5[VAR_2]);
        VAR_4 += VAR_6;
        VAR_5 += VAR_7;
    }
    return VAR_10;
}
