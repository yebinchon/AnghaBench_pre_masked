
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_value_t ;
typedef int hb_dict_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int*,int *,char*) ;
 int * FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,int ) ;
 int * FUNC_4 (char const*) ;
 char* FUNC_5 (char*,int,int,int,int,int,int,int,int,...) ;
 int FUNC_6 (int **) ;
 char* FUNC_7 (int *) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char const*,char*) ;

__attribute__((used)) static void FUNC_10(hb_value_t *VAR_0)
{
    hb_value_t *VAR_1 = FUNC_2(VAR_0, "PictureDeinterlaceFilter");
    if (VAR_1 == ((void*)0))
    {
        return;
    }
    const char * VAR_2 = FUNC_7(VAR_1);
    if (VAR_2 == ((void*)0))
    {

        return;
    }
    if (FUNC_9(VAR_2, "decomb"))
    {
        return;
    }
    VAR_1 = FUNC_2(VAR_0, "PictureDeinterlacePreset");
    if (VAR_1 == ((void*)0))
    {
        FUNC_3(VAR_0, "PictureDeinterlacePreset",
                    FUNC_8("default"));
        return;
    }
    VAR_2 = FUNC_7(VAR_1);
    if (VAR_2 == ((void*)0))
    {

        return;
    }
    if (!FUNC_9(VAR_2, "fast"))
    {


        FUNC_3(VAR_0, "PictureCombDetectPreset",
                    FUNC_8("fast"));
        FUNC_3(VAR_0, "PictureDeinterlacePreset",
                    FUNC_8("default"));
        return;
    }
    else if (!FUNC_9(VAR_2, "bob") || !FUNC_9(VAR_2, "default"))
    {
        FUNC_3(VAR_0, "PictureCombDetectPreset",
                    FUNC_8("default"));
        return;
    }
    else if (FUNC_9(VAR_2, "custom"))
    {

        FUNC_3(VAR_0, "PictureCombDetectPreset",
                    FUNC_8("default"));
        FUNC_3(VAR_0, "PictureDeinterlacePreset",
                    FUNC_8("default"));
        return;
    }
    VAR_1 = FUNC_2(VAR_0, "PictureDeinterlaceCustom");
    if (VAR_1 == ((void*)0))
    {
        FUNC_3(VAR_0, "PictureDeinterlacePreset",
                    FUNC_8("default"));
        return;
    }

    VAR_2 = FUNC_7(VAR_1);
    if (VAR_2 == ((void*)0))
    {

        return;
    }

    hb_dict_t * VAR_3;
    VAR_3 = FUNC_4(VAR_2);

    int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
    int VAR_13, VAR_14;

    int VAR_15 = 7, VAR_16 = 2, VAR_17 = 3;
    int VAR_18 = 3, VAR_19 = 2;
    int VAR_20 = 40, VAR_21 = 16, VAR_22 = 16;
    int VAR_23 = 10, VAR_24 = 20;
    int VAR_25 = 20;
    int VAR_26 = 4, VAR_27 = 2, VAR_28 = 50;
    int VAR_29 = 24, VAR_30 = 1, VAR_31 = -1;

    FUNC_1(&VAR_15, VAR_3, "mode");
    FUNC_1(&VAR_16, VAR_3, "spatial-metric");
    FUNC_1(&VAR_17, VAR_3, "motion-thresh");
    FUNC_1(&VAR_18, VAR_3, "spatial-thresh");
    FUNC_1(&VAR_19, VAR_3, "filter-mode");
    FUNC_1(&VAR_20, VAR_3, "block-thresh");
    FUNC_1(&VAR_21, VAR_3, "block-width");
    FUNC_1(&VAR_22, VAR_3, "block-height");
    FUNC_1(&VAR_23, VAR_3, "magnitude-thresh");
    FUNC_1(&VAR_24, VAR_3, "variance-thresh");
    FUNC_1(&VAR_25, VAR_3, "laplacian-thresh");
    FUNC_1(&VAR_26, VAR_3, "dilation-thresh");
    FUNC_1(&VAR_27, VAR_3, "erosion-thresh");
    FUNC_1(&VAR_28, VAR_3, "noise-thresh");
    FUNC_1(&VAR_29, VAR_3, "search-distance");
    FUNC_1(&VAR_30, VAR_3, "postproc");
    FUNC_1(&VAR_31, VAR_3, "parity");
    FUNC_6(&VAR_3);

    VAR_4 = !!(VAR_15 & 1);
    VAR_5 = !!(VAR_15 & 2);
    VAR_6 = !!(VAR_15 & 4);
    VAR_7 = !!(VAR_15 & 8);
    VAR_8 = !!(VAR_15 & 32);
    VAR_9 = !!(VAR_15 & 64);
    VAR_10 = !!(VAR_15 & 128);
    VAR_11 = !!(VAR_15 & 256);
    VAR_12 = !!(VAR_15 & 512);

    VAR_13 = VAR_10 + VAR_11 * 2 + VAR_8 * 4 + VAR_12 * 8;
    VAR_14 = VAR_4 + VAR_5 * 2 + VAR_6 * 4 + VAR_7 * 8 + VAR_9 * 16;

    char * VAR_32 = FUNC_5("mode=%d:spatial-metric=%d:"
                                     "motion-thresh=%d:spatial-thresh=%d:"
                                     "filter-mode=%d:block-thresh=%d:"
                                     "block-width=%d:block-height=%d",
                                     VAR_13, VAR_16,
                                     VAR_17, VAR_18,
                                     VAR_19, VAR_20,
                                     VAR_21, VAR_22);
    FUNC_3(VAR_0, "PictureCombDetectCustom", FUNC_8(VAR_32));
    FUNC_0(VAR_32);

    VAR_32 = FUNC_5("mode=%d:magnitude-thresh=%d:variance-thresh=%d:"
                              "laplacian-thresh=%d:dilation-thresh=%d:"
                              "erosion-thresh=%d:noise-thresh=%d:"
                              "search-distance=%d:postproc=%d:parity=%d",
                              VAR_14, VAR_23,
                              VAR_24, VAR_25,
                              VAR_26, VAR_27,
                              VAR_28, VAR_29,
                              VAR_30, VAR_31);
    FUNC_3(VAR_0, "PictureDeinterlaceCustom", FUNC_8(VAR_32));
    FUNC_0(VAR_32);
}
