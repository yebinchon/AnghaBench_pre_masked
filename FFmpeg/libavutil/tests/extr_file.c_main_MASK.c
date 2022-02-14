
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;


 scalar_t__ FUNC_0 (char*,char**,size_t*,int ,int *) ;
 int FUNC_1 (char*,size_t) ;
 int FUNC_2 (char*,char*) ;

int FUNC_3(void)
{
    uint8_t *VAR_0;
    size_t VAR_1;
    if (FUNC_0("file.c", &VAR_0, &VAR_1, 0, ((void*)0)) < 0)
        return 1;

    VAR_0[0] = 's';
    FUNC_2("%s", VAR_0);
    FUNC_1(VAR_0, VAR_1);
    return 0;
}
