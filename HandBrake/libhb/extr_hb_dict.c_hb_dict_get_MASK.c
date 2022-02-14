
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_value_t ;
typedef int hb_dict_t ;


 int FUNC_0 (char*) ;
 int * FUNC_1 (int const*,char const*) ;
 char* FUNC_2 (char const*) ;

hb_value_t * FUNC_3(const hb_dict_t * VAR_0, const char * VAR_1)
{
    hb_value_t * VAR_2;


    VAR_2 = FUNC_1(VAR_0, VAR_1);
    if (VAR_2 == ((void*)0))
    {

        char * VAR_3 = FUNC_2(VAR_1);
        VAR_2 = FUNC_1(VAR_0, VAR_3);
        FUNC_0(VAR_3);
    }
    return VAR_2;
}
