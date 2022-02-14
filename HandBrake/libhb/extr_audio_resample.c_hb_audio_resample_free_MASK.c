
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * swresample; } ;
typedef TYPE_1__ hb_audio_resample_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int **) ;

void FUNC_2(hb_audio_resample_t *VAR_0)
{
    if (VAR_0 != ((void*)0))
    {
        if (VAR_0->swresample != ((void*)0))
        {
            FUNC_1(&VAR_0->swresample);
        }
        FUNC_0(VAR_0);
    }
}
