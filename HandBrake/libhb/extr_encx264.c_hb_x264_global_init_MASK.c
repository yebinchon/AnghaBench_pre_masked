
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int i_bitdepth; } ;
typedef TYPE_1__ x264_param_t ;
struct TYPE_5__ {int bit_depth; int * picture_init; int * encoder_close; int * encoder_delayed_frames; int * encoder_encode; int * encoder_headers; int * encoder_open; int * param_parse; int * param_apply_fastfirstpass; int * param_apply_profile; int * param_default_preset; int (* param_default ) (TYPE_1__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 void* FUNC_1 (void*,char*) ;
 char* FUNC_2 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* FUNC_4 (int ) ;
 void* FUNC_5 () ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;

void FUNC_6(void)
{

    VAR_3[0].bit_depth = VAR_4;



    VAR_3[0].param_default = VAR_12;
    VAR_3[0].param_default_preset = VAR_13;
    VAR_3[0].param_apply_profile = VAR_11;
    VAR_3[0].param_apply_fastfirstpass = VAR_10;
    VAR_3[0].param_parse = VAR_14;
    VAR_3[0].encoder_open = VAR_9;
    VAR_3[0].encoder_headers = VAR_8;
    VAR_3[0].encoder_encode = VAR_7;
    VAR_3[0].encoder_delayed_frames = VAR_6;
    VAR_3[0].encoder_close = VAR_5;
    VAR_3[0].picture_init = VAR_15;

    if (VAR_3[0].bit_depth == 0)
    {

        VAR_3[0].bit_depth = 8;
        VAR_3[1].bit_depth = 10;
        VAR_3[1].param_default = VAR_12;
        VAR_3[1].param_default_preset = VAR_13;
        VAR_3[1].param_apply_profile = VAR_11;
        VAR_3[1].param_apply_fastfirstpass = VAR_10;
        VAR_3[1].param_parse = VAR_14;
        VAR_3[1].encoder_open = VAR_9;
        VAR_3[1].encoder_headers = VAR_8;
        VAR_3[1].encoder_encode = VAR_7;
        VAR_3[1].encoder_delayed_frames = VAR_6;
        VAR_3[1].encoder_close = VAR_5;
        VAR_3[1].picture_init = VAR_15;
        return;
    }


    VAR_3[1].bit_depth = -1;



    void *VAR_16;
    if (VAR_3[0].bit_depth == 8)
    {
        VAR_16 = FUNC_4(VAR_1);






    }
    else
    {
        VAR_16 = FUNC_4(VAR_2);
    }
    if (VAR_16 == ((void*)0))
    {
        return;
    }

    int VAR_17;
    int VAR_18 = 0;

    int *VAR_19 = (int*)FUNC_1(VAR_16, "x264_bit_depth");
    if (VAR_19 != ((void*)0))
    {
        VAR_18 = *VAR_19;
    }

    VAR_3[1].param_default = FUNC_1(VAR_16, "x264_param_default");
    VAR_3[1].param_default_preset = FUNC_1(VAR_16, "x264_param_default_preset");
    VAR_3[1].param_apply_profile = FUNC_1(VAR_16, "x264_param_apply_profile");
    VAR_3[1].param_apply_fastfirstpass =
                                FUNC_1(VAR_16, "x264_param_apply_fastfirstpass");
    VAR_3[1].param_parse = FUNC_1(VAR_16, "x264_param_parse");

    for (VAR_17 = 140; VAR_17 < 200; VAR_17++)
    {
        char *VAR_20 = FUNC_2("x264_encoder_open_%d", VAR_17);
        VAR_3[1].encoder_open = FUNC_1(VAR_16, VAR_20);
        FUNC_0(VAR_20);
        if (VAR_3[1].encoder_open != ((void*)0))
        {
            break;
        }
    }
    VAR_3[1].encoder_headers = FUNC_1(VAR_16, "x264_encoder_headers");
    VAR_3[1].encoder_encode = FUNC_1(VAR_16, "x264_encoder_encode");
    VAR_3[1].encoder_delayed_frames =
                                FUNC_1(VAR_16, "x264_encoder_delayed_frames");
    VAR_3[1].encoder_close = FUNC_1(VAR_16, "x264_encoder_close");
    VAR_3[1].picture_init = FUNC_1(VAR_16, "x264_picture_init");

    if (VAR_18 > 0 && VAR_18 != VAR_3[0].bit_depth &&
        VAR_3[1].param_default != ((void*)0) &&
        VAR_3[1].param_default_preset != ((void*)0) &&
        VAR_3[1].param_apply_profile != ((void*)0) &&
        VAR_3[1].param_apply_fastfirstpass != ((void*)0) &&
        VAR_3[1].param_parse != ((void*)0) &&
        VAR_3[1].encoder_open != ((void*)0) &&
        VAR_3[1].encoder_headers != ((void*)0) &&
        VAR_3[1].encoder_encode != ((void*)0) &&
        VAR_3[1].encoder_delayed_frames != ((void*)0) &&
        VAR_3[1].encoder_close != ((void*)0) &&
        VAR_3[1].picture_init != ((void*)0))
    {
        VAR_3[1].bit_depth = VAR_18;
    }
}
