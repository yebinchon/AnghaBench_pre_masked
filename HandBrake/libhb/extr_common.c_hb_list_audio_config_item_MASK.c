
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int hb_list_t ;
struct TYPE_3__ {int config; } ;
typedef TYPE_1__ hb_audio_t ;
typedef int hb_audio_config_t ;


 TYPE_1__* FUNC_0 (int *,int) ;

hb_audio_config_t * FUNC_1(hb_list_t * VAR_0, int VAR_1)
{
    hb_audio_t *VAR_2 = ((void*)0);

    if( (VAR_2 = FUNC_0(VAR_0, VAR_1)) )
        return &(VAR_2->config);

    return ((void*)0);
}
