
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int const hb_value_t ;
typedef int const hb_value_array_t ;
struct TYPE_4__ {int list_audio; } ;
typedef TYPE_1__ hb_title_t ;
typedef int hb_handle_t ;
typedef int const hb_dict_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int const*,int const*,TYPE_1__*,int,int,int,char const*,int,int,int const*) ;
 int const* FUNC_1 (int const*,int*) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int const**) ;
 int const* FUNC_5 (int const*,char*) ;
 int const* FUNC_6 () ;
 int FUNC_7 (int const*,char*,int const*) ;
 int FUNC_8 (char*,...) ;
 TYPE_1__* FUNC_9 (int *,int) ;
 scalar_t__ FUNC_10 (int ) ;
 int const* FUNC_11 (int const*,int) ;
 int const* FUNC_12 () ;
 int FUNC_13 (int const*) ;
 int const* FUNC_14 (int const*) ;
 int FUNC_15 (int const*) ;
 int FUNC_16 (int const*) ;
 char* FUNC_17 (int const*) ;
 scalar_t__ FUNC_18 (int const*) ;
 int FUNC_19 (char const*,char*) ;
 scalar_t__ FUNC_20 (int const*) ;

int FUNC_21(hb_handle_t *VAR_2, int VAR_3,
                            const hb_dict_t *VAR_4, hb_dict_t *VAR_5)
{
    hb_title_t *VAR_6 = FUNC_9(VAR_2, VAR_3);
    if (VAR_6 == ((void*)0))
    {

        FUNC_8("Invalid title index (%d)", VAR_3);
        return -1;
    }
    if (FUNC_10(VAR_6->list_audio) <= 0)
    {

        return 0;
    }

    int VAR_7 = FUNC_2(VAR_5);
    if (VAR_7 == VAR_0)
    {
        return -1;
    }

    hb_dict_t *VAR_8 = FUNC_5(VAR_5, "Audio");
    if (VAR_8 == ((void*)0))
    {
        VAR_8 = FUNC_6();
        FUNC_7(VAR_5, "Audio", VAR_8);
    }
    int VAR_9;
    hb_value_t *VAR_10 = FUNC_1(VAR_4, &VAR_9);
    if (VAR_10 == ((void*)0))
    {
        return -1;
    }
    int VAR_11 = 0;
    FUNC_7(VAR_8, "CopyMask", VAR_10);
    hb_value_t *VAR_12 = FUNC_5(VAR_4, "AudioEncoderFallback");
    if (VAR_12 != ((void*)0))
    {
        FUNC_7(VAR_8, "FallbackEncoder",
                    FUNC_14(VAR_12));
        if (FUNC_18(VAR_12) == VAR_1)
        {
            const char * VAR_13 = FUNC_17(VAR_12);
            VAR_11 = FUNC_3(VAR_13);
            if (VAR_11 == 0)
            {
                FUNC_8("Invalid fallback audio codec (%s)", VAR_13);
                return -1;
            }
        }
        else
        {
            VAR_11 = FUNC_16(VAR_12);
        }
    }
    if (FUNC_20(VAR_4) < 0)
        return -1;

    hb_value_array_t *VAR_14 = FUNC_5(VAR_8, "AudioList");
    if (VAR_14 == ((void*)0))
    {
        VAR_14 = FUNC_12();
        FUNC_7(VAR_8, "AudioList", VAR_14);
    }

    int VAR_15 = 1;
    const char *VAR_16;
    VAR_16 = FUNC_17(FUNC_5(VAR_4, "AudioTrackSelectionBehavior"));
    if (VAR_16 != ((void*)0))
    {
        if (!FUNC_19(VAR_16, "none"))
            return 0;
        else if (!FUNC_19(VAR_16, "all"))
            VAR_15 = 2;
    }



    hb_dict_t *VAR_17 = FUNC_6();


    int VAR_18;
    hb_value_array_t *VAR_19 = FUNC_5(VAR_4, "AudioLanguageList");
    VAR_18 = FUNC_15(FUNC_5(VAR_4, "AudioSecondaryEncoderMode"));
    int VAR_20 = FUNC_13(VAR_19);
    int VAR_21;
    for (VAR_21 = 0; VAR_21 < VAR_20; VAR_21++)
    {
        const char *VAR_22;
        VAR_22 = FUNC_17(FUNC_11(VAR_19, VAR_21));
        FUNC_0(VAR_14, VAR_4, VAR_6, VAR_7, VAR_9, VAR_11,
                           VAR_22, VAR_15, VAR_18, VAR_17);
    }

    if (VAR_20 <= 0)
    {
        FUNC_0(VAR_14, VAR_4, VAR_6, VAR_7, VAR_9, VAR_11,
                           "any", VAR_15, VAR_18, VAR_17);
    }
    FUNC_4(&VAR_17);
    return 0;
}
