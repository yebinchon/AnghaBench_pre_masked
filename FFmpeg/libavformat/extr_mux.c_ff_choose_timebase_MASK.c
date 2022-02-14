
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int den; int num; } ;
struct TYPE_5__ {TYPE_2__ time_base; } ;
typedef TYPE_1__ AVStream ;
typedef TYPE_2__ AVRational ;
typedef int AVFormatContext ;



AVRational FUNC_0(AVFormatContext *VAR_0, AVStream *VAR_1, int VAR_2)
{
    AVRational VAR_3;
    int VAR_4;

    VAR_3 = VAR_1->time_base;

    for (VAR_4=2; VAR_4<14; VAR_4+= 1+(VAR_4>2))
        while (VAR_3.den / VAR_3.num < VAR_2 && VAR_3.num % VAR_4 == 0)
            VAR_3.num /= VAR_4;
    while (VAR_3.den / VAR_3.num < VAR_2 && VAR_3.den < (1<<24))
        VAR_3.den <<= 1;

    return VAR_3;
}
