
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;

BOOL FUNC_1(char *VAR_2, char *VAR_3)
{
    int VAR_4 = FUNC_0(VAR_2), VAR_5 = FUNC_0(VAR_3);

    if (VAR_4 != VAR_5)
        return VAR_0;

    while (VAR_4--)
    {
        if (*VAR_2++ != *VAR_3++)
            return VAR_0;
    }

    return VAR_1;
}
