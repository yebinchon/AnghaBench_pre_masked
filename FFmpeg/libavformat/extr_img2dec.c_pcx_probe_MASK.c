
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int* buf; int buf_size; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int const*) ;
 int FUNC_1 (int const) ;

__attribute__((used)) static int FUNC_2(const AVProbeData *VAR_1)
{
    const uint8_t *VAR_2 = VAR_1->buf;

    if ( VAR_1->buf_size < 128
        || VAR_2[0] != 10
        || VAR_2[1] > 5
        || VAR_2[2] > 1
        || FUNC_1(VAR_2[3]) != 1 || VAR_2[3] > 8
        || FUNC_0(&VAR_2[4]) > FUNC_0(&VAR_2[8])
        || FUNC_0(&VAR_2[6]) > FUNC_0(&VAR_2[10])
        || VAR_2[64])
        return 0;
    VAR_2 += 73;
    while (++VAR_2 < VAR_1->buf + 128)
        if (*VAR_2)
            return VAR_0 / 4;

    return VAR_0 + 1;
}
