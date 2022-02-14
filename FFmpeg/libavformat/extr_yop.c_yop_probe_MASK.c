
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int*) ;

__attribute__((used)) static int FUNC_2(const AVProbeData *VAR_1)
{
    if (FUNC_0(VAR_1->buf) == FUNC_0("YO") &&
        VAR_1->buf[2]<10 &&
        VAR_1->buf[3]<10 &&
        VAR_1->buf[6] &&
        VAR_1->buf[7] &&
        !(VAR_1->buf[8] & 1) &&
        !(VAR_1->buf[10] & 1) &&
        FUNC_1(VAR_1->buf + 12 + 6) >= 920 &&
        FUNC_1(VAR_1->buf + 12 + 6) < VAR_1->buf[12] * 3 + 4 + VAR_1->buf[7] * 2048
    )
        return VAR_0 * 3 / 4;

    return 0;
}
