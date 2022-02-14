
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_1(
    char *VAR_3, char *VAR_4,
    int VAR_5, int VAR_6, int VAR_7, int VAR_8, int VAR_9)
{
    if (VAR_5 + VAR_8 < VAR_1 || VAR_7 + VAR_8 < VAR_1) {
        return;
    }
    if (VAR_5 - VAR_8 > VAR_0 || VAR_7 - VAR_8 > VAR_0) {
        return;
    }
    if (VAR_6 < 0 || VAR_6 >= VAR_2) {
        return;
    }
    if (VAR_4[FUNC_0(VAR_5, VAR_6, VAR_7)] >= VAR_8) {
        return;
    }
    if (!VAR_9 && VAR_3[FUNC_0(VAR_5, VAR_6, VAR_7)]) {
        return;
    }
    VAR_4[FUNC_0(VAR_5, VAR_6, VAR_7)] = VAR_8--;
    FUNC_1(VAR_3, VAR_4, VAR_5 - 1, VAR_6, VAR_7, VAR_8, 0);
    FUNC_1(VAR_3, VAR_4, VAR_5 + 1, VAR_6, VAR_7, VAR_8, 0);
    FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6 - 1, VAR_7, VAR_8, 0);
    FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6 + 1, VAR_7, VAR_8, 0);
    FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7 - 1, VAR_8, 0);
    FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7 + 1, VAR_8, 0);
}
