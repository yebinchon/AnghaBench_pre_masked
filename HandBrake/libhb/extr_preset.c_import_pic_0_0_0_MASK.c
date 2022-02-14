
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_value_t ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (char const*,char*) ;
 int FUNC_10 (char const*,char**,int ) ;

__attribute__((used)) static void FUNC_11(hb_value_t *VAR_1)
{
    if (FUNC_2(FUNC_0(VAR_1, "UsesMaxPictureSettings")))
    {

        FUNC_1(VAR_1, "UsesPictureSettings", FUNC_5(2));
    }

    hb_value_t *VAR_2 = FUNC_0(VAR_1, "PicturePAR");
    if (FUNC_6(VAR_2))
    {
        const char *VAR_3;
        int VAR_4 = FUNC_3(VAR_2);
        switch (VAR_4)
        {
            default:
            case 0:
                VAR_3 = "off";
                break;
            case 1:
                VAR_3 = "strict";
                break;
            case 2:
                VAR_3 = "loose";
                break;
            case 3:
                VAR_3 = "custom";
                break;
        }
        FUNC_1(VAR_1, "PicturePAR", FUNC_7(VAR_3));
    }
    else if (FUNC_8(VAR_2) == VAR_0)
    {
        const char *VAR_5 = FUNC_4(VAR_2);
        const char *VAR_6;
        char *VAR_7;
        int VAR_8 = FUNC_10(VAR_5, &VAR_7, 0);
        if (VAR_7 != VAR_5)
        {
            switch (VAR_8)
            {
                default:
                case 2:
                    VAR_6 = "loose";
                    break;
                case 0:
                    VAR_6 = "off";
                    break;
                case 1:
                    VAR_6 = "strict";
                    break;
                case 3:
                    VAR_6 = "custom";
                    break;
            }
            FUNC_1(VAR_1, "PicturePAR", FUNC_7(VAR_6));
        }
        else
        {
            if (FUNC_9(VAR_5, "off") &&
                FUNC_9(VAR_5, "strict") &&
                FUNC_9(VAR_5, "loose") &&
                FUNC_9(VAR_5, "custom"))
            {
                FUNC_1(VAR_1, "PicturePAR", FUNC_7("loose"));
            }
        }
    }
}
