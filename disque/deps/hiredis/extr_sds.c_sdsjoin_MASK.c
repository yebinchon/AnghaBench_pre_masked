
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sds ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 () ;

sds FUNC_2(char **VAR_0, int VAR_1, char *VAR_2) {
    sds VAR_3 = FUNC_1();
    int VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
        VAR_3 = FUNC_0(VAR_3, VAR_0[VAR_4]);
        if (VAR_4 != VAR_1-1) VAR_3 = FUNC_0(VAR_3,VAR_2);
    }
    return VAR_3;
}
