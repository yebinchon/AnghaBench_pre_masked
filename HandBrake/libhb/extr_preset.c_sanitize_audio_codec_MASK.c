
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
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (TYPE_1__ const*) ;
 int FUNC_3 (int,int,int,int) ;

__attribute__((used)) static int FUNC_4(int VAR_5, int VAR_6,
                                int VAR_7, int VAR_8, int VAR_9)
{
    int VAR_10 = VAR_6;
    if (VAR_6 == VAR_0)
    {
        VAR_10 = FUNC_3(VAR_5, VAR_7, VAR_8, VAR_9);
    }
    else if ((VAR_6 & VAR_3) &&
             !(VAR_5 & VAR_6 & VAR_4))
    {
        VAR_10 = FUNC_1(VAR_6);
        if (VAR_10 == VAR_1)
            VAR_10 = VAR_8;
    }


    const hb_encoder_t *VAR_11 = ((void*)0);
    while ((VAR_11 = FUNC_2(VAR_11)) != ((void*)0))
    {
        if (VAR_11->codec == VAR_10 && VAR_10 != VAR_2 &&
            !(VAR_11->muxers & VAR_9))
        {
            VAR_10 = FUNC_0(VAR_9);
            break;
        }
    }
    if (VAR_10 == VAR_1)
        VAR_10 = FUNC_0(VAR_9);
    return VAR_10;
}
