
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int hb_value_t ;
struct TYPE_3__ {int name; int * settings_template; } ;
typedef TYPE_1__ hb_filter_object_t ;
typedef int const hb_dict_t ;
typedef scalar_t__ hb_dict_iter_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int const*,char const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 char* FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int const*,scalar_t__) ;
 TYPE_1__* FUNC_5 (int) ;
 int FUNC_6 (char*,...) ;
 int const* FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (char const*,char*) ;
 int FUNC_9 (int const**) ;
 char* FUNC_10 (int *) ;
 char* FUNC_11 (int *) ;

int FUNC_12(int VAR_1, const hb_dict_t * VAR_2)
{
    hb_filter_object_t * VAR_3;
    hb_dict_t * VAR_4;
    hb_dict_iter_t VAR_5;

    if (VAR_2 == ((void*)0))
        return 0;


    VAR_3 = FUNC_5(VAR_1);
    if (VAR_3 == ((void*)0))
    {
        FUNC_6("hb_validate_filter_settings: Unrecognized filter (%d).\n",
               VAR_1);
        return 1;
    }
    if (VAR_3->settings_template == ((void*)0))
    {

        return 0;
    }
    VAR_4 = FUNC_7(VAR_3->settings_template);
    if (VAR_4 == ((void*)0))
    {
        FUNC_6("hb_validate_filter_settings: invalid template!");
        return 0;
    }

    for (VAR_5 = FUNC_2(VAR_2);
         VAR_5 != VAR_0;
         VAR_5 = FUNC_4(VAR_2, VAR_5))
    {
        const char * VAR_6;
        hb_value_t * VAR_7;

        VAR_6 = FUNC_3(VAR_5);


        VAR_7 = FUNC_1(VAR_4, VAR_6);
        if (VAR_7 == ((void*)0))
        {

            FUNC_6("Invalid filter key (%s) for filter %s",
                    VAR_6, VAR_3->name);
            return 1;
        }



        const char * VAR_8 = FUNC_10(VAR_7);
        if (VAR_8 != ((void*)0) && VAR_8[0] != 0)
        {
            char * VAR_9;
            VAR_9 = FUNC_11(FUNC_1(VAR_2, VAR_6));
            if (FUNC_8(VAR_8, VAR_9) != 0)
            {
                FUNC_6("Invalid filter value (%s) for key %s filter %s",
                        VAR_9, VAR_6, VAR_3->name);
                FUNC_0(VAR_9);
                return 1;
            }
            FUNC_0(VAR_9);
        }
    }
    FUNC_9(&VAR_4);

    return 0;
}
