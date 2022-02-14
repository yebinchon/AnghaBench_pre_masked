
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FFTextReader ;
typedef int AVBPrint ;


 int FUNC_0 (int *,char,int) ;
 char FUNC_1 (int *) ;

int FUNC_2(FFTextReader *VAR_0, AVBPrint *VAR_1, char *VAR_2)
{
    int VAR_3 = 0;
    char VAR_4;

    if (!*VAR_2)
        *VAR_2 = FUNC_1(VAR_0);
    if (!*VAR_2)
        return 0;

    VAR_4 = *VAR_2 == '<' ? '>' : '<';
    do {
        FUNC_0(VAR_1, *VAR_2, 1);
        *VAR_2 = FUNC_1(VAR_0);
        VAR_3++;
    } while (*VAR_2 != VAR_4 && *VAR_2);
    if (VAR_4 == '>') {
        FUNC_0(VAR_1, '>', 1);
        *VAR_2 = 0;
    }
    return VAR_3;
}
