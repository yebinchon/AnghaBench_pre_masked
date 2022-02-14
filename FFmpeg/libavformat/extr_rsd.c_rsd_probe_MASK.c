
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (int*,char*,int) ;

__attribute__((used)) static int FUNC_2(const AVProbeData *VAR_1)
{
    if (FUNC_1(VAR_1->buf, "RSD", 3) || VAR_1->buf[3] - '0' < 2 || VAR_1->buf[3] - '0' > 6)
        return 0;
    if (FUNC_0(VAR_1->buf + 8) > 256 || !FUNC_0(VAR_1->buf + 8))
        return VAR_0 / 8;
    if (FUNC_0(VAR_1->buf + 16) > 8*48000 || !FUNC_0(VAR_1->buf + 16))
        return VAR_0 / 8;
    return VAR_0;
}
