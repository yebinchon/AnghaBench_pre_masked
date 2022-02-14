
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_2(const AVProbeData *VAR_2)
{
    if ((FUNC_0(&VAR_2->buf[0]) != VAR_1) ||
        (FUNC_1(&VAR_2->buf[2]) != 0xFFFFFFFF))
        return 0;

    return VAR_0;
}
