
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int rate; } ;
typedef TYPE_1__ hb_rate_t ;
struct TYPE_6__ {int rate; } ;


 TYPE_1__* FUNC_0 (TYPE_1__ const*) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static int FUNC_1(int VAR_1)
{

    if (VAR_1 <= 0)
        return VAR_1;

    int VAR_2 = VAR_0->rate;
    const hb_rate_t *VAR_3 = ((void*)0);
    while ((VAR_3 = FUNC_0(VAR_3)) != ((void*)0))
    {
        if (VAR_1 == VAR_3->rate)
        {

            VAR_2 = VAR_3->rate;
            break;
        }
        if (VAR_1 > VAR_3->rate)
        {

            VAR_2 = VAR_3->rate;
        }
    }
    return VAR_2;
}
