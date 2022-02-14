
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_6__ {scalar_t__ channel_layout; } ;
struct TYPE_5__ {scalar_t__ channel_layout; } ;
struct TYPE_7__ {TYPE_2__ in; TYPE_1__ out; } ;
typedef TYPE_3__ hb_audio_resample_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

void FUNC_1(hb_audio_resample_t *VAR_3,
                                          uint64_t VAR_4)
{
    if (VAR_3 != ((void*)0))
    {
        if (VAR_4 == VAR_2)
        {

            VAR_4 = VAR_1;
        }


        if (VAR_3->out.channel_layout == VAR_0 &&
            FUNC_0(VAR_4))
        {
            VAR_4 = VAR_0;
        }
        VAR_3->in.channel_layout = VAR_4;
    }
}
