
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GetByteContext ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;

int FUNC_5(GetByteContext *VAR_1, int *VAR_2, int *VAR_3)
{
    if (FUNC_1(VAR_1) < 8) {
        return VAR_0;
    }

    *VAR_2 = FUNC_2(VAR_1);
    if (*VAR_2 == FUNC_0("II")) {
        *VAR_2 = 1;
    } else if (*VAR_2 == FUNC_0("MM")) {
        *VAR_2 = 0;
    } else {
        return VAR_0;
    }

    if (FUNC_4(VAR_1, *VAR_2) != 42) {
        return VAR_0;
    }

    *VAR_3 = FUNC_3(VAR_1, *VAR_2);

    return 0;
}
