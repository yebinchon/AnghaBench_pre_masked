
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {double clock_period; double feedback2_factor; double feedback3_factor; } ;
typedef TYPE_1__ TimeFilter ;


 int VAR_0 ;
 double VAR_1 ;
 TYPE_1__* FUNC_0 (int) ;
 double FUNC_1 (double) ;

TimeFilter *FUNC_2(double VAR_2,
                              double VAR_3,
                              double VAR_4)
{
    TimeFilter *VAR_5 = FUNC_0(sizeof(TimeFilter));
    double VAR_6 = 2 * VAR_0 * VAR_4 * VAR_3 * VAR_2;

    if (!VAR_5)
        return ((void*)0);

    VAR_5->clock_period = VAR_2;
    VAR_5->feedback2_factor = FUNC_1(VAR_1 * VAR_6);
    VAR_5->feedback3_factor = FUNC_1(VAR_6 * VAR_6) / VAR_3;
    return VAR_5;
}
