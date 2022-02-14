
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int * linesize; int ** data; } ;
typedef TYPE_1__ AVFrame ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static int FUNC_1(uint8_t *VAR_0, const AVFrame *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5, VAR_6 = VAR_2 * VAR_3;
    uint8_t *VAR_7 = VAR_0;
    uint8_t *VAR_8 = VAR_1->data[0];

    for(VAR_5=0; VAR_5 < VAR_4; VAR_5++) {
        FUNC_0(VAR_7, VAR_8, VAR_6);
        VAR_7 += VAR_6;
        VAR_8 += VAR_1->linesize[0];
    }

    return VAR_7 - VAR_0;
}
