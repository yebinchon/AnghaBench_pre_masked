
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int* linesize; int ** data; } ;
typedef TYPE_1__ AVFrame ;



__attribute__((used)) static void FUNC_0(const AVFrame *VAR_0, int VAR_1, int VAR_2, uint8_t VAR_3[], int VAR_4)
{
    int VAR_5, VAR_6, VAR_7;

    for (VAR_7=0; VAR_7<3; VAR_7++) {
        int VAR_8 = VAR_0->linesize[VAR_7];
        for (VAR_5=0; VAR_5<VAR_4; VAR_5++)
            for (VAR_6=0; VAR_6<VAR_4; VAR_6++)
                *VAR_3++ = VAR_0->data[VAR_7][(VAR_2+VAR_5)*VAR_8 + VAR_1 + VAR_6];
    }
}
