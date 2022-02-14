
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int list_audio; } ;
typedef TYPE_3__ hb_title_t ;
typedef int hb_handle_t ;
struct TYPE_7__ {int codec_param; int codec; } ;
struct TYPE_8__ {TYPE_1__ in; } ;
struct TYPE_10__ {TYPE_2__ config; } ;
typedef TYPE_4__ hb_audio_t ;


 int FUNC_0 (int ,int ,int) ;
 TYPE_3__* FUNC_1 (int *,int) ;
 TYPE_4__* FUNC_2 (int ,int) ;

int FUNC_3(hb_handle_t *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
    hb_title_t *VAR_4 = FUNC_1(VAR_0, VAR_1);
    if (VAR_4 == ((void*)0))
        return 0;

    hb_audio_t *VAR_5 = FUNC_2(VAR_4->list_audio, VAR_2);
    if (VAR_5 == ((void*)0))
        return 0;

    return FUNC_0(VAR_5->config.in.codec,
                                  VAR_5->config.in.codec_param, VAR_3);
}
