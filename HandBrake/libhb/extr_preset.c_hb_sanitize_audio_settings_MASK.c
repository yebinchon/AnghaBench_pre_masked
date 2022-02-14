
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int hb_value_t ;
struct TYPE_7__ {int list_audio; } ;
typedef TYPE_2__ hb_title_t ;
struct TYPE_6__ {int samplerate; int channel_layout; } ;
struct TYPE_8__ {TYPE_1__ in; } ;
typedef TYPE_3__ hb_audio_config_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 double VAR_4 ;
 int FUNC_0 (int,int,int,int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int) ;
 double FUNC_4 (int,double) ;
 double FUNC_5 (int) ;
 int FUNC_6 (int,float*,float*,float*,int*) ;
 int * FUNC_7 (int *,char*) ;
 double FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,char*) ;
 char* FUNC_10 (int *,char*) ;
 int FUNC_11 (int *,char*,int ) ;
 TYPE_3__* FUNC_12 (int ,int) ;
 int FUNC_13 (int,int,int) ;
 int FUNC_14 (char const*) ;
 int FUNC_15 (int) ;
 int FUNC_16 (double) ;
 int FUNC_17 (int) ;
 int FUNC_18 (int ) ;

void FUNC_19(const hb_title_t * VAR_5,
                                hb_value_t * VAR_6)
{
    const char * VAR_7;
    const char * VAR_8;
    int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
    int VAR_14;
    double VAR_15;
    hb_value_t * VAR_16;
    hb_audio_config_t * VAR_17 = ((void*)0);

    VAR_9 = FUNC_9(VAR_6, "Track");
    VAR_8 = FUNC_10(VAR_6, "Encoder");
    VAR_10 = FUNC_2(VAR_8);
    VAR_7 = FUNC_10(VAR_6, "Mixdown");
    VAR_11 = FUNC_14(VAR_7);
    VAR_12 = FUNC_9(VAR_6, "Bitrate");
    VAR_15 = FUNC_8(VAR_6, "Quality");
    VAR_13 = FUNC_9(VAR_6, "Samplerate");
    VAR_16 = FUNC_7(VAR_6, "Quality");
    VAR_14 = !(VAR_12 > 0 || VAR_16 == ((void*)0) ||
                       VAR_15 == VAR_4);

    if (VAR_5 != ((void*)0))
    {
        VAR_17 = FUNC_12(VAR_5->list_audio, VAR_9);
    }
    if (VAR_13 == 0 && VAR_17 != ((void*)0))
    {
        VAR_13 = VAR_17->in.samplerate;
    }

    if (VAR_10 & VAR_1)
    {
        VAR_11 = VAR_2;
        FUNC_11(VAR_6, "Mixdown",
                    FUNC_18(FUNC_15(VAR_11)));
        FUNC_11(VAR_6, "Samplerate", FUNC_17(0));
        FUNC_11(VAR_6, "DRC", FUNC_16(0.0));
    }
    else
    {
        int VAR_18 = VAR_0;
        if (VAR_17 != ((void*)0))
        {
            VAR_18 = VAR_17->in.channel_layout;
        }
        if (VAR_11 == VAR_2)
        {
            VAR_11 = VAR_3;
        }
        VAR_11 = FUNC_13(VAR_10, VAR_18, VAR_11);
        if (VAR_14)
        {
            float VAR_19, VAR_20, VAR_21;
            int VAR_22;
            FUNC_6(VAR_10, &VAR_19, &VAR_20, &VAR_21, &VAR_22);
            if (VAR_15 < VAR_19 || VAR_15 > VAR_20)
            {
                VAR_15 = FUNC_5(VAR_10);
            }
            else
            {
                VAR_15 = FUNC_4(VAR_10, VAR_15);
            }
        }
        else
        {
            if (VAR_12 != -1)
            {
                VAR_12 = FUNC_0(VAR_10, VAR_12,
                                                    VAR_13, VAR_11);
            }
            else
            {
                VAR_12 = FUNC_1(VAR_10, VAR_13, VAR_11);
            }
        }
        FUNC_11(VAR_6, "Mixdown",
                    FUNC_18(FUNC_15(VAR_11)));
    }
    if (VAR_14)
    {
        VAR_12 = -1;
    }
    else
    {
        VAR_15 = VAR_4;
    }
    FUNC_11(VAR_6, "Quality", FUNC_16(VAR_15));
    FUNC_11(VAR_6, "Bitrate", FUNC_17(VAR_12));
    FUNC_11(VAR_6, "Encoder",
                FUNC_18(FUNC_3(VAR_10)));
}
