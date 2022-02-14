
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_value_t ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

int FUNC_3(hb_value_t *VAR_1, int *VAR_2, int *VAR_3, int *VAR_4)
{
    *VAR_2 = 0; *VAR_3 = 0; *VAR_4 = 0;
    if (FUNC_2(VAR_1) == VAR_0)
    {

        hb_value_t *VAR_5 = FUNC_0(VAR_1, "PresetName");
        if (VAR_5 == ((void*)0))
        {
            VAR_5 = FUNC_0(VAR_1, "VersionMajor");
            if (VAR_5 != ((void*)0))
            {
                *VAR_2 = FUNC_1(FUNC_0(VAR_1, "VersionMajor"));
                *VAR_3 = FUNC_1(FUNC_0(VAR_1, "VersionMinor"));
                *VAR_4 = FUNC_1(FUNC_0(VAR_1, "VersionMicro"));
                return 0;
            }
        }
    }
    return -1;
}
