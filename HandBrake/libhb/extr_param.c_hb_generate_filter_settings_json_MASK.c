
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_value_t ;


 int * FUNC_0 (int,char const*,char const*,char const*) ;
 int FUNC_1 (int **) ;
 char* FUNC_2 (int *) ;

char *
FUNC_3(int VAR_0, const char *VAR_1,
                                 const char *VAR_2, const char *VAR_3)
{
    hb_value_t * VAR_4;

    VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
    if (VAR_4 == ((void*)0))
    {
        return ((void*)0);
    }

    char * VAR_5 = FUNC_2(VAR_4);
    FUNC_1(&VAR_4);
    return VAR_5;
}
