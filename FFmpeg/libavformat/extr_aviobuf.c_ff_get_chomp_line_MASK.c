
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVIOContext ;


 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (int *,char*,int) ;

int FUNC_2(AVIOContext *VAR_0, char *VAR_1, int VAR_2)
{
    int VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
    while (VAR_3 > 0 && FUNC_0(VAR_1[VAR_3 - 1]))
        VAR_1[--VAR_3] = '\0';
    return VAR_3;
}
