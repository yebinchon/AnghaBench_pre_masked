
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int log2_max_poc_lsb; } ;
typedef TYPE_1__ HEVCSPS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_0(const HEVCSPS *VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
    int VAR_7 = 1 << VAR_3->log2_max_poc_lsb;
    int VAR_8 = VAR_4 % VAR_7;
    int VAR_9 = VAR_4 - VAR_8;
    int VAR_10;

    if (VAR_5 < VAR_8 && VAR_8 - VAR_5 >= VAR_7 / 2)
        VAR_10 = VAR_9 + VAR_7;
    else if (VAR_5 > VAR_8 && VAR_5 - VAR_8 > VAR_7 / 2)
        VAR_10 = VAR_9 - VAR_7;
    else
        VAR_10 = VAR_9;


    if (VAR_6 == VAR_1 ||
        VAR_6 == VAR_2 ||
        VAR_6 == VAR_0)
        VAR_10 = 0;

    return VAR_10 + VAR_5;
}
