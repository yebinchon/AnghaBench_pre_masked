
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int const hb_value_t ;
struct TYPE_3__ {int num; int den; } ;
typedef TYPE_1__ hb_rational_t ;
typedef int hb_dict_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (int const*,char const*) ;
 int FUNC_1 (char**) ;
 char** FUNC_2 (char const*,char) ;
 void* FUNC_3 (int const*) ;
 char* FUNC_4 (int const*) ;
 scalar_t__ FUNC_5 (int const*) ;
 scalar_t__ FUNC_6 (char) ;
 int FUNC_7 (char*,char**,int ) ;

int FUNC_8(hb_rational_t *VAR_2, const hb_dict_t * VAR_3,
                                                 const char * VAR_4)
{
    if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0) || VAR_2 == ((void*)0))
    {
        return 0;
    }

    hb_value_t *VAR_5 = FUNC_0(VAR_3, VAR_4);
    if (VAR_5 == ((void*)0))
    {
        return 0;
    }

    if (FUNC_5(VAR_5) == VAR_0)
    {
        hb_value_t * VAR_6 = FUNC_0(VAR_5, "Num");
        if (VAR_6 == ((void*)0))
        {
            return 0;
        }
        hb_value_t * VAR_7 = FUNC_0(VAR_5, "Den");
        if (VAR_7 == ((void*)0))
        {
            return 0;
        }

        VAR_2->num = FUNC_3(VAR_6);
        VAR_2->den = FUNC_3(VAR_7);
        return 1;
    }
    else if (FUNC_5(VAR_5) == VAR_1)
    {
        const char * VAR_8 = FUNC_4(VAR_5);
        char ** VAR_9 = FUNC_2(VAR_8, '/');
        if (VAR_9[0] != ((void*)0) && VAR_9[1] != ((void*)0) &&
            FUNC_6(VAR_9[0][0]) && FUNC_6(VAR_9[1][0]))
        {
            char *VAR_10, *VAR_11;


            int VAR_12 = FUNC_7(VAR_9[0], &VAR_10, 0);
            int VAR_13 = FUNC_7(VAR_9[1], &VAR_11, 0);

            if (VAR_10[0] == 0 && VAR_11[0] == 0)
            {
                VAR_2->num = VAR_12;
                VAR_2->den = VAR_13;
                FUNC_1(VAR_9);
                return 1;
            }
        }
        FUNC_1(VAR_9);
    }

    return 0;
}
