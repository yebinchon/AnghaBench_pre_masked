
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int* buf; int buf_size; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int const) ;

__attribute__((used)) static int FUNC_2(const AVProbeData *VAR_1)
{
    const uint8_t *VAR_2 = VAR_1->buf + VAR_1->buf_size;
    const uint8_t *VAR_3;



    if ((VAR_1->buf_size + 45) % 184 != 0)
        return 0;

    if (!FUNC_0(VAR_1->buf[0]))
        return 0;

    for (VAR_3 = VAR_1->buf + 1; VAR_3 < VAR_2; VAR_3 += 46) {
        if (!FUNC_1(VAR_3[0]) && VAR_3[0] != 0xff)
            return 0;
        if (VAR_3[1] != 0x2c)
            return 0;
    }

    return VAR_0 / 2;
}
