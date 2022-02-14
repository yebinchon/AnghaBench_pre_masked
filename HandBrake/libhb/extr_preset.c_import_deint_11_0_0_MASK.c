
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_value_t ;


 int FUNC_0 (char*) ;
 int * FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int ) ;
 char* FUNC_3 (char*,int,int) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char const*,char*,int*,int*) ;
 scalar_t__ FUNC_7 (char const*,char*) ;

__attribute__((used)) static void FUNC_8(hb_value_t *VAR_0)
{
    hb_value_t *VAR_1 = FUNC_1(VAR_0, "PictureDeinterlaceFilter");
    if (VAR_1 == ((void*)0))
    {
        return;
    }
    const char * VAR_2 = FUNC_4(VAR_1);
    if (VAR_2 == ((void*)0))
    {

        return;
    }
    if (FUNC_7(VAR_2, "deinterlace"))
    {
        return;
    }
    VAR_1 = FUNC_1(VAR_0, "PictureDeinterlacePreset");
    if (VAR_1 == ((void*)0))
    {
        FUNC_2(VAR_0, "PictureDeinterlacePreset",
                    FUNC_5("default"));
        return;
    }
    VAR_2 = FUNC_4(VAR_1);
    if (VAR_2 == ((void*)0))
    {

        return;
    }
    if (!FUNC_7(VAR_2, "fast") || !FUNC_7(VAR_2, "slow"))
    {

        FUNC_2(VAR_0, "PictureDeinterlacePreset",
                    FUNC_5("skip-spatial"));
        return;
    }
    else if (!FUNC_7(VAR_2, "bob") || !FUNC_7(VAR_2, "default"))
    {
        return;
    }
    else if (FUNC_7(VAR_2, "custom"))
    {

        FUNC_2(VAR_0, "PictureDeinterlacePreset",
                    FUNC_5("default"));
        return;
    }
    VAR_1 = FUNC_1(VAR_0, "PictureDeinterlaceCustom");
    if (VAR_1 == ((void*)0))
    {
        FUNC_2(VAR_0, "PictureDeinterlacePreset",
                    FUNC_5("default"));
        return;
    }

    VAR_2 = FUNC_4(VAR_1);
    if (VAR_2 == ((void*)0))
    {

        return;
    }
    int VAR_3, VAR_4, VAR_5, VAR_6 = 3, VAR_7 = -1;
    FUNC_6(VAR_2, "%d:%d", &VAR_6, &VAR_7);
    VAR_5 = !!(VAR_6 & 1);
    VAR_4 = !!(VAR_6 & 2);
    VAR_3 = !!(VAR_6 & 8);
    VAR_6 = VAR_5 + (VAR_5 && VAR_4) * 2 + VAR_3 * 4;
    char * VAR_8 = FUNC_3("%d:%d", VAR_6, VAR_7);
    FUNC_2(VAR_0, "PictureDeinterlaceCustom", FUNC_5(VAR_8));
    FUNC_0(VAR_8);
}
