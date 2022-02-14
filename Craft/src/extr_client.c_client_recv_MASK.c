
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;

char *FUNC_5() {
    if (!VAR_1) {
        return 0;
    }
    char *VAR_5 = 0;
    FUNC_3(&VAR_2);
    char *VAR_6 = VAR_4 + VAR_3 - 1;
    while (VAR_6 >= VAR_4 && *VAR_6 != '\n') {
        VAR_6--;
    }
    if (VAR_6 >= VAR_4) {
        int VAR_7 = VAR_6 - VAR_4 + 1;
        VAR_5 = FUNC_0(sizeof(char) * (VAR_7 + 1));
        FUNC_1(VAR_5, VAR_4, sizeof(char) * VAR_7);
        VAR_5[VAR_7] = '\0';
        int VAR_8 = VAR_3 - VAR_7;
        FUNC_2(VAR_4, VAR_6 + 1, VAR_8);
        VAR_3 -= VAR_7;
        VAR_0 += VAR_7;
    }
    FUNC_4(&VAR_2);
    return VAR_5;
}
