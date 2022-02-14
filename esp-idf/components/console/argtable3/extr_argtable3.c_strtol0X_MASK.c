
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 long FUNC_1 (char const*,char**,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static long int FUNC_3(const char * VAR_0,
                         const char * *VAR_1,
                         char VAR_2,
                         int VAR_3)
{
    long int VAR_4;
    int VAR_5 = 1;
    const char *VAR_6 = VAR_0;


    while (FUNC_0((int) *VAR_6))
        VAR_6++;



    switch (*VAR_6)
    {
    case '+':
        VAR_6++;
        VAR_5 = 1;
        break;
    case '-':
        VAR_6++;
        VAR_5 = -1;
        break;
    default:
        VAR_5 = 1;
        break;
    }



    if ((*VAR_6++) != '0')
    {

        *VAR_1 = VAR_0;
        return 0;
    }

    if (FUNC_2((int) *VAR_6++) != FUNC_2((int) VAR_2))
    {

        *VAR_1 = VAR_0;
        return 0;
    }



    VAR_4 = FUNC_1(VAR_6, (char * *)VAR_1, VAR_3);
    if (*VAR_1 == VAR_6)
    {

        *VAR_1 = VAR_0;
        return 0;
    }


    return VAR_5 * VAR_4;
}
