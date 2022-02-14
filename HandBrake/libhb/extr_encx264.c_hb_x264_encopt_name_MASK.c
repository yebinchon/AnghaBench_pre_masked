
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const*** VAR_0 ;
 int FUNC_0 (char const*,char const*) ;

const char * FUNC_1(const char *VAR_1)
{
    int VAR_2;
    for (VAR_2 = 0; VAR_0[VAR_2][0] != ((void*)0); VAR_2++)
        if (!FUNC_0(VAR_1, VAR_0[VAR_2][1]))
            return VAR_0[VAR_2][0];
    return VAR_1;
}
