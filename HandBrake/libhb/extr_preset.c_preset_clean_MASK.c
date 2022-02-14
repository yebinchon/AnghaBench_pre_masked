
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int hb_value_t ;
struct TYPE_3__ {int format; } ;
typedef TYPE_1__ hb_container_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char const*) ;
 TYPE_1__* FUNC_6 (int *) ;
 char* FUNC_7 (int) ;
 int * FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,char*,int *) ;
 int FUNC_10 (char*,char const*,char const*) ;
 int FUNC_11 (char const*) ;
 char* FUNC_12 (int) ;
 int * FUNC_13 (int *,int) ;
 int FUNC_14 (int *) ;
 char* FUNC_15 (int *) ;
 int * FUNC_16 (char const*) ;
 int FUNC_17 (int) ;
 int FUNC_18 (char const*) ;
 char* FUNC_19 (int) ;
 int FUNC_20 (char const*) ;
 scalar_t__ FUNC_21 (char const*,char*) ;

__attribute__((used)) static void FUNC_22(hb_value_t *VAR_5, hb_value_t *VAR_6)
{
    FUNC_0(VAR_5, VAR_6);



    hb_value_t *VAR_7;
    const char *VAR_8 = ((void*)0);
    int VAR_9;

    VAR_7 = FUNC_8(VAR_5, "PresetName");
    if (VAR_7 != ((void*)0))
        VAR_8 = FUNC_15(VAR_7);

    VAR_7 = FUNC_8(VAR_5, "FileFormat");
    if (VAR_7 != ((void*)0))
    {
        const char *VAR_10, *VAR_11;
        VAR_10 = FUNC_15(VAR_7);
        VAR_9 = FUNC_5(VAR_10);
        if (VAR_9 == VAR_3)
        {
            const hb_container_t *VAR_12 = FUNC_6(((void*)0));
            VAR_9 = VAR_12->format;
            FUNC_10("Preset %s: Invalid container (%s)", VAR_8, VAR_10);
        }
        VAR_11 = FUNC_7(VAR_9);
        VAR_7 = FUNC_16(VAR_11);
        FUNC_9(VAR_5, "FileFormat", VAR_7);
    }
    else
    {
        const hb_container_t *VAR_13 = FUNC_6(((void*)0));
        VAR_9 = VAR_13->format;
    }
    VAR_7 = FUNC_8(VAR_5, "VideoEncoder");
    if (VAR_7 != ((void*)0))
    {
        const char *VAR_14, *VAR_15;
        int VAR_16;
        VAR_14 = FUNC_15(VAR_7);
        VAR_16 = FUNC_18(VAR_14);
        if (VAR_16 == VAR_4)
        {
            VAR_16 = FUNC_17(VAR_9);
            FUNC_10("Preset %s: Invalid video encoder (%s)", VAR_8, VAR_14);
        }
        VAR_15 = FUNC_19(VAR_16);
        VAR_7 = FUNC_16(VAR_15);
        FUNC_9(VAR_5, "VideoEncoder", VAR_7);
    }
    VAR_7 = FUNC_8(VAR_5, "VideoFramerate");
    if (VAR_7 != ((void*)0))
    {
        const char *VAR_17;
        VAR_17 = FUNC_15(VAR_7);
        if (FUNC_21(VAR_17, "auto"))
        {
            int VAR_18 = FUNC_20(VAR_17);
            if (VAR_18 < 0)
            {
                if (FUNC_21(VAR_17, "same as source"))
                {
                    FUNC_10("Preset %s: Invalid video framerate (%s)",
                             VAR_8, VAR_17);
                }
                VAR_7 = FUNC_16("auto");
                FUNC_9(VAR_5, "VideoFramerate", VAR_7);
            }
        }
    }
    VAR_7 = FUNC_8(VAR_5, "AudioEncoderFallback");
    if (VAR_7 != ((void*)0))
    {
        const char *VAR_19, *VAR_20;
        int VAR_21;
        VAR_19 = FUNC_15(VAR_7);
        VAR_21 = FUNC_2(VAR_19);
        if (VAR_21 == VAR_0)
        {
            VAR_21 = FUNC_1(VAR_9);
            FUNC_10("Preset %s: Invalid audio fallback encoder (%s)",
                     VAR_8, VAR_19);
        }
        VAR_20 = FUNC_3(VAR_21);
        VAR_7 = FUNC_16(VAR_20);
        FUNC_9(VAR_5, "AudioEncoderFallback", VAR_7);
    }
    hb_value_t *VAR_22 = FUNC_8(VAR_5, "AudioList");
    int VAR_23 = FUNC_14(VAR_22);
    int VAR_24;
    for (VAR_24 = 0; VAR_24 < VAR_23; VAR_24++)
    {
        hb_value_t *VAR_25 = FUNC_13(VAR_22, VAR_24);
        VAR_7 = FUNC_8(VAR_25, "AudioEncoder");
        if (VAR_7 != ((void*)0))
        {
            const char *VAR_26, *VAR_27;
            int VAR_28;
            VAR_26 = FUNC_15(VAR_7);
            VAR_28 = FUNC_2(VAR_26);
            if (VAR_28 == VAR_0)
            {
                VAR_28 = FUNC_1(VAR_9);
                FUNC_10("Preset %s: Invalid audio encoder (%s)",
                         VAR_8, VAR_26);
            }
            VAR_27 = FUNC_3(VAR_28);
            VAR_7 = FUNC_16(VAR_27);
            FUNC_9(VAR_25, "AudioEncoder", VAR_7);
        }
        VAR_7 = FUNC_8(VAR_25, "AudioSamplerate");
        if (VAR_7 != ((void*)0))
        {
            const char *VAR_29;
            VAR_29 = FUNC_15(VAR_7);
            if (FUNC_21(VAR_29, "auto"))
            {
                int VAR_30 = FUNC_4(VAR_29);
                if (VAR_30 < 0)
                {
                    FUNC_10("Preset %s: Invalid audio samplerate (%s)",
                             VAR_8, VAR_29);
                    VAR_7 = FUNC_16("auto");
                    FUNC_9(VAR_25, "AudioSamplerate", VAR_7);
                }
            }
        }
        VAR_7 = FUNC_8(VAR_25, "AudioMixdown");
        if (VAR_7 != ((void*)0))
        {
            const char *VAR_31, *VAR_32;
            VAR_31 = FUNC_15(VAR_7);
            int VAR_33 = FUNC_11(VAR_31);
            if (VAR_33 == VAR_2)
            {

                VAR_33 = VAR_1;
                FUNC_10("Preset %s: Invalid audio mixdown (%s)",
                         VAR_8, VAR_31);
            }
            VAR_32 = FUNC_12(VAR_33);
            VAR_7 = FUNC_16(VAR_32);
            FUNC_9(VAR_25, "AudioMixdown", VAR_7);
        }
    }
}
