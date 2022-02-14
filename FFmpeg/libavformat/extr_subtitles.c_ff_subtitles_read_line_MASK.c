
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ptrdiff_t ;
typedef int FFTextReader ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 char FUNC_1 (int *) ;
 unsigned char FUNC_2 (int *) ;

ptrdiff_t FUNC_3(FFTextReader *VAR_1, char *VAR_2, size_t VAR_3)
{
    size_t VAR_4 = 0;
    if (!VAR_3)
        return 0;
    while (VAR_4 + 1 < VAR_3) {
        unsigned char VAR_5 = FUNC_2(VAR_1);
        if (!VAR_5)
            return FUNC_0(VAR_1) ? VAR_4 : VAR_0;
        if (VAR_5 == '\r' || VAR_5 == '\n')
            break;
        VAR_2[VAR_4++] = VAR_5;
        VAR_2[VAR_4] = '\0';
    }
    while (FUNC_1(VAR_1) == '\r')
        FUNC_2(VAR_1);
    if (FUNC_1(VAR_1) == '\n')
        FUNC_2(VAR_1);
    return VAR_4;
}
