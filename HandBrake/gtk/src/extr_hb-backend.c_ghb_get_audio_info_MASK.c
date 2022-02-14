
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int list_audio; } ;
typedef TYPE_1__ hb_title_t ;
typedef int hb_audio_config_t ;
typedef int gint ;


 int * FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

hb_audio_config_t*
FUNC_2(const hb_title_t *VAR_0, gint VAR_1)
{
    if (VAR_0 == ((void*)0)) return ((void*)0);
    if (!FUNC_1(VAR_0->list_audio))
    {
        return ((void*)0);
    }
    return FUNC_0(VAR_0->list_audio, VAR_1);
}
