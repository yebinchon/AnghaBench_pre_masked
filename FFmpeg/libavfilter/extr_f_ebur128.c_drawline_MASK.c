
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int* linesize; int ** data; } ;
typedef TYPE_1__ AVFrame ;


 int FUNC_0 (int *,char*,int) ;

__attribute__((used)) static void FUNC_1(AVFrame *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5;
    uint8_t *VAR_6 = VAR_0->data[0] + VAR_2*VAR_0->linesize[0] + VAR_1*3;

    for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
        FUNC_0(VAR_6, "\x00\xff\x00", 3);
        VAR_6 += VAR_4;
    }
}
