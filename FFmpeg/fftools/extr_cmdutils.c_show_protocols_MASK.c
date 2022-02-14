
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (void**,int) ;
 int FUNC_1 (char*,...) ;

int FUNC_2(void *VAR_0, const char *VAR_1, const char *VAR_2)
{
    void *VAR_3 = ((void*)0);
    const char *VAR_4;

    FUNC_1("Supported file protocols:\n"
           "Input:\n");
    while ((VAR_4 = FUNC_0(&VAR_3, 0)))
        FUNC_1("  %s\n", VAR_4);
    FUNC_1("Output:\n");
    while ((VAR_4 = FUNC_0(&VAR_3, 1)))
        FUNC_1("  %s\n", VAR_4);
    return 0;
}
