
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int shutdown; } ;
typedef TYPE_1__ SSL ;


 int FUNC_0 (TYPE_1__ const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (TYPE_1__ const*) ;
 scalar_t__ FUNC_2 (TYPE_1__ const*) ;

int FUNC_3(const SSL *VAR_6, int VAR_7)
{
    int VAR_8 = VAR_1;

    FUNC_0(VAR_6);

    if (VAR_7 > 0)
        VAR_8 = VAR_0;
    else if (VAR_7 < 0)
    {
        if (FUNC_1(VAR_6))
            VAR_8 = VAR_2;
        else if (FUNC_2(VAR_6))
            VAR_8 = VAR_3;
        else
            VAR_8 = VAR_1;
    }
    else
    {
        if (VAR_6->shutdown & VAR_5)
            VAR_8 = VAR_4;
        else
            VAR_8 = VAR_1;
    }

    return VAR_8;
}
