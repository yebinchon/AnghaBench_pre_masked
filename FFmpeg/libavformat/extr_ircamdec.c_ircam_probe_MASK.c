
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int*) ;

__attribute__((used)) static int FUNC_1(const AVProbeData *VAR_1)
{
    if ((VAR_1->buf[0] == 0x64 && VAR_1->buf[1] == 0xA3 && VAR_1->buf[3] == 0x00 &&
         VAR_1->buf[2] >= 1 && VAR_1->buf[2] <= 4) ||
        (VAR_1->buf[3] == 0x64 && VAR_1->buf[2] == 0xA3 && VAR_1->buf[0] == 0x00 &&
         VAR_1->buf[1] >= 1 && VAR_1->buf[1] <= 3) &&
        FUNC_0(VAR_1->buf + 4) && FUNC_0(VAR_1->buf + 8))
        return VAR_0 / 4 * 3;
    return 0;
}
