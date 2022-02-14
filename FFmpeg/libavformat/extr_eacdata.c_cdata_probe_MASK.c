
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int* buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(const AVProbeData *VAR_1)
{
    const uint8_t *VAR_2 = VAR_1->buf;

    if (VAR_2[0] == 0x04 && (VAR_2[1] == 0x00 || VAR_2[1] == 0x04 || VAR_2[1] == 0x0C || VAR_2[1] == 0x14))
        return VAR_0/8;
    return 0;
}
