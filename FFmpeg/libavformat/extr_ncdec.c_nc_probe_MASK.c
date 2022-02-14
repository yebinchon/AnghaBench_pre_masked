
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buf_size; scalar_t__ buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_2(const AVProbeData *VAR_2)
{
    int VAR_3;

    if (FUNC_0(VAR_2->buf) != VAR_1)
        return 0;

    VAR_3 = FUNC_1(VAR_2->buf + 5);

    if (VAR_3 + 20 > VAR_2->buf_size)
        return VAR_0/4;

    if (FUNC_0(VAR_2->buf+16+VAR_3) == VAR_1)
        return VAR_0;

    return 0;
}
