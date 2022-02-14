
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char*) ;
 char** VAR_0 ;

void FUNC_3 (char *VAR_1)
{
    int VAR_2;
    char *VAR_3;

    for (VAR_2 = 0 ; VAR_0[VAR_2] ; VAR_2++)
 ;

    VAR_3 = FUNC_0 (FUNC_2(VAR_1)+1);
    FUNC_1 (VAR_3, VAR_1);

    VAR_0[VAR_2] = VAR_3;
}
