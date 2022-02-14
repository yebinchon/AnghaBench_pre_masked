
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int* buf; int buf_size; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(const AVProbeData *VAR_1)
{
    int VAR_2 = 0, VAR_3 = 0;
    uint8_t *VAR_4 = VAR_1->buf;
    while (VAR_4 < VAR_1->buf + VAR_1->buf_size - 32) {
        if ((*VAR_4 & 0xf0) == 0xd0) {
            VAR_2++;
        } else {
            VAR_3++;
        }
        VAR_4 += 33;
    }
    if (VAR_2 >> 5 > VAR_3)
        return VAR_0 + 1;
    return 0;
}
