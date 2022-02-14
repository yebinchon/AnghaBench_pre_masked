
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int rate; } ;
typedef TYPE_1__ hb_rate_t ;


 int FUNC_0 (char const*) ;
 TYPE_1__* FUNC_1 (TYPE_1__ const*) ;
 TYPE_1__ const VAR_0 ;
 int FUNC_2 (char const*,char*,int) ;

const hb_rate_t*
FUNC_3(const char *VAR_1)
{

    if (!FUNC_2(VAR_1, "auto", 8))
        return &VAR_0;


    int VAR_2 = FUNC_0(VAR_1);


    const hb_rate_t *VAR_3, *VAR_4;
    for (VAR_4 = VAR_3 = FUNC_1(((void*)0)); VAR_3 != ((void*)0);
         VAR_3 = FUNC_1(VAR_3))
    {
        if (VAR_2 == VAR_3->rate)
        {
            return VAR_3;
        }
    }

    return VAR_4;
}
