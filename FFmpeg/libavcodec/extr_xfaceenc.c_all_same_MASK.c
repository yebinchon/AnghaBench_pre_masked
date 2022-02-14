
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static int FUNC_0(char *VAR_1, int VAR_2, int VAR_3)
{
    char VAR_4, *VAR_5;
    int VAR_6;

    VAR_4 = *VAR_1;
    while (VAR_3--) {
        VAR_5 = VAR_1;
        VAR_6 = VAR_2;
        while (VAR_6--)
            if (*(VAR_5++) != VAR_4)
                return 0;
        VAR_1 += VAR_0;
    }
    return 1;
}
