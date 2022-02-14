
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int builder; } ;
typedef TYPE_2__ signal_user_data_t ;
struct TYPE_11__ {int codec; } ;
typedef TYPE_3__ hb_encoder_t ;
struct TYPE_9__ {int codec; } ;
struct TYPE_12__ {TYPE_1__ in; } ;
typedef TYPE_4__ hb_audio_config_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,int ) ;
 TYPE_3__* FUNC_1 (TYPE_3__ const*) ;

__attribute__((used)) static void FUNC_2(signal_user_data_t *VAR_3, hb_audio_config_t *VAR_4)
{
    const hb_encoder_t *VAR_5;

    if (VAR_4 == ((void*)0))
        return;

    for (VAR_5 = FUNC_1(((void*)0)); VAR_5 != ((void*)0);
         VAR_5 = FUNC_1(VAR_5))
    {
        if (!(VAR_5->codec & VAR_1))
            continue;
        if ((VAR_5->codec & VAR_0) !=
            (VAR_4->in.codec & VAR_0))
        {
            FUNC_0(VAR_3->builder, "AudioEncoder",
                VAR_5->codec, VAR_2);
        }
    }
}
