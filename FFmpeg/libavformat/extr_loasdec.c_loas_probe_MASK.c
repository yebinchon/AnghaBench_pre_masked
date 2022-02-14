
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
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(const AVProbeData *VAR_2)
{
    int VAR_3 = 0, VAR_4 = 0;
    int VAR_5, VAR_6;
    const uint8_t *VAR_7 = VAR_2->buf;
    const uint8_t *VAR_8;
    const uint8_t *VAR_9;
    const uint8_t *VAR_10 = VAR_7 + VAR_2->buf_size - 3;
    VAR_9 = VAR_7;

    for (; VAR_9 < VAR_10; VAR_9 = VAR_8 + 1) {
        VAR_8 = VAR_9;

        for (VAR_6 = 0; VAR_8 < VAR_10; VAR_6++) {
            uint32_t VAR_11 = FUNC_0(VAR_8);
            if ((VAR_11 >> 13) != VAR_1)
                break;
            VAR_5 = (VAR_11 & 0x1FFF) + 3;
            if (VAR_5 < 7)
                break;
            VAR_5 = FUNC_2(VAR_5, VAR_10 - VAR_8);
            VAR_8 += VAR_5;
        }
        VAR_3 = FUNC_1(VAR_3, VAR_6);
        if (VAR_9 == VAR_7)
            VAR_4 = VAR_6;
    }

    if (VAR_4 >= 3)
        return VAR_0 + 1;
    else if (VAR_3 > 100)
        return VAR_0;
    else if (VAR_3 >= 3)
        return VAR_0 / 2;
    else
        return 0;
}
