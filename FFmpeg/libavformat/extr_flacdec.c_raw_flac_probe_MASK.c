
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(const AVProbeData *VAR_3)
{
    if ((VAR_3->buf[2] & 0xF0) == 0)
        return 0;
    if ((VAR_3->buf[2] & 0x0F) == 0x0F)
        return 0;
    if ((VAR_3->buf[3] & 0xF0) >= (VAR_2 + VAR_1) << 4)

        return 0;
    if ((VAR_3->buf[3] & 0x06) == 0x06)
        return 0;
    if ((VAR_3->buf[3] & 0x01) == 0x01)
        return 0;
    return VAR_0 / 4 + 1;
}
