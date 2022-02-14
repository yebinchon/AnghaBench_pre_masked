
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GhbValue ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,char const*) ;
 char** FUNC_2 (int) ;
 int FUNC_3 (char const*,char const* const) ;

int FUNC_4(GhbValue *VAR_0, int VAR_1, const char * VAR_2)
{
    const char * const * VAR_3;
    int VAR_4, VAR_5 = 0;

    VAR_3 = FUNC_2(VAR_1);
    for (VAR_4 = 0; VAR_3 && VAR_3[VAR_4]; VAR_4++)
    {
        if (VAR_2 != ((void*)0) && !FUNC_3(VAR_2, VAR_3[VAR_4]))
        {
            FUNC_0(VAR_0, "VideoPresetSlider", VAR_4);
            VAR_5 = 1;
            break;
        }
    }
    if (VAR_2 == ((void*)0) && VAR_3 != ((void*)0))
    {

        VAR_4 = VAR_4 / 2;
        VAR_2 = VAR_3[VAR_4];
        FUNC_0(VAR_0, "VideoPresetSlider", VAR_4);
        VAR_5 = 1;
    }
    if (VAR_2 != ((void*)0))
    {
        FUNC_1(VAR_0, "VideoPreset", VAR_2);
    }
    return VAR_5;
}
