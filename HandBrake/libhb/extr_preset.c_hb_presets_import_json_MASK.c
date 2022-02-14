
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_value_t ;


 int FUNC_0 (int *,int **) ;
 int FUNC_1 (int **) ;
 char* FUNC_2 (int *) ;
 int * FUNC_3 (char const*) ;

int FUNC_4(const char *VAR_0, char **VAR_1)
{
    int VAR_2;

    if (VAR_1 != ((void*)0))
    {
        *VAR_1 = ((void*)0);
    }
    hb_value_t * VAR_3 = FUNC_3(VAR_0);
    if (VAR_3 == ((void*)0))
        return 0;

    hb_value_t * VAR_4;
    VAR_2 = FUNC_0(VAR_3, &VAR_4);
    if (VAR_1 != ((void*)0))
    {
        *VAR_1 = FUNC_2(VAR_4);
    }
    FUNC_1(&VAR_3);
    FUNC_1(&VAR_4);
    return VAR_2;
}
