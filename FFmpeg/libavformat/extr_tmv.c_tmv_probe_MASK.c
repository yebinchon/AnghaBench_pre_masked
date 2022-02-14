
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (int*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_2(const AVProbeData *VAR_4)
{
    if (FUNC_1(VAR_4->buf) == VAR_3 &&
        FUNC_0(VAR_4->buf+4) >= VAR_2 &&
        FUNC_0(VAR_4->buf+6) >= VAR_1 &&
               !VAR_4->buf[8] &&
                VAR_4->buf[9] &&
                VAR_4->buf[10])
        return VAR_0 /
            ((VAR_4->buf[9] == 40 && VAR_4->buf[10] == 25) ? 1 : 4);
    return 0;
}
