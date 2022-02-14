
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVIOContext ;


 int FUNC_0 (int *) ;
 char FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;

int FUNC_3(AVIOContext *VAR_0, char *VAR_1, int VAR_2)
{
    int VAR_3 = 0;
    char VAR_4;

    do {
        VAR_4 = FUNC_1(VAR_0);
        if (VAR_4 && VAR_3 < VAR_2-1)
            VAR_1[VAR_3++] = VAR_4;
    } while (VAR_4 != '\n' && VAR_4 != '\r' && VAR_4);
    if (VAR_4 == '\r' && FUNC_1(VAR_0) != '\n' && !FUNC_0(VAR_0))
        FUNC_2(VAR_0, -1);

    VAR_1[VAR_3] = 0;
    return VAR_3;
}
