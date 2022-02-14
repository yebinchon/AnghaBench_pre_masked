
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVDictionary ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int **,char const**,char const*,char const*,int) ;

int FUNC_1(AVDictionary **VAR_2, const char *VAR_3,
                         const char *VAR_4, const char *VAR_5,
                         int VAR_6)
{
    int VAR_7;

    if (!VAR_3)
        return 0;


    VAR_6 &= ~(VAR_0 | VAR_1);

    while (*VAR_3) {
        if ((VAR_7 = FUNC_0(VAR_2, &VAR_3, VAR_4, VAR_5, VAR_6)) < 0)
            return VAR_7;

        if (*VAR_3)
            VAR_3++;
    }

    return 0;
}
