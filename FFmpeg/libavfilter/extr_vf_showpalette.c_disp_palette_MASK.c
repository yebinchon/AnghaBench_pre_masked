
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int* linesize; scalar_t__* data; } ;
typedef TYPE_1__ AVFrame ;



__attribute__((used)) static int FUNC_0(AVFrame *VAR_0, const AVFrame *VAR_1, int VAR_2)
{
    int VAR_3, VAR_4, VAR_5, VAR_6;
    uint32_t *VAR_7 = (uint32_t *)VAR_0->data[0];
    const int VAR_8 = VAR_0->linesize[0] >> 2;
    const uint32_t *VAR_9 = (uint32_t *)VAR_1->data[1];

    for (VAR_4 = 0; VAR_4 < 16; VAR_4++)
        for (VAR_3 = 0; VAR_3 < 16; VAR_3++)
            for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
                for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
                    VAR_7[(VAR_4*VAR_8 + VAR_3) * VAR_2 + VAR_6*VAR_8 + VAR_5] = VAR_9[VAR_4*16 + VAR_3];
    return 0;
}
