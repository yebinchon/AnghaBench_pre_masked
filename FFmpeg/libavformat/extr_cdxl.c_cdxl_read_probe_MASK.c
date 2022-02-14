
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ buf_size; int* buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (int*) ;
 scalar_t__ FUNC_2 (int*) ;
 scalar_t__ FUNC_3 (int*) ;
 scalar_t__ FUNC_4 (int*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_5(const AVProbeData *VAR_2)
{
    int VAR_3 = VAR_0 + 10;

    if (VAR_2->buf_size < VAR_1)
        return 0;


    if (FUNC_4(&VAR_2->buf[24]) || FUNC_2(&VAR_2->buf[10]))
        return 0;


    if (VAR_2->buf[0] != 1)
        return 0;


    if (FUNC_0(&VAR_2->buf[20]) > 512)
        return 0;


    if (VAR_2->buf[18] || !VAR_2->buf[19])
        return 0;


    if (!FUNC_2(&VAR_2->buf[14]) || !FUNC_2(&VAR_2->buf[16]))
        return 0;


    if (FUNC_1(&VAR_2->buf[2]) < FUNC_0(&VAR_2->buf[22]) + FUNC_0(&VAR_2->buf[20]) + VAR_1)
        return 0;


    if (FUNC_3(&VAR_2->buf[6]))
        VAR_3 /= 2;


    if (FUNC_0(&VAR_2->buf[12]) != 1)
        VAR_3 /= 2;

    return VAR_3;
}
