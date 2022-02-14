
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ buf_size; int* buf; } ;
typedef TYPE_1__ AVProbeData ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (int*) ;

__attribute__((used)) static int FUNC_2(const AVProbeData *VAR_4)
{
    int VAR_5;
    if (VAR_4->buf_size < VAR_2 + VAR_0)
        return 0;


    VAR_5 = FUNC_0(&VAR_4->buf[0]);
    if ((VAR_5 < 8000) || (VAR_5 > 48000))
        return 0;



    if (VAR_4->buf[10] & 0xFC)
        return 0;

    if (VAR_4->buf[11] != 99 && VAR_4->buf[11] != 1)
        return 0;


    if (FUNC_1(&VAR_4->buf[16]) != VAR_1)
        return 0;


    return VAR_3;
}
