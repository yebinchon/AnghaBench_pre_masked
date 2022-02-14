
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(const AVProbeData *VAR_2)
{
    int VAR_3;
    if (VAR_2->buf[0] == 'C' && VAR_2->buf[1] == 'I' &&
        (VAR_3 = FUNC_0(VAR_2->buf + 2)) >= 0x2C &&
        FUNC_0(VAR_2->buf + 4) <= VAR_1 &&
        FUNC_0(VAR_2->buf + 6) <= 1 &&
        FUNC_1(VAR_2->buf + 20) &&
        FUNC_1(VAR_2->buf + 24) >= VAR_3 &&
        FUNC_1(VAR_2->buf + 28) >= VAR_3 &&
        FUNC_1(VAR_2->buf + 32) >= VAR_3)
        return VAR_0;
    return 0;
}
