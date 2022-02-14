
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int codec; int muxers; } ;
typedef TYPE_1__ hb_encoder_t ;
typedef int guint32 ;
typedef int gint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (TYPE_1__ const*) ;
 int FUNC_2 (int,int,int,int) ;

gint
FUNC_3(gint VAR_3, guint32 VAR_4, gint VAR_5, gint VAR_6, gint VAR_7)
{
    if (VAR_5 == VAR_0)
    {
        return FUNC_2(VAR_4, VAR_7, VAR_6, VAR_3);
    }


    const hb_encoder_t *VAR_8;
    for (VAR_8 = FUNC_1(((void*)0)); VAR_8 != ((void*)0);
         VAR_8 = FUNC_1(VAR_8))
    {
        if (VAR_8->codec == VAR_6 && !(VAR_8->muxers & VAR_3))
        {
            VAR_6 = FUNC_0(VAR_3);
            break;
        }
    }
    if ((VAR_5 & VAR_1) &&
        !(VAR_5 & VAR_4 & VAR_2))
    {
        return VAR_6;
    }
    for (VAR_8 = FUNC_1(((void*)0)); VAR_8 != ((void*)0);
         VAR_8 = FUNC_1(VAR_8))
    {
        if (VAR_8->codec == VAR_5 && !(VAR_8->muxers & VAR_3))
        {
            return VAR_6;
        }
    }
    return VAR_5;
}
