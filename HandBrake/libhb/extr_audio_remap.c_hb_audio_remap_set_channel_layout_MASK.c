
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_3__ {int remap_needed; int nchannels; scalar_t__ channel_map_in; scalar_t__ channel_map_out; int* table; } ;
typedef TYPE_1__ hb_audio_remap_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__,int*) ;
 int FUNC_2 (char*,int) ;

void FUNC_3(hb_audio_remap_t *VAR_3,
                                       uint64_t VAR_4)
{
    if (VAR_3 != ((void*)0))
    {
        int VAR_5;
        VAR_3->remap_needed = 0;


        if (VAR_4 == VAR_1)
        {
            VAR_4 = VAR_0;
        }
        VAR_3->nchannels = FUNC_0(VAR_4);


        if (VAR_3->nchannels > VAR_2)
        {
            FUNC_2("hb_audio_remap_set_channel_layout: too many channels (%d)",
                   VAR_3->nchannels);
            return;
        }
        if (VAR_3->channel_map_in == VAR_3->channel_map_out)
        {
            return;
        }


        FUNC_1(VAR_3->channel_map_out,
                                   VAR_3->channel_map_in, VAR_4,
                                   VAR_3->table);
        for (VAR_5 = 0; VAR_5 < VAR_3->nchannels; VAR_5++)
        {
            if (VAR_3->table[VAR_5] != VAR_5)
            {
                VAR_3->remap_needed = 1;
                break;
            }
        }
    }
}
