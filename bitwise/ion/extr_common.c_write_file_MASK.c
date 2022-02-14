
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 size_t FUNC_2 (char const*,size_t,int,int *) ;

bool FUNC_3(const char *VAR_0, const char *VAR_1, size_t VAR_2) {
    FILE *VAR_3 = FUNC_1(VAR_0, "w");
    if (!VAR_3) {
        return 0;
    }
    size_t VAR_4 = FUNC_2(VAR_1, VAR_2, 1, VAR_3);
    FUNC_0(VAR_3);
    return VAR_4 == 1;
}
