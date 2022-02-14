
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_value_t ;
typedef int hb_value_array_t ;
typedef int hb_dict_t ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int const*,char*) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,char*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 () ;
 int * FUNC_5 (int const*) ;
 int * FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int const*) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static hb_value_t * FUNC_9(const hb_value_t *VAR_5)
{
    hb_dict_t *VAR_6;
    if (FUNC_7(VAR_5) != VAR_0 ||
        FUNC_0(VAR_5, "VersionMajor") == ((void*)0))
    {

        VAR_6 = FUNC_1();
        FUNC_2(VAR_6, "VersionMajor",
                    FUNC_6(VAR_2));
        FUNC_2(VAR_6, "VersionMinor",
                    FUNC_6(VAR_4));
        FUNC_2(VAR_6, "VersionMicro",
                    FUNC_6(VAR_3));


        hb_dict_t *VAR_7 = FUNC_5(VAR_5);
        if (FUNC_7(VAR_5) == VAR_0)
        {
            hb_value_array_t *VAR_8 = FUNC_4();
            FUNC_3(VAR_8, VAR_7);
            VAR_7 = VAR_8;
        }
        FUNC_8(VAR_7, VAR_1);
        FUNC_2(VAR_6, "PresetList", VAR_7);
    }
    else
    {

        hb_dict_t *VAR_9 = FUNC_5(VAR_5);
        FUNC_8(VAR_9, VAR_1);
        VAR_6 = VAR_9;
    }
    return VAR_6;
}
