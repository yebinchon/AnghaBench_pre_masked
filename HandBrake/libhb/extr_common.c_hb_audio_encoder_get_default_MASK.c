
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int muxers; int codec; } ;
typedef TYPE_1__ hb_encoder_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_0 (TYPE_1__ const*) ;

int FUNC_1(int VAR_6)
{
    if (!(VAR_6 & VAR_4))
        goto fail;

    int VAR_7 = 0;
    const hb_encoder_t *VAR_8 = ((void*)0);
    while ((VAR_8 = FUNC_0(VAR_8)) != ((void*)0))
    {

        if ((VAR_8->muxers & VAR_6) &&
            (VAR_8->codec & VAR_3) == 0)
        {
            VAR_7 = VAR_8->codec;
            break;
        }
    }




    if (VAR_7 == VAR_0 && (VAR_6 & VAR_5) == VAR_6)
    {
        return VAR_2;
    }
    else
    {
        return VAR_7;
    }

fail:
    return VAR_1;
}
