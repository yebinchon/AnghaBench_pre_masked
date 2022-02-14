
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_4__ {int amixdown; } ;
typedef TYPE_1__ hb_mixdown_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (TYPE_1__ const*) ;
 scalar_t__ FUNC_1 (int,int,int ) ;

int FUNC_2(uint32_t VAR_3, uint64_t VAR_4, int VAR_5)
{

    if (VAR_3 & VAR_0)
        return VAR_1;

    int VAR_6 = VAR_2;
    const hb_mixdown_t *VAR_7 = FUNC_0(((void*)0));


    while ((VAR_7 = FUNC_0(VAR_7)) != ((void*)0))
    {
        if ((VAR_5 == VAR_2 || VAR_7->amixdown <= VAR_5) &&
            (FUNC_1(VAR_7->amixdown, VAR_3, VAR_4)))
        {
            VAR_6 = VAR_7->amixdown;
        }
    }
    return VAR_6;
}
