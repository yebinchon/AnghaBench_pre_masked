
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_value_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (int *,char*) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,char*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;

__attribute__((used)) static void FUNC_4(hb_value_t *VAR_6)
{
    hb_value_t *VAR_7 = FUNC_0(VAR_6, "PictureDeinterlaceFilter");
    if (VAR_7 != ((void*)0))
    {
        const char * VAR_8 = FUNC_1(VAR_7);
        if (VAR_8 != ((void*)0))
        {
            if (FUNC_3(VAR_8, "deinterlace"))
            {
                FUNC_2(VAR_6, VAR_1,
                                     "PictureDeinterlaceCustom");
            }
            else if (FUNC_3(VAR_8, "decomb"))
            {
                FUNC_2(VAR_6, VAR_0,
                                     "PictureDeinterlaceCustom");
            }
        }
    }
    VAR_7 = FUNC_0(VAR_6, "PictureDenoiseFilter");
    if (VAR_7 != ((void*)0))
    {
        const char * VAR_9 = FUNC_1(VAR_7);
        if (VAR_9 != ((void*)0))
        {
            if (FUNC_3(VAR_9, "hqdn3d"))
            {
                FUNC_2(VAR_6, VAR_3,
                                     "PictureDenoiseCustom");
            }
            else if (FUNC_3(VAR_9, "nlmeans"))
            {
                FUNC_2(VAR_6, VAR_4,
                                     "PictureDenoiseCustom");
            }
        }
    }
    FUNC_2(VAR_6, VAR_2,
                         "PictureDetelecineCustom");
    FUNC_2(VAR_6, VAR_5,
                         "PictureRotate");
}
