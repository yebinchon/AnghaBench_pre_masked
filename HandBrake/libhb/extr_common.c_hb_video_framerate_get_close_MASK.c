
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {double den; scalar_t__ num; } ;
typedef TYPE_1__ hb_rational_t ;
struct TYPE_7__ {double rate; } ;
typedef TYPE_2__ hb_rate_t ;


 double FUNC_0 (double) ;
 TYPE_2__* FUNC_1 (TYPE_2__ const*) ;
 scalar_t__ VAR_0 ;

int FUNC_2(hb_rational_t *VAR_1, double VAR_2)
{
    double VAR_3;
    const hb_rate_t * VAR_4 = ((void*)0);
    int VAR_5 = -1;
    double VAR_6 = VAR_2;

    VAR_3 = (double)VAR_1->num / VAR_1->den;
    while ((VAR_4 = FUNC_1(VAR_4)) != ((void*)0))
    {
        double VAR_7 = (double)VAR_0 / VAR_4->rate;
        if (FUNC_0(VAR_7 - VAR_3) < VAR_6)
        {
            VAR_5 = VAR_4->rate;
            VAR_6 = FUNC_0(VAR_7 - VAR_3);
        }
    }
    return VAR_5;
}
