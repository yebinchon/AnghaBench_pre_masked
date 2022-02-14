
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static BOOL FUNC_0(char *VAR_2, int VAR_3, char *VAR_4, int VAR_5)
{
    int VAR_6 = 0;

    if (VAR_5 > VAR_3)
        return VAR_0;

    while (VAR_3--)
    {
        if (*VAR_2++ == VAR_4[VAR_6])
        {
            if (++VAR_6 == VAR_5)
                return VAR_1;
        }
        else
            VAR_6 = 0;
    }

    return VAR_0;
}
