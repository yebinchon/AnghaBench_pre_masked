
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int buf_size; int * buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(const AVProbeData *VAR_1)
{
    int VAR_2 = 0, VAR_3 = 0;
    int VAR_4, VAR_5;
    const uint8_t *VAR_6 = VAR_1->buf;
    const uint8_t *VAR_7;
    const uint8_t *VAR_8;
    const uint8_t *VAR_9 = VAR_6 + VAR_1->buf_size - 7;

    VAR_8 = VAR_6;

    for (; VAR_8 < VAR_9; VAR_8 = VAR_7 + 1) {
        VAR_7 = VAR_8;

        for (VAR_5 = 0; VAR_7 < VAR_9; VAR_5++) {
            uint32_t VAR_10 = FUNC_0(VAR_7);
            if ((VAR_10 & 0xFFF6) != 0xFFF0) {
                if (VAR_8 != VAR_6) {




                    VAR_5 = 0;
                }
                break;
            }
            VAR_4 = (FUNC_1(VAR_7 + 3) >> 13) & 0x1FFF;
            if (VAR_4 < 7)
                break;
            VAR_4 = FUNC_3(VAR_4, VAR_9 - VAR_7);
            VAR_7 += VAR_4;
        }
        VAR_2 = FUNC_2(VAR_2, VAR_5);
        if (VAR_8 == VAR_6)
            VAR_3 = VAR_5;
    }

    if (VAR_3 >= 3)
        return VAR_0 + 1;
    else if (VAR_2 > 100)
        return VAR_0;
    else if (VAR_2 >= 3)
        return VAR_0 / 2;
    else if (VAR_3 >= 1)
        return 1;
    else
        return 0;
}
