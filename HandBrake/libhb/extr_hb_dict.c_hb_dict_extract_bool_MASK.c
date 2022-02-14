
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_value_t ;
typedef int hb_dict_t ;


 int * FUNC_0 (int const*,char const*) ;
 int FUNC_1 (int *) ;

int FUNC_2(int *VAR_0, const hb_dict_t * VAR_1, const char * VAR_2)
{
    if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_0 == ((void*)0))
    {
        return 0;
    }

    hb_value_t *VAR_3 = FUNC_0(VAR_1, VAR_2);
    if (VAR_3 == ((void*)0))
    {
        return 0;
    }

    *VAR_0 = FUNC_1(VAR_3);
    return 1;
}
