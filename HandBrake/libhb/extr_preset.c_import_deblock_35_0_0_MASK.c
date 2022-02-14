
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_value_t ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,char*) ;

__attribute__((used)) static void FUNC_3(hb_value_t *VAR_0)
{
    int VAR_1 = FUNC_0(VAR_0, "PictureDeblock");

    if (VAR_1 < 5)
    {
        FUNC_2(VAR_0, "PictureDeblockPreset", "off");
    }
    else if (VAR_1 < 7)
    {
        FUNC_2(VAR_0, "PictureDeblockPreset", "medium");
    }
    else
    {
        FUNC_2(VAR_0, "PictureDeblockPreset", "strong");
    }
    FUNC_2(VAR_0, "PictureDeblockTune", "medium");
    FUNC_2(VAR_0, "PictureDeblockCustom",
                       "strength=strong:thresh=20");
    FUNC_1(VAR_0, "PictureDeblock");
}
