
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_title_t ;
typedef int hb_list_t ;
typedef int hb_handle_t ;


 int * FUNC_0 (int *) ;
 int const* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;

const hb_title_t*
FUNC_3(hb_handle_t *VAR_0, int VAR_1, int *VAR_2)
{
    int VAR_3 = FUNC_2(VAR_0, VAR_1);

    if (VAR_2 != ((void*)0))
        *VAR_2 = VAR_3;
    if (VAR_3 < 0)
        return ((void*)0);

    hb_list_t *VAR_4;
    VAR_4 = FUNC_0(VAR_0);
    return FUNC_1(VAR_4, VAR_3);
}
