
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ hb_value_type_t ;
typedef int hb_value_t ;
typedef scalar_t__ hb_dict_iter_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_0 (int *,char const*) ;
 scalar_t__ FUNC_1 (int *) ;
 char* FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int *,scalar_t__) ;
 int * FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,char const*) ;
 int FUNC_6 (int *,char const*,int *) ;
 int FUNC_7 (char*,char const*,char const*) ;
 int * FUNC_8 (int *,int) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;
 int FUNC_11 (int **) ;
 int FUNC_12 (int *) ;
 char* FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *) ;
 int * FUNC_16 (int *,scalar_t__) ;

__attribute__((used)) static void
FUNC_17(hb_value_t *VAR_3, hb_value_t *VAR_4)
{
    hb_value_t *VAR_5 = FUNC_10(VAR_3);
    hb_dict_iter_t VAR_6;
    const char *VAR_7;
    hb_value_t *VAR_8;
    hb_value_t *VAR_9;
    hb_value_type_t VAR_10, VAR_11;
    const char *VAR_12 = ((void*)0);

    VAR_8 = FUNC_0(VAR_3, "PresetName");
    if (VAR_8 != ((void*)0))
        VAR_12 = FUNC_13(VAR_8);



    for (VAR_6 = FUNC_1(VAR_5);
         VAR_6 != VAR_0;
         VAR_6 = FUNC_3(VAR_5, VAR_6))
    {
        VAR_7 = FUNC_2(VAR_6);
        VAR_8 = FUNC_4(VAR_6);
        VAR_11 = FUNC_15(VAR_8);

        VAR_9 = FUNC_0(VAR_4, VAR_7);
        VAR_10 = FUNC_15(VAR_9);
        if (VAR_9 == ((void*)0))
        {


            FUNC_5(VAR_3, VAR_7);
        }
        else if (VAR_11 != VAR_10)
        {
            if (VAR_11 == VAR_2 ||
                VAR_11 == VAR_1 ||
                VAR_10 == VAR_2 ||
                VAR_10 == VAR_1)
            {
                FUNC_7("Preset %s: Incompatible value types for key %s. "
                         "Dropping.", VAR_12, VAR_7);
                FUNC_5(VAR_3, VAR_7);
            }
            else if (FUNC_14(VAR_8) &&
                     FUNC_14(VAR_9))
            {

                hb_value_t *VAR_13;
                VAR_13 = FUNC_16(VAR_8, VAR_10);
                FUNC_6(VAR_3, VAR_7, VAR_13);
            }
            else
            {
                hb_value_t *VAR_14;
                FUNC_7("Preset %s: Incorrect value type for key %s. "
                         "Converting.", VAR_12, VAR_7);
                VAR_14 = FUNC_16(VAR_8, VAR_10);
                FUNC_6(VAR_3, VAR_7, VAR_14);
            }
        }
        else if (VAR_11 == VAR_2 &&
                 VAR_10 == VAR_2)
        {
            VAR_8 = FUNC_0(VAR_3, VAR_7);
            FUNC_17(VAR_8, VAR_9);
        }
        else if (VAR_11 == VAR_1 &&
                 VAR_10 == VAR_1 &&
                 FUNC_9(VAR_9) > 0)
        {
            VAR_9 = FUNC_8(VAR_9, 0);
            if (FUNC_15(VAR_9) == VAR_2)
            {
                VAR_8 = FUNC_0(VAR_3, VAR_7);
                int VAR_15 = FUNC_9(VAR_8);
                int VAR_16;
                for (VAR_16 = 0; VAR_16 < VAR_15; VAR_16++)
                {
                    hb_value_t *VAR_17;
                    VAR_17 = FUNC_8(VAR_8, VAR_16);
                    if (FUNC_15(VAR_17) == VAR_2)
                    {
                        FUNC_17(VAR_17, VAR_9);
                    }
                }
            }
        }
    }
    FUNC_11(&VAR_5);

    if (!FUNC_12(FUNC_0(VAR_3, "Folder")))
    {

        for (VAR_6 = FUNC_1(VAR_4);
             VAR_6 != VAR_0;
             VAR_6 = FUNC_3(VAR_4, VAR_6))
        {
            VAR_7 = FUNC_2(VAR_6);
            VAR_9 = FUNC_4(VAR_6);
            VAR_8 = FUNC_0(VAR_3, VAR_7);
            if (VAR_8 == ((void*)0))
            {
                FUNC_6(VAR_3, VAR_7, FUNC_10(VAR_9));
            }
        }
    }
}
