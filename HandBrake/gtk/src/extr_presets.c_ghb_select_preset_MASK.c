
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int signal_user_data_t ;
typedef int hb_preset_index_t ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,int,int) ;
 int FUNC_2 (int *,int *) ;

void
FUNC_3(signal_user_data_t *VAR_0, const char *VAR_1, int VAR_2)
{
    hb_preset_index_t *VAR_3;

    VAR_3 = FUNC_1(VAR_1, 1, VAR_2);
    if (VAR_3 != ((void*)0))
    {
        FUNC_2(VAR_0, VAR_3);
        FUNC_0(VAR_3);
    }
}
