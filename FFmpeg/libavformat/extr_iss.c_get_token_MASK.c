
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVIOContext ;


 char FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(AVIOContext *VAR_0, char *VAR_1, int VAR_2)
{
    int VAR_3 = 0;
    char VAR_4;

    while ((VAR_4 = FUNC_0(VAR_0))) {
        if(VAR_4 == ' ')
            break;
        if (VAR_3 < VAR_2-1)
            VAR_1[VAR_3++] = VAR_4;
    }

    if(!VAR_4)
        FUNC_0(VAR_0);

    VAR_1[VAR_3] = 0;
}
