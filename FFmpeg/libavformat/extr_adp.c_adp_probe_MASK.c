
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_3__ {int buf_size; scalar_t__* buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(const AVProbeData *VAR_1)
{
    int VAR_2, VAR_3 = 0;
    uint8_t VAR_4 = 0;

    if (VAR_1->buf_size < 32)
        return 0;

    for (VAR_2 = 0; VAR_2 < VAR_1->buf_size - 3; VAR_2+=32) {
        if (VAR_1->buf[VAR_2] != VAR_1->buf[VAR_2+2] || VAR_1->buf[VAR_2+1] != VAR_1->buf[VAR_2+3])
            return 0;
        if (VAR_1->buf[VAR_2] != VAR_4)
            VAR_3++;
        VAR_4 = VAR_1->buf[VAR_2];
    }
    if (VAR_3 <= 1)
        return 0;

    return VAR_1->buf_size < 260 ? 1 : VAR_0 / 4;
}
