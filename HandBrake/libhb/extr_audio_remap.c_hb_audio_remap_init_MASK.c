
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int hb_chan_map_t ;
struct TYPE_5__ {scalar_t__ remap_needed; int * channel_map_out; int * channel_map_in; int * remap; } ;
typedef TYPE_1__ hb_audio_remap_t ;
typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

hb_audio_remap_t* FUNC_4(enum AVSampleFormat VAR_6,
                                      hb_chan_map_t *VAR_7,
                                      hb_chan_map_t *VAR_8)
{
    hb_audio_remap_t *VAR_9 = FUNC_1(1, sizeof(hb_audio_remap_t));
    if (VAR_9 == ((void*)0))
    {
        FUNC_3("hb_audio_remap_init: failed to allocate remap");
        goto fail;
    }


    switch (VAR_6)
    {
        case 128:
        case 132:
        case 130:
        case 134:
        case 136:
            VAR_9->remap = &VAR_2;
            break;

        case 129:
            VAR_9->remap = &VAR_5;
            break;

        case 133:
            VAR_9->remap = &VAR_3;
            break;

        case 131:
            VAR_9->remap = &VAR_4;
            break;

        case 135:
            VAR_9->remap = &VAR_1;
            break;

        case 137:
            VAR_9->remap = &VAR_0;
            break;

        default:
            FUNC_3("hb_audio_remap_init: unsupported sample format '%s'",
                     FUNC_0(VAR_6));
            goto fail;
    }


    if (VAR_8 == ((void*)0) || VAR_7 == ((void*)0))
    {
        FUNC_3("hb_audio_remap_init: invalid channel map(s)");
        goto fail;
    }
    VAR_9->channel_map_in = VAR_8;
    VAR_9->channel_map_out = VAR_7;


    VAR_9->remap_needed = 0;

    return VAR_9;

fail:
    FUNC_2(VAR_9);
    return ((void*)0);
}
