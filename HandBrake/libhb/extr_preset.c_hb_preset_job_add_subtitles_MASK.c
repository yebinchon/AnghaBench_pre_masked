
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct subtitle_behavior_s {int one; int burn_foreign; int make_default; int burn_first; int one_burned; int* used; void* burn_bd; void* burn_dvd; } ;
struct TYPE_12__ {char* iso639_2; } ;
typedef TYPE_2__ iso639_lang_t ;
typedef int const hb_value_t ;
typedef int const hb_value_array_t ;
struct TYPE_13__ {int list_subtitle; int list_audio; } ;
typedef TYPE_3__ hb_title_t ;
struct TYPE_14__ {scalar_t__ source; int name; } ;
typedef TYPE_4__ hb_subtitle_t ;
typedef int hb_handle_t ;
typedef int const hb_dict_t ;
struct TYPE_11__ {char* iso639_2; } ;
struct TYPE_15__ {TYPE_1__ lang; } ;
typedef TYPE_5__ hb_audio_config_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const*,int,int ,int ,int,int ) ;
 int FUNC_1 (int const*,TYPE_3__*,int,char const*,struct subtitle_behavior_s*) ;
 int* FUNC_2 (int,int) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int const*) ;
 int const* FUNC_5 (int const*,char*) ;
 int const* FUNC_6 () ;
 int FUNC_7 (int const*,char*,int const*) ;
 int FUNC_8 (char*,int) ;
 TYPE_3__* FUNC_9 (int *,int) ;
 TYPE_5__* FUNC_10 (int ,int) ;
 int FUNC_11 (int ) ;
 TYPE_4__* FUNC_12 (int ,int) ;
 int FUNC_13 (scalar_t__,int) ;
 int const* FUNC_14 (int const*,int) ;
 int const* FUNC_15 () ;
 int FUNC_16 (int const*) ;
 int const* FUNC_17 (int) ;
 int FUNC_18 (int const*) ;
 void* FUNC_19 (int const*) ;
 char* FUNC_20 (int const*) ;
 TYPE_2__* FUNC_21 () ;
 int FUNC_22 (char const*,char*) ;
 int FUNC_23 (char const*,char*) ;
 scalar_t__ FUNC_24 (char const*,char const*,int) ;

int FUNC_25(hb_handle_t *VAR_3, int VAR_4,
                                const hb_dict_t *VAR_5, hb_dict_t *VAR_6)
{
    hb_title_t *VAR_7 = FUNC_9(VAR_3, VAR_4);
    if (VAR_7 == ((void*)0))
    {

        FUNC_8("Invalid title index (%d)", VAR_4);
        return -1;
    }

    int VAR_8 = FUNC_4(VAR_6);
    if (VAR_8 == VAR_2)
    {
        return -1;
    }



    hb_dict_t *VAR_9 = FUNC_5(VAR_6, "Audio");
    hb_value_array_t *VAR_10 = FUNC_5(VAR_9, "AudioList");
    const char *VAR_11 = ((void*)0);
    if (FUNC_16(VAR_10) > 0)
    {
        int VAR_12;
        hb_value_t *VAR_13 = FUNC_14(VAR_10, 0);
        VAR_12 = FUNC_19(FUNC_5(VAR_13, "Track"));
        if (FUNC_11(VAR_7->list_audio) > VAR_12)
        {
            hb_audio_config_t *VAR_14;
            VAR_14 = FUNC_10(VAR_7->list_audio, VAR_12);
            if (VAR_14 != ((void*)0))
                VAR_11 = VAR_14->lang.iso639_2;
        }
    }

    int VAR_15 = FUNC_11(VAR_7->list_subtitle);
    if (VAR_15 == 0)
        return 0;

    hb_dict_t *VAR_16 = FUNC_5(VAR_6, "Subtitle");
    if (VAR_16 == ((void*)0))
    {
        VAR_16 = FUNC_6();
        FUNC_7(VAR_6, "Subtitle", VAR_16);
    }
    hb_value_array_t *VAR_17 = FUNC_5(VAR_16, "SubtitleList");
    if (VAR_17 == ((void*)0))
    {
        VAR_17 = FUNC_15();
        FUNC_7(VAR_16, "SubtitleList", VAR_17);
    }

    int VAR_18 = 0;
    int VAR_19 = 0;
    int VAR_20;

    struct subtitle_behavior_s VAR_21;
    VAR_21.one = 0;
    VAR_21.burn_foreign = 0;
    VAR_21.make_default = 0;
    VAR_21.burn_first = 0;
    VAR_21.burn_dvd = 0;
    VAR_21.burn_bd = 0;
    VAR_21.one_burned = 0;


    VAR_21.used = FUNC_2(VAR_15, sizeof(*VAR_21.used));



    int VAR_22, VAR_23;
    VAR_22 = FUNC_16(VAR_17);
    for (VAR_23 = 0; VAR_23 < VAR_22; VAR_23++)
    {
        hb_value_t *VAR_24 = FUNC_14(VAR_17, VAR_23);
        int VAR_25 = FUNC_19(FUNC_5(VAR_24, "Track"));
        VAR_21.used[VAR_25] = 1;
    }

    const char *VAR_26;
    VAR_26 = FUNC_20(FUNC_5(VAR_5,
                                        "SubtitleTrackSelectionBehavior"));
    if (VAR_26 != ((void*)0))
    {
        if (!FUNC_22(VAR_26, "first"))
            VAR_18 = 1;
        else if (!FUNC_22(VAR_26, "all"))
            VAR_18 = 2;
    }

    VAR_26 = FUNC_20(FUNC_5(VAR_5, "SubtitleBurnBehavior"));
    if (VAR_26 != ((void*)0))
    {
        if (!FUNC_22(VAR_26, "foreign"))
            VAR_19 = 1;
        else if (!FUNC_22(VAR_26, "first"))
            VAR_19 = 2;
        else if (!FUNC_22(VAR_26, "foreign_first"))
            VAR_19 = 3;
    }

    VAR_21.burn_dvd = FUNC_19(FUNC_5(VAR_5,
                                                     "SubtitleBurnDVDSub"));
    VAR_21.burn_bd = FUNC_19(FUNC_5(VAR_5,
                                                     "SubtitleBurnBDSub"));

    VAR_20 = VAR_19 == 1 || VAR_19 == 3;
    VAR_21.burn_first = VAR_19 == 2 || VAR_19 == 3;

    int VAR_27, VAR_28;
    VAR_27 = FUNC_18(FUNC_5(VAR_5,
                                            "SubtitleAddForeignAudioSearch"));
    VAR_28 = FUNC_18(FUNC_5(VAR_5,
                                            "SubtitleAddForeignAudioSubtitle"));



    hb_value_array_t * VAR_29 = FUNC_5(VAR_5, "SubtitleLanguageList");
    const iso639_lang_t * VAR_30 = FUNC_21();
    const char * VAR_31 = VAR_30->iso639_2;

    VAR_22 = FUNC_16(VAR_29);
    if (VAR_22 > 0)
    {
        VAR_31 = FUNC_20(FUNC_14(VAR_29, 0));
    }
    if (!FUNC_23(VAR_31, VAR_30->iso639_2))
    {
        if (VAR_11 != ((void*)0))
        {
            VAR_31 = VAR_11;
            VAR_28 = 0;
        }
        else
        {
            VAR_27 = VAR_28 = 0;
        }
    }

    int VAR_32;
    if (VAR_11 != ((void*)0) &&
        VAR_28 && FUNC_24(VAR_11, VAR_31, 4))
    {




        VAR_27 = 0;
        VAR_21.one = 1;
        VAR_21.burn_foreign = VAR_20;
        VAR_21.make_default = 1;
        FUNC_1(VAR_17, VAR_7, VAR_8, VAR_31, &VAR_21);
    }

    hb_dict_t *VAR_33 = FUNC_5(VAR_16, "Search");
    if (VAR_33 == ((void*)0))
    {
        VAR_33 = FUNC_6();
        FUNC_7(VAR_16, "Search", VAR_33);
    }
    if (VAR_11 != ((void*)0) &&
        VAR_27 && !FUNC_24(VAR_11, VAR_31, 4))
    {


        int VAR_34 = VAR_20 || VAR_21.burn_first;

        FUNC_7(VAR_33, "Enable", FUNC_17(1));
        FUNC_7(VAR_33, "Default", FUNC_17(!VAR_34));
        FUNC_7(VAR_33, "Forced", FUNC_17(1));
        FUNC_7(VAR_33, "Burn", FUNC_17(VAR_34));
    }
    else
    {
        FUNC_7(VAR_33, "Enable", FUNC_17(0));
    }

    if (VAR_18 > 0)
    {
        int VAR_35;
        VAR_21.one = VAR_18 == 1;
        VAR_21.burn_foreign = 0;
        VAR_21.make_default = 0;
        for (VAR_35 = 0; VAR_35 < VAR_22; VAR_35++)
        {
            const char *VAR_36;
            VAR_36 = FUNC_20(FUNC_14(VAR_29, VAR_35));
            FUNC_1(VAR_17, VAR_7, VAR_8, VAR_36, &VAR_21);
        }
        if (VAR_22 <= 0)
        {

            FUNC_1(VAR_17, VAR_7, VAR_8, "und", &VAR_21);
        }
    }

    if (FUNC_18(FUNC_5(VAR_5, "SubtitleAddCC")))
    {

        for (VAR_32 = 0; VAR_32 < VAR_15; VAR_32++)
        {
            if (VAR_21.used[VAR_32])
            {
                continue;
            }
            hb_subtitle_t *VAR_37 = FUNC_12(VAR_7->list_subtitle, VAR_32);
            if (VAR_37->source == VAR_0 || VAR_37->source == VAR_1)
            {
                int VAR_38;
                VAR_38 = !VAR_21.one_burned &&
                       (!FUNC_13(VAR_37->source, VAR_8) ||
                        VAR_21.burn_first);
                VAR_21.used[VAR_32] = 1;
                VAR_21.one_burned |= VAR_38;
                FUNC_0(VAR_17, VAR_32, 0 , 0 , VAR_38,
                             VAR_37->name);
                break;
            }
        }
    }
    FUNC_3(VAR_21.used);

    return 0;
}
