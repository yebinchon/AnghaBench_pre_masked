
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_6__ {int height; int width; } ;
struct TYPE_5__ {int* linesize; scalar_t__** data; } ;
typedef int GetByteContext ;
typedef TYPE_1__ AVFrame ;
typedef TYPE_2__ AVCodecContext ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(AVCodecContext *VAR_0, GetByteContext *VAR_1, AVFrame *VAR_2)
{
    uint8_t *VAR_3 = VAR_2->data[0] + (VAR_0->height - 1) * VAR_2->linesize[0];
    uint8_t VAR_4 = 0, VAR_5 = 0, VAR_6 = 0;

    for (int VAR_7 = 0; VAR_7 < VAR_0->height; VAR_7++) {
        for (int VAR_8 = 0; VAR_8 < VAR_0->width; VAR_8++) {
            VAR_3[VAR_8*3+0] = FUNC_0(VAR_1) + VAR_4;
            VAR_4 = VAR_3[VAR_8*3+0];
            VAR_3[VAR_8*3+1] = FUNC_0(VAR_1) + VAR_5;
            VAR_5 = VAR_3[VAR_8*3+1];
            VAR_3[VAR_8*3+2] = FUNC_0(VAR_1) + VAR_6;
            VAR_6 = VAR_3[VAR_8*3+2];
        }
        VAR_3 -= VAR_2->linesize[0];
    }

    return 0;
}
