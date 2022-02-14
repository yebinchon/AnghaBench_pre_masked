
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int rate; } ;
typedef TYPE_1__ hb_rate_t ;


 TYPE_1__* FUNC_0 (TYPE_1__ const*) ;
 scalar_t__ FUNC_1 (int ,int ) ;

const hb_rate_t* FUNC_2(const hb_rate_t *VAR_0,
                                                        uint32_t VAR_1)
{
    while ((VAR_0 = FUNC_0(VAR_0)) != ((void*)0))
        if (FUNC_1(VAR_0->rate, VAR_1))
            return VAR_0;


    return ((void*)0);
}
