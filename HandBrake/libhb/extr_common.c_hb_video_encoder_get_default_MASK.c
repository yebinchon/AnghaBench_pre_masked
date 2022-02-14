
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int muxers; int codec; } ;
typedef TYPE_1__ hb_encoder_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (TYPE_1__ const*) ;

int FUNC_1(int VAR_2)
{
    if (!(VAR_2 & VAR_0))
        goto fail;

    const hb_encoder_t *VAR_3 = ((void*)0);
    while ((VAR_3 = FUNC_0(VAR_3)) != ((void*)0))
    {
        if (VAR_3->muxers & VAR_2)
        {
            return VAR_3->codec;
        }
    }

fail:
    return VAR_1;
}
