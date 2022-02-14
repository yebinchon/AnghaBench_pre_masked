
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int* linesize; scalar_t__* data; } ;
typedef TYPE_1__ AVFrame ;


 int FUNC_0 (int *,int,scalar_t__,int,int,int,int ,int,int ) ;

__attribute__((used)) static int FUNC_1(uint8_t *VAR_0, int VAR_1, const AVFrame *VAR_2,
                            int VAR_3, int VAR_4, int VAR_5)
{
    int VAR_6,VAR_7;
    uint8_t *VAR_8;

    VAR_8 = VAR_0;

    for(VAR_6 = 0; VAR_6 < VAR_5; VAR_6 ++) {
        VAR_7 = FUNC_0(VAR_8, VAR_1, VAR_2->data[0] + VAR_2->linesize[0] * VAR_6, VAR_3, VAR_4, 0x7f, 0, -1, 0);
        if(VAR_7 == -1){
            return -1;
        }
        VAR_8+= VAR_7;
        VAR_1 -= VAR_7;
    }

    return VAR_8 - VAR_0;
}
