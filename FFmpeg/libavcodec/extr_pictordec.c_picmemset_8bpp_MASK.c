
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int* linesize; int ** data; } ;
struct TYPE_5__ {int width; } ;
typedef TYPE_1__ PicContext ;
typedef TYPE_2__ AVFrame ;


 int FUNC_0 (int *,int,int) ;

__attribute__((used)) static void FUNC_1(PicContext *VAR_0, AVFrame *VAR_1, int VAR_2, int VAR_3,
                           int *VAR_4, int *VAR_5)
{
    while (VAR_3 > 0) {
        uint8_t *VAR_6 = VAR_1->data[0] + *VAR_5 * VAR_1->linesize[0];
        if (*VAR_4 + VAR_3 >= VAR_0->width) {
            int VAR_7 = VAR_0->width - *VAR_4;
            FUNC_0(VAR_6 + *VAR_4, VAR_2, VAR_7);
            VAR_3 -= VAR_7;
            *VAR_4 = 0;
            *VAR_5 -= 1;
            if (*VAR_5 < 0)
                break;
        } else {
            FUNC_0(VAR_6 + *VAR_4, VAR_2, VAR_3);
            *VAR_4 += VAR_3;
            break;
        }
    }
}
