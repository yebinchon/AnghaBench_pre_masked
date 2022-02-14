
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_value_t ;


 int * FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*,char*) ;

__attribute__((used)) static void FUNC_6(hb_value_t *VAR_0)
{
    hb_value_t *VAR_1 = FUNC_0(VAR_0, "PictureDecombDeinterlace");
    if (VAR_1 != ((void*)0))
    {
        int VAR_2 = FUNC_2(VAR_1);
        const char * VAR_3;
        if (VAR_2)
        {
            VAR_3 = FUNC_3(
                                FUNC_0(VAR_0, "PictureDecomb"));
        }
        else
        {
            VAR_3 = FUNC_3(
                                FUNC_0(VAR_0, "PictureDeinterlace"));
        }
        if (VAR_3 != ((void*)0) && FUNC_5(VAR_3, "off"))
        {
            FUNC_1(VAR_0, "PictureDeinterlaceFilter",
                        VAR_2 ? FUNC_4("decomb")
                                        : FUNC_4("deinterlace"));
            FUNC_1(VAR_0, "PictureDeinterlacePreset",
                        FUNC_4(VAR_3));
        }
        else
        {
            FUNC_1(VAR_0, "PictureDeinterlaceFilter",
                        FUNC_4("off"));
            FUNC_1(VAR_0, "PictureDeinterlacePreset",
                        FUNC_4("default"));
        }
    }
}
