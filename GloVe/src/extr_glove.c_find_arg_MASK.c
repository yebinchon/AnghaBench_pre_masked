
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*) ;

int FUNC_3(char *VAR_0, int VAR_1, char **VAR_2) {
    int VAR_3;
    for (VAR_3 = 1; VAR_3 < VAR_1; VAR_3++) {
        if (!FUNC_2(VAR_0, VAR_2[VAR_3])) {
            if (VAR_3 == VAR_1 - 1) {
                FUNC_1("No argument given for %s\n", VAR_0);
                FUNC_0(1);
            }
            return VAR_3;
        }
    }
    return -1;
}
