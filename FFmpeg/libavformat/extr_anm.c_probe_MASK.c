
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * buf; } ;
typedef TYPE_1__ AVProbeData ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_2(const AVProbeData *VAR_3)
{

    if (FUNC_1(&VAR_3->buf[0]) == VAR_2 &&
        FUNC_1(&VAR_3->buf[16]) == VAR_0 &&
        FUNC_0(&VAR_3->buf[20]) && FUNC_0(&VAR_3->buf[22]))
        return VAR_1;
    return 0;
}
