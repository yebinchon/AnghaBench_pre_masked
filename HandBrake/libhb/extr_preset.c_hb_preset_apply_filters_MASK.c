
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_value_t ;
typedef int hb_dict_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (int const*,char*) ;
 int FUNC_4 (int *,char*) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *,char*,int *) ;
 int FUNC_7 (char*,...) ;
 int * FUNC_8 (int,char const*,char const*,char const*) ;
 char* FUNC_9 (char*,int,int) ;
 scalar_t__ FUNC_10 (int,int *) ;
 int * FUNC_11 () ;
 int FUNC_12 (int **) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 char const* FUNC_15 (int *) ;
 char* FUNC_16 (int *) ;
 int * FUNC_17 (int) ;
 int * FUNC_18 (char*) ;
 scalar_t__ FUNC_19 (int *) ;
 int FUNC_20 (int*,int*,int*) ;
 scalar_t__ FUNC_21 (char const*,char*) ;

int FUNC_22(const hb_dict_t *VAR_15, hb_dict_t *VAR_16)
{
    hb_value_t * VAR_17, * VAR_18, * VAR_19;
    hb_dict_t * VAR_20;

    int VAR_21, VAR_22, VAR_23;
    FUNC_20(&VAR_21, &VAR_22, &VAR_23);


    VAR_17 = FUNC_5();
    FUNC_6(VAR_16, "Filters", VAR_17);
    VAR_18 = FUNC_11();
    FUNC_6(VAR_17, "FilterList", VAR_18);


    hb_value_t *VAR_24 = FUNC_3(VAR_15, "PictureDetelecine");
    if (VAR_24 != ((void*)0))
    {
        const char *VAR_25;
        VAR_25 = FUNC_15(FUNC_3(VAR_15,
                                                "PictureDetelecineCustom"));
        VAR_20 = FUNC_8(
            VAR_5, FUNC_15(VAR_24), ((void*)0), VAR_25);

        if (VAR_20 == ((void*)0))
        {
            char *VAR_26 = FUNC_16(VAR_24);
            FUNC_7("Invalid detelecine filter settings (%s)", VAR_26);
            FUNC_0(VAR_26);
            return -1;
        }
        else if (!FUNC_4(VAR_20, "disable"))
        {
            VAR_19 = FUNC_5();
            FUNC_6(VAR_19, "ID", FUNC_17(VAR_5));
            FUNC_6(VAR_19, "Settings", VAR_20);
            FUNC_2(VAR_18, VAR_19);
        }
        else
        {
            FUNC_12(&VAR_20);
        }
    }

    const char *VAR_27;
    VAR_27 = FUNC_15(FUNC_3(VAR_15,
                                      "PictureCombDetectPreset"));
    if (VAR_27 != ((void*)0))
    {
        const char *VAR_28;
        VAR_28 = FUNC_15(FUNC_3(VAR_15,
                                          "PictureCombDetectCustom"));
        VAR_20 = FUNC_8(VAR_1,
                                                VAR_27, ((void*)0), VAR_28);
        if (VAR_20 == ((void*)0))
        {
            FUNC_7("Invalid comb detect filter preset (%s)", VAR_27);
            return -1;
        }
        else if (!FUNC_4(VAR_20, "disable"))
        {
            VAR_19 = FUNC_5();
            FUNC_6(VAR_19, "ID", FUNC_17(VAR_1));
            FUNC_6(VAR_19, "Settings", VAR_20);
            FUNC_2(VAR_18, VAR_19);
        }
        else
        {
            FUNC_12(&VAR_20);
        }
    }


    const char *VAR_29, *VAR_30, *VAR_31;
    VAR_29 = FUNC_15(FUNC_3(VAR_15,
                                                   "PictureDeinterlaceFilter"));
    VAR_30 = FUNC_15(FUNC_3(VAR_15,
                                                   "PictureDeinterlacePreset"));
    VAR_31 = FUNC_15(FUNC_3(VAR_15,
                                                   "PictureDeinterlaceCustom"));
    if (VAR_29 != ((void*)0) && VAR_30 != ((void*)0) &&
        FUNC_21(VAR_29, "off"))
    {
        int VAR_32;
        if (!FUNC_21(VAR_29, "decomb"))
        {
            VAR_32 = VAR_3;
        }
        else if (!FUNC_21(VAR_29, "deinterlace"))
        {
            VAR_32 = VAR_4;
        }
        else
        {
            FUNC_7("Invalid deinterlace filter (%s)", VAR_29);
            return -1;
        }
        VAR_20 = FUNC_8(
                        VAR_32, VAR_30, ((void*)0), VAR_31);
        if (VAR_20 == ((void*)0))
        {
            FUNC_7("Invalid deinterlace filter preset (%s)", VAR_30);
            return -1;
        }
        if (!FUNC_4(VAR_20, "disable"))
        {
            VAR_19 = FUNC_5();
            FUNC_6(VAR_19, "ID", FUNC_17(VAR_32));
            FUNC_6(VAR_19, "Settings", VAR_20);
            FUNC_2(VAR_18, VAR_19);
        }
        else
        {
            FUNC_12(&VAR_20);
        }
    }


    int VAR_33;
    hb_value_t *VAR_34 = FUNC_3(VAR_15, "PictureDenoiseFilter");
    VAR_33 = FUNC_19(VAR_34) == VAR_14 ? (
        !FUNC_21(FUNC_15(VAR_34), "off") ? 0 :
        !FUNC_21(FUNC_15(VAR_34), "nlmeans") ? 1 : 2) :
        FUNC_14(VAR_34);

    if (VAR_33 != 0)
    {
        int VAR_35 = VAR_33 == 1 ? VAR_9 : VAR_7;
        const char *VAR_36, *VAR_37, *VAR_38;
        VAR_36 = FUNC_15(
                            FUNC_3(VAR_15, "PictureDenoisePreset"));
        if (VAR_36 != ((void*)0))
        {
            VAR_37 = FUNC_15(
                        FUNC_3(VAR_15, "PictureDenoiseTune"));
            VAR_38 = FUNC_15(
                        FUNC_3(VAR_15, "PictureDenoiseCustom"));

            VAR_20 = FUNC_8(VAR_35,
                                VAR_36, VAR_37, VAR_38);
            if (VAR_20 == ((void*)0))
            {
                FUNC_7("Invalid denoise filter settings (%s%s%s)",
                         VAR_36,
                         VAR_37 ? "," : "",
                         VAR_37 ? VAR_37 : "");
                return -1;
            }
            else if (!FUNC_4(VAR_20, "disable"))
            {
                VAR_19 = FUNC_5();
                FUNC_6(VAR_19, "ID", FUNC_17(VAR_35));
                FUNC_6(VAR_19, "Settings", VAR_20);
                FUNC_2(VAR_18, VAR_19);
            }
            else
            {
                FUNC_12(&VAR_20);
            }
        }
    }


    const char *VAR_39, *VAR_40, *VAR_41;
    VAR_39 = FUNC_15(FUNC_3(VAR_15,
                                                   "PictureChromaSmoothPreset"));
    VAR_40 = FUNC_15(FUNC_3(VAR_15,
                                                   "PictureChromaSmoothTune"));
    VAR_41 = FUNC_15(FUNC_3(VAR_15,
                                                   "PictureChromaSmoothCustom"));
    if (VAR_39 != ((void*)0) &&
        FUNC_21(VAR_39, "off"))
    {
        int VAR_42 = VAR_0;
        VAR_20 = FUNC_8(VAR_42,
                            VAR_39, VAR_40, VAR_41);
        if (VAR_20 == ((void*)0))
        {
            FUNC_7("Invalid chroma smooth filter settings (%s%s%s)",
                     VAR_39,
                     VAR_40 ? "," : "",
                     VAR_40 ? VAR_40 : "");
            return -1;
        }
        else if (!FUNC_4(VAR_20, "disable"))
        {
            VAR_19 = FUNC_5();
            FUNC_6(VAR_19, "ID", FUNC_17(VAR_42));
            FUNC_6(VAR_19, "Settings", VAR_20);
            FUNC_2(VAR_18, VAR_19);
        }
        else
        {
            FUNC_12(&VAR_20);
        }
    }


    const char *VAR_43, *VAR_44, *VAR_45, *VAR_46;
    VAR_43 = FUNC_15(FUNC_3(VAR_15,
                                                   "PictureSharpenFilter"));
    VAR_44 = FUNC_15(FUNC_3(VAR_15,
                                                   "PictureSharpenPreset"));
    VAR_45 = FUNC_15(FUNC_3(VAR_15,
                                                   "PictureSharpenTune"));
    VAR_46 = FUNC_15(FUNC_3(VAR_15,
                                                   "PictureSharpenCustom"));
    if (VAR_43 != ((void*)0) && VAR_44 != ((void*)0) &&
        FUNC_21(VAR_43, "off"))
    {
        int VAR_47;
        if (!FUNC_21(VAR_43, "lapsharp"))
        {
            VAR_47 = VAR_8;
        }
        else if (!FUNC_21(VAR_43, "unsharp"))
        {
            VAR_47 = VAR_12;
        }
        else
        {
            FUNC_7("Invalid sharpen filter (%s)", VAR_43);
            return -1;
        }
        VAR_20 = FUNC_8(VAR_47,
                            VAR_44, VAR_45, VAR_46);
        if (VAR_20 == ((void*)0))
        {
            FUNC_7("Invalid sharpen filter settings (%s%s%s)",
                     VAR_44,
                     VAR_45 ? "," : "",
                     VAR_45 ? VAR_45 : "");
            return -1;
        }
        else if (!FUNC_4(VAR_20, "disable"))
        {
            VAR_19 = FUNC_5();
            FUNC_6(VAR_19, "ID", FUNC_17(VAR_47));
            FUNC_6(VAR_19, "Settings", VAR_20);
            FUNC_2(VAR_18, VAR_19);
        }
        else
        {
            FUNC_12(&VAR_20);
        }
    }


    const char * VAR_48 = FUNC_15(
                                FUNC_3(VAR_15, "PictureDeblockPreset"));
    if (VAR_48 != ((void*)0))
    {
        const char * VAR_49 = FUNC_15(
                                FUNC_3(VAR_15, "PictureDeblockTune"));
        const char * VAR_50 = FUNC_15(
                                FUNC_3(VAR_15, "PictureDeblockCustom"));
        VAR_20 = FUNC_8(VAR_2,
                                    VAR_48, VAR_49, VAR_50);
        if (VAR_20 == ((void*)0))
        {
            FUNC_7("Invalid deblock filter settings (%s)", VAR_48);
            return -1;
        }
        else if (!FUNC_4(VAR_20, "disable"))
        {
            VAR_19 = FUNC_5();
            FUNC_6(VAR_19, "ID", FUNC_17(VAR_2));
            FUNC_6(VAR_19, "Settings", VAR_20);
            FUNC_2(VAR_18, VAR_19);
        }
        else
        {
            FUNC_12(&VAR_20);
        }
    }


    char *VAR_51 = FUNC_16(
                        FUNC_3(VAR_15, "PictureRotate"));
    if (VAR_51 != ((void*)0))
    {
        VAR_20 = FUNC_8(VAR_11,
                                                      ((void*)0), ((void*)0), VAR_51);
        if (VAR_20 == ((void*)0))
        {
            FUNC_7("Invalid rotate filter settings (%s)", VAR_51);
            return -1;
        }
        else if (!FUNC_4(VAR_20, "disable"))
        {
            VAR_19 = FUNC_5();
            FUNC_6(VAR_19, "ID", FUNC_17(VAR_11));
            FUNC_6(VAR_19, "Settings", VAR_20);
            FUNC_2(VAR_18, VAR_19);
        }
        else
        {
            FUNC_12(&VAR_20);
        }
    }
    FUNC_0(VAR_51);


    if (FUNC_13(FUNC_3(VAR_15, "VideoGrayScale")))
    {
        VAR_19 = FUNC_5();
        FUNC_6(VAR_19, "ID", FUNC_17(VAR_6));
        FUNC_2(VAR_18, VAR_19);
    }


    char *VAR_52 = FUNC_16(FUNC_3(VAR_15, "PicturePad"));
    if (VAR_52 != ((void*)0))
    {
        VAR_20 = FUNC_8(VAR_10,
                                                      ((void*)0), ((void*)0), VAR_52);
        if (VAR_20 == ((void*)0))
        {
            FUNC_7("Invalid pad filter settings (%s)", VAR_52);
            return -1;
        }
        else if (!FUNC_4(VAR_20, "disable"))
        {
            VAR_19 = FUNC_5();
            FUNC_6(VAR_19, "ID", FUNC_17(VAR_10));
            FUNC_6(VAR_19, "Settings", VAR_20);
            FUNC_2(VAR_18, VAR_19);
        }
        else
        {
            FUNC_12(&VAR_20);
        }
    }
    FUNC_0(VAR_52);

    hb_value_t *VAR_53 = FUNC_3(VAR_15, "VideoFramerate");
    int VAR_54 = FUNC_1(VAR_53);
    if (VAR_54 < 0)
    {
        char *VAR_55 = FUNC_16(VAR_53);
        FUNC_7("Invalid video framerate (%s)", VAR_55);
        FUNC_0(VAR_55);
        return -1;
    }

    int VAR_56;
    hb_value_t *VAR_57 = FUNC_3(VAR_15, "VideoFramerateMode");
    VAR_56 = FUNC_19(VAR_57) == VAR_14 ? (
        !FUNC_21(FUNC_15(VAR_57), "cfr") ? 1 :
        !FUNC_21(FUNC_15(VAR_57), "pfr") ? 2 : 0) :
        FUNC_14(VAR_57);

    VAR_20 = FUNC_5();
    if (VAR_54 == 0)
    {
        FUNC_6(VAR_20, "mode", FUNC_17(VAR_56));
    }
    else
    {
        char *VAR_58 = FUNC_9("%d/%d", VAR_23, VAR_54);
        FUNC_6(VAR_20, "mode", FUNC_17(VAR_56));
        FUNC_6(VAR_20, "rate", FUNC_18(VAR_58));
        FUNC_0(VAR_58);
    }
    if (FUNC_10(VAR_13, VAR_20))
    {
        FUNC_7("hb_preset_apply_filters: Internal error, invalid VFR");
        FUNC_12(&VAR_20);
        return -1;
    }

    VAR_19 = FUNC_5();
    FUNC_6(VAR_19, "ID", FUNC_17(VAR_13));
    FUNC_6(VAR_19, "Settings", VAR_20);
    FUNC_2(VAR_18, VAR_19);
    return 0;
}
