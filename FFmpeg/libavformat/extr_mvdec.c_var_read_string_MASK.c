
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVIOContext ;


 int VAR_0 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (int *,int,char*,int) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static char *FUNC_3(AVIOContext *VAR_1, int VAR_2)
{
    int VAR_3;
    char *VAR_4;

    if (VAR_2 < 0 || VAR_2 == VAR_0)
        return ((void*)0);

    VAR_4 = FUNC_0(VAR_2 + 1);
    if (!VAR_4)
        return ((void*)0);
    VAR_3 = FUNC_1(VAR_1, VAR_2, VAR_4, VAR_2 + 1);
    if (VAR_3 < VAR_2)
        FUNC_2(VAR_1, VAR_2 - VAR_3);
    return VAR_4;
}
