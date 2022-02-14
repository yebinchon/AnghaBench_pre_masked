
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int*,char*,int) ;

__attribute__((used)) static int FUNC_1(const AVProbeData *VAR_1)
{
    if (!FUNC_0(VAR_1->buf, "DAHUA", 5))
        return VAR_0;

    if (FUNC_0(VAR_1->buf, "DHAV", 4))
        return 0;

    if (VAR_1->buf[4] == 0xf0 ||
        VAR_1->buf[4] == 0xf1 ||
        VAR_1->buf[4] == 0xfc ||
        VAR_1->buf[4] == 0xfd)
        return VAR_0;
    return 0;
}
