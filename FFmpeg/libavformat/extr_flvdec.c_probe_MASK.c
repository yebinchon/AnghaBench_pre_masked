
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef float uint8_t ;
struct TYPE_3__ {float* buf; unsigned int buf_size; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 unsigned int FUNC_0 (float const*) ;
 int FUNC_1 (float const*,char*,int) ;

__attribute__((used)) static int FUNC_2(const AVProbeData *VAR_1, int VAR_2)
{
    const uint8_t *VAR_3 = VAR_1->buf;
    unsigned VAR_4 = FUNC_0(VAR_3 + 5);

    if (VAR_3[0] == 'F' &&
        VAR_3[1] == 'L' &&
        VAR_3[2] == 'V' &&
        VAR_3[3] < 5 && VAR_3[5] == 0 &&
        VAR_4 + 100 < VAR_1->buf_size &&
        VAR_4 > 8) {
        int VAR_5 = !FUNC_1(VAR_3 + VAR_4 + 40, "NGINX RTMP", 10);

        if (VAR_2 == VAR_5)
            return VAR_0;
    }
    return 0;
}
