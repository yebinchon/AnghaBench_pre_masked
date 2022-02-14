
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_value_t ;


 int * FUNC_0 (char const*) ;
 int FUNC_1 (int *,int*,int*,int*) ;
 int FUNC_2 (int **) ;
 int * FUNC_3 (char const*) ;

int FUNC_4(const char *VAR_0,
                            int *VAR_1, int *VAR_2, int *VAR_3)
{
    int VAR_4;

    hb_value_t *VAR_5 = FUNC_3(VAR_0);
    if (VAR_5 == ((void*)0))
        VAR_5 = FUNC_0(VAR_0);
    if (VAR_5 == ((void*)0))
        return -1;

    VAR_4 = FUNC_1(VAR_5, VAR_1, VAR_2, VAR_3);
    FUNC_2(&VAR_5);

    return VAR_4;
}
