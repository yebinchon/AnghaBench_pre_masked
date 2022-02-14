
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sds ;


 int FUNC_0 (int ,char const*,size_t) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;

sds FUNC_3(sds *VAR_0, int VAR_1, const char *VAR_2, size_t VAR_3) {
    sds VAR_4 = FUNC_2();
    int VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
        VAR_4 = FUNC_1(VAR_4, VAR_0[VAR_5]);
        if (VAR_5 != VAR_1-1) VAR_4 = FUNC_0(VAR_4,VAR_2,VAR_3);
    }
    return VAR_4;
}
