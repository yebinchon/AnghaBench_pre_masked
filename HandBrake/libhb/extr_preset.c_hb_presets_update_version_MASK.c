
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_value_t ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;

hb_value_t * FUNC_6(hb_value_t *VAR_4)
{
    if (FUNC_4(VAR_4) == VAR_0)
    {

        hb_value_t *VAR_5 = FUNC_0(VAR_4, "PresetName");
        if (VAR_5 == ((void*)0))
        {
            VAR_5 = FUNC_0(VAR_4, "VersionMajor");
            if (VAR_5 != ((void*)0))
            {
                FUNC_1(VAR_4, "VersionMajor",
                            FUNC_3(VAR_1));
                FUNC_1(VAR_4, "VersionMinor",
                            FUNC_3(VAR_3));
                FUNC_1(VAR_4, "VersionMicro",
                            FUNC_3(VAR_2));
                FUNC_2(VAR_4);
                return VAR_4;
            }

            return ((void*)0);
        }
    }
    return FUNC_5(VAR_4);
}
