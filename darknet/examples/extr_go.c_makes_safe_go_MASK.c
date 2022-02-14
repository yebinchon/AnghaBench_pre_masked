
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (float*,int) ;

__attribute__((used)) static int FUNC_1(float *VAR_0, int *VAR_1, int VAR_2, int VAR_3, int VAR_4){
    if (VAR_3 < 0 || VAR_3 >= 19 || VAR_4 < 0 || VAR_4 >= 19) return 0;
    if (FUNC_0(VAR_0,VAR_3*19 + VAR_4) == -VAR_2){
        if (VAR_1[VAR_3*19 + VAR_4] > 1) return 0;
        else return 1;
    }
    if (!FUNC_0(VAR_0,VAR_3*19 + VAR_4)) return 1;
    if (VAR_1[VAR_3*19 + VAR_4] > 1) return 1;
    return 0;
}
