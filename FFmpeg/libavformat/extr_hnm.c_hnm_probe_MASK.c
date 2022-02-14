
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buf_size; int * buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_1(const AVProbeData *VAR_2)
{
    if (VAR_2->buf_size < 4)
        return 0;



    if (FUNC_0(&VAR_2->buf[0]) == VAR_1)
        return VAR_0;

    return 0;
}
