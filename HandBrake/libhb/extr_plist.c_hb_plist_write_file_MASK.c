
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_value_t ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int *,int *) ;

void
FUNC_3(const char *VAR_0, hb_value_t *VAR_1)
{
    FILE *VAR_2;

    VAR_2 = FUNC_1(VAR_0, "w");
    if (VAR_2 == ((void*)0))
        return;

    FUNC_2(VAR_2, VAR_1);
    FUNC_0(VAR_2);
}
