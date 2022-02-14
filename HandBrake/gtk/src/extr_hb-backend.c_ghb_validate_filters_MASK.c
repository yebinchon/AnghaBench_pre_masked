
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gchar ;
typedef int gboolean ;
typedef int GtkWindow ;
typedef int GhbValue ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,char const*,...) ;
 char* FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int ,int *,int ,int *) ;
 int FUNC_5 (int *,char*) ;
 scalar_t__ FUNC_6 (int,char const*,char const*,char const*) ;
 scalar_t__ FUNC_7 (char const*,char*) ;

gboolean
FUNC_8(GhbValue *VAR_7, GtkWindow *VAR_8)
{
    gchar *VAR_9;


    const char *VAR_10;
    VAR_10 = FUNC_3(VAR_7, "PictureDetelecine");
    if (FUNC_7(VAR_10, "off"))
    {
        const char *VAR_11 = ((void*)0);
        int VAR_12;

        VAR_12 = VAR_3;
        VAR_11 = FUNC_3(VAR_7, "PictureDetelecineCustom");
        if (FUNC_6(VAR_12, VAR_10, ((void*)0),
                                      VAR_11))
        {
            if (VAR_11 != ((void*)0))
            {
                VAR_9 = FUNC_2(
                            FUNC_0("Invalid Detelecine Settings:\n\n"
                              "Preset:\t%s\n"
                              "Custom:\t%s\n"), VAR_10, VAR_11);
            }
            else
            {
                VAR_9 = FUNC_2(
                            FUNC_0("Invalid Detelecine Settings:\n\n"
                              "Preset:\t%s\n"), VAR_10);
            }
            FUNC_4(VAR_8, VAR_1,
                               VAR_9, FUNC_0("Cancel"), ((void*)0));
            FUNC_1(VAR_9);
            return VAR_0;
        }
    }


    const char *VAR_13;
    VAR_13 = FUNC_3(VAR_7, "PictureCombDetectPreset");
    if (FUNC_7(VAR_13, "off"))
    {
        const char *VAR_14 = ((void*)0);
        int VAR_15;

        VAR_15 = VAR_2;
        VAR_14 = FUNC_3(VAR_7, "PictureCombDetectCustom");
        if (FUNC_6(VAR_15, VAR_13, ((void*)0),
                                      VAR_14))
        {
            if (VAR_14 != ((void*)0) && VAR_14[0] != 0)
            {
                VAR_9 = FUNC_2(
                            FUNC_0("Invalid Comb Detect Settings:\n\n"
                              "Preset:\t%s\n"
                              "Custom:\t%s\n"), VAR_13, VAR_14);
            }
            else
            {
                VAR_9 = FUNC_2(
                            FUNC_0("Invalid Comb Detect Settings:\n\n"
                              "Preset:\t%s\n"), VAR_13);
            }
            FUNC_4(VAR_8, VAR_1,
                               VAR_9, FUNC_0("Cancel"), ((void*)0));
            FUNC_1(VAR_9);
            return VAR_0;
        }
    }


    int VAR_16;
    VAR_16 = FUNC_5(VAR_7, "PictureDeinterlaceFilter");
    if (VAR_16 != VAR_4)
    {
        const char *VAR_17, *VAR_18, *VAR_19 = ((void*)0);

        VAR_17 = FUNC_3(VAR_7,
                                           "PictureDeinterlaceFilter");
        VAR_18 = FUNC_3(VAR_7,
                                           "PictureDeinterlacePreset");
        VAR_19 = FUNC_3(VAR_7,
                                           "PictureDeinterlaceCustom");
        if (FUNC_6(VAR_16, VAR_18, ((void*)0),
                                      VAR_19))
        {
            if (VAR_19 != ((void*)0))
            {
                VAR_9 = FUNC_2(
                            FUNC_0("Invalid Deinterlace Settings:\n\n"
                              "Filter:\t%s\n"
                              "Preset:\t%s\n"
                              "Custom:\t%s\n"), VAR_17, VAR_18,
                                                VAR_19);
            }
            else
            {
                VAR_9 = FUNC_2(
                            FUNC_0("Invalid Deinterlace Settings:\n\n"
                              "Filter:\t%s\n"
                              "Preset:\t%s\n"), VAR_17, VAR_18);
            }
            FUNC_4(VAR_8, VAR_1,
                               VAR_9, FUNC_0("Cancel"), ((void*)0));
            FUNC_1(VAR_9);
            return VAR_0;
        }
    }


    VAR_16 = FUNC_5(VAR_7, "PictureDenoiseFilter");
    if (VAR_16 != VAR_4)
    {
        const char *VAR_20, *VAR_21;
        const char *VAR_22 = ((void*)0), *VAR_23 = ((void*)0);

        VAR_20 = FUNC_3(VAR_7, "PictureDenoiseFilter");
        VAR_21 = FUNC_3(VAR_7, "PictureDenoisePreset");
        if (VAR_16 == VAR_5)
        {
            VAR_22 = FUNC_3(VAR_7, "PictureDenoiseTune");
        }
        VAR_23 = FUNC_3(VAR_7, "PictureDenoiseCustom");
        if (FUNC_6(VAR_16, VAR_21, VAR_22,
                                      VAR_23))
        {
            VAR_9 = FUNC_2(
                        FUNC_0("Invalid Denoise Settings:\n\n"
                          "Filter:\t%s\n"
                          "Preset:\t%s\n"
                          "Tune:\t%s\n"
                          "Custom:\t%s\n"), VAR_20, VAR_21,
                                           VAR_22, VAR_23);
            FUNC_4(VAR_8, VAR_1,
                               VAR_9, FUNC_0("Cancel"), ((void*)0));
            FUNC_1(VAR_9);
            return VAR_0;
        }
    }


    VAR_16 = FUNC_5(VAR_7, "PictureSharpenFilter");
    if (VAR_16 != VAR_4)
    {
        const char *VAR_24, *VAR_25;
        const char *VAR_26 = ((void*)0), *VAR_27 = ((void*)0);

        VAR_24 = FUNC_3(VAR_7, "PictureSharpenFilter");
        VAR_25 = FUNC_3(VAR_7, "PictureSharpenPreset");
        VAR_26 = FUNC_3(VAR_7, "PictureSharpenTune");
        VAR_27 = FUNC_3(VAR_7, "PictureSharpenCustom");
        if (FUNC_6(VAR_16, VAR_25, VAR_26,
                                      VAR_27))
        {
            VAR_9 = FUNC_2(
                        FUNC_0("Invalid Sharpen Settings:\n\n"
                          "Filter:\t%s\n"
                          "Preset:\t%s\n"
                          "Tune:\t%s\n"
                          "Custom:\t%s\n"), VAR_24, VAR_25,
                                           VAR_26, VAR_27);
            FUNC_4(VAR_8, VAR_1,
                               VAR_9, FUNC_0("Cancel"), ((void*)0));
            FUNC_1(VAR_9);
            return VAR_0;
        }
    }

    return VAR_6;
}
