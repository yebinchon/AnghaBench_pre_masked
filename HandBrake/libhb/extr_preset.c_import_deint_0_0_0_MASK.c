
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_value_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (char const*) ;
 char* FUNC_6 (int ,int) ;

__attribute__((used)) static void FUNC_7(hb_value_t *VAR_2)
{
    hb_value_t *VAR_3 = FUNC_0(VAR_2, "PictureDecomb");
    if (FUNC_4(VAR_3))
    {
        const char *VAR_4;
        int VAR_5 = FUNC_3(VAR_3);
        VAR_4 = FUNC_6(VAR_0, VAR_5);
        if (VAR_4 != ((void*)0))
        {
            FUNC_1(VAR_2, "PictureDecomb", FUNC_5(VAR_4));
        }
        else
        {
            FUNC_2("Invalid decomb index %d", VAR_5);
            FUNC_1(VAR_2, "PictureDecomb", FUNC_5("off"));
        }
    }

    VAR_3 = FUNC_0(VAR_2, "PictureDeinterlace");
    if (FUNC_4(VAR_3))
    {
        const char *VAR_6;
        int VAR_7 = FUNC_3(VAR_3);
        VAR_6 = FUNC_6(VAR_1, VAR_7);
        if (VAR_6 != ((void*)0))
        {
            FUNC_1(VAR_2, "PictureDeinterlace", FUNC_5(VAR_6));
        }
        else
        {
            FUNC_2("Invalid deinterlace index %d", VAR_7);
            FUNC_1(VAR_2, "PictureDeinterlace", FUNC_5("off"));
        }
    }
}
