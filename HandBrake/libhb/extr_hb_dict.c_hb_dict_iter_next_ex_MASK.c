
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_value_t ;
typedef int hb_dict_t ;
typedef int * hb_dict_iter_t ;


 char* FUNC_0 (int *) ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;

int
FUNC_3(const hb_dict_t *VAR_0, hb_dict_iter_t *VAR_1,
                     const char **VAR_2, hb_value_t **VAR_3)
{
    if (*VAR_1 == ((void*)0))
        return 0;
    if (VAR_2 != ((void*)0))
        *VAR_2 = FUNC_0(*VAR_1);
    if (VAR_3 != ((void*)0))
        *VAR_3 = FUNC_2(*VAR_1);
    *VAR_1 = FUNC_1((hb_dict_t*)VAR_0, *VAR_1);
    return 1;
}
