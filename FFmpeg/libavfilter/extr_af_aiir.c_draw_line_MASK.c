
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int* linesize; scalar_t__* data; } ;
typedef TYPE_1__ AVFrame ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(AVFrame *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4, uint32_t VAR_5)
{
    int VAR_6 = FUNC_1(VAR_3-VAR_1);
    int VAR_7 = FUNC_1(VAR_4-VAR_2), VAR_8 = VAR_2 < VAR_4 ? 1 : -1;
    int VAR_9 = (VAR_6>VAR_7 ? VAR_6 : -VAR_7) / 2, VAR_10;

    for (;;) {
        FUNC_0(VAR_0->data[0] + VAR_2 * VAR_0->linesize[0] + VAR_1 * 4, VAR_5);

        if (VAR_1 == VAR_3 && VAR_2 == VAR_4)
            break;

        VAR_10 = VAR_9;

        if (VAR_10 >-VAR_6) {
            VAR_9 -= VAR_7;
            VAR_1--;
        }

        if (VAR_10 < VAR_7) {
            VAR_9 += VAR_6;
            VAR_2 += VAR_8;
        }
    }
}
