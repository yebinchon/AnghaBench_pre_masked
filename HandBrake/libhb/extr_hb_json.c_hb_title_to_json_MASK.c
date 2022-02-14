
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_handle_t ;
typedef int hb_dict_t ;


 int * FUNC_0 (int *,int) ;
 int FUNC_1 (int **) ;
 char* FUNC_2 (int *) ;

char* FUNC_3( hb_handle_t *VAR_0, int VAR_1 )
{
    hb_dict_t *VAR_2 = FUNC_0(VAR_0, VAR_1);
    if (VAR_2 == ((void*)0))
        return ((void*)0);

    char *VAR_3 = FUNC_2(VAR_2);
    FUNC_1(&VAR_2);

    return VAR_3;
}
