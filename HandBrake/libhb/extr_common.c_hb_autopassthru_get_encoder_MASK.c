
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int codec; int muxers; } ;
typedef TYPE_1__ hb_encoder_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (TYPE_1__ const*) ;

int FUNC_1(int VAR_3, int VAR_4, int VAR_5,
                                int VAR_6)
{
    int VAR_7 = 0;
    int VAR_8 = 0;
    int VAR_9 = VAR_0;
    int VAR_10 = VAR_0;
    const hb_encoder_t *VAR_11 = ((void*)0);
    int VAR_12 = (VAR_4 & VAR_3) | VAR_2;



    while ((VAR_11 = FUNC_0(VAR_11)) != ((void*)0))
    {
        if (!VAR_7 && VAR_11->codec == VAR_12)
        {
            VAR_7 = 1;
            if (VAR_11->muxers & VAR_6)
                VAR_9 = VAR_12;
        }
        else if (!VAR_8 && VAR_11->codec == VAR_5)
        {
            VAR_8 = 1;
            if ((VAR_11->muxers & VAR_6) || VAR_5 == VAR_1)
                VAR_10 = VAR_5;
        }
        if (VAR_7 && VAR_8)
        {
            break;
        }
    }
    return (VAR_9 != VAR_0) ? VAR_9 :
                                                     VAR_10;
}
