
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_value_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_0 (int *,char const*) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int *,char*) ;
 char* FUNC_5 (int *,char*) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *,char*,int *) ;
 int FUNC_8 (int *,char*,int) ;
 int FUNC_9 (int *,char*,int ) ;
 int FUNC_10 (int *,char*,char*) ;
 int FUNC_11 (int *,int *) ;
 int * FUNC_12 (int *,int) ;
 int * FUNC_13 () ;
 int FUNC_14 (int *,int,int *) ;
 scalar_t__ FUNC_15 (int *) ;
 int FUNC_16 (int *,int) ;
 int * FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (int *) ;
 int FUNC_19 (char const*,int *,int *) ;
 scalar_t__ FUNC_20 (char const*,char*) ;

__attribute__((used)) static hb_value_t * FUNC_21(hb_value_t *VAR_3)
{
    hb_value_t * VAR_4 = VAR_3;
    hb_value_t * VAR_5 = ((void*)0);
    hb_value_t * VAR_6;
    hb_value_t * VAR_7;
    int VAR_8, VAR_9;

    if (FUNC_18(VAR_3) == VAR_2 &&
        FUNC_2(VAR_3, "VersionMajor") != ((void*)0))
    {

        VAR_4 = FUNC_2(VAR_3, "PresetList");
    }


    VAR_7 = FUNC_13();
    VAR_9 = FUNC_15(VAR_4);
    for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++)
    {
        hb_value_t * VAR_10 = FUNC_12(VAR_4, VAR_8);
        if (FUNC_4(VAR_10, "Type") != VAR_1)
        {
            continue;
        }
        FUNC_11(VAR_7, FUNC_17(VAR_10));
    }




    VAR_9 = FUNC_15(VAR_4);
    for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++)
    {
        hb_value_t * VAR_11 = FUNC_12(VAR_4, VAR_8);

        if (FUNC_4(VAR_11, "Type") == VAR_1)
        {

            continue;
        }
        if (FUNC_3(VAR_11, "Folder"))
        {
            int VAR_12 = FUNC_15(VAR_7);
            const char * VAR_13 = FUNC_5(VAR_11, "PresetName");
            if (FUNC_20(VAR_13, "My Presets"))
            {
                continue;
            }
            FUNC_19(VAR_13, VAR_7, VAR_11);

            VAR_5 = FUNC_17(VAR_11);
            FUNC_14(VAR_7, VAR_12, VAR_5);
            FUNC_16(VAR_4, VAR_8);
            break;
        }
    }
    if (VAR_5 == ((void*)0))
    {
        VAR_5 = FUNC_6();
        FUNC_10(VAR_5, "PresetName", "My Presets");
        FUNC_7(VAR_5, "ChildrenArray", FUNC_13());
        FUNC_9(VAR_5, "Type", VAR_0);
        FUNC_8(VAR_5, "Folder", 1);
        FUNC_11(VAR_7, VAR_5);
    }
    VAR_6 = FUNC_2(VAR_5, "ChildrenArray");


    VAR_9 = FUNC_15(VAR_4);
    for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++)
    {
        hb_value_t * VAR_14 = FUNC_12(VAR_4, VAR_8);

        if (FUNC_4(VAR_14, "Type") == VAR_1)
        {

            continue;
        }
        if (FUNC_3(VAR_14, "Folder"))
        {
            int VAR_15 = FUNC_15(VAR_7);
            const char * VAR_16 = FUNC_5(VAR_14, "PresetName");
            FUNC_19(VAR_16, VAR_7, VAR_14);

            hb_value_t * VAR_17 = FUNC_2(VAR_14, "ChildrenArray");
            if (FUNC_15(VAR_17) > 0)
            {


                char * VAR_18 = FUNC_0(VAR_7, VAR_16);
                FUNC_10(VAR_14, "PresetName", VAR_18);
                FUNC_14(VAR_7, VAR_15, FUNC_17(VAR_14));
                FUNC_1(VAR_18);
            }
        }
        else
        {
            FUNC_11(VAR_6, FUNC_17(VAR_14));
        }
    }

    if (FUNC_18(VAR_3) == VAR_2 &&
        FUNC_2(VAR_3, "VersionMajor") != ((void*)0))
    {

        FUNC_7(VAR_3, "PresetList", VAR_7);
    }
    else
    {
        VAR_3 = VAR_7;
    }
    return FUNC_17(VAR_3);
}
