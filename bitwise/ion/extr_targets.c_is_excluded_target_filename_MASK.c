
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (char const*) ;
 int VAR_1 ;
 int VAR_2 ;

bool FUNC_4(const char *VAR_3) {
    const char *VAR_4 = VAR_3 + FUNC_3(VAR_3);

    const char *VAR_5 = VAR_4;
    while (VAR_5 != VAR_3 && VAR_5[-1] != '_') {
        VAR_5--;
    }
    char VAR_6[VAR_0];
    if (VAR_5 == VAR_3) {
        VAR_6[0] = 0;
    } else {
        FUNC_2(VAR_6, VAR_5, VAR_4 - VAR_5);
        VAR_6[VAR_4 - VAR_5] = 0;
        VAR_5--;
    }

    const char *VAR_7 = VAR_5;
    while (VAR_7 != VAR_3 && VAR_7[-1] != '_') {
        VAR_7--;
    }
    char VAR_8[VAR_0];
    if (VAR_7 == VAR_3) {
        VAR_8[0] = 0;
    } else {
        FUNC_2(VAR_8, VAR_7, VAR_5 - VAR_7);
        VAR_8[VAR_5 - VAR_7] = 0;
    }

    int VAR_9 = FUNC_1(VAR_6);
    int VAR_10 = FUNC_0(VAR_6);
    int VAR_11 = FUNC_1(VAR_8);
    int VAR_12 = FUNC_0(VAR_8);
    if (VAR_10 != -1 && VAR_11 != -1) {
        return VAR_10 != VAR_1 || VAR_11 != VAR_2;
    } else if (VAR_12 != -1 && VAR_9 != -1) {
        return VAR_12 != VAR_1 || VAR_9 != VAR_2;
    } else if (VAR_9 != -1) {
        return VAR_9 != VAR_2;
    } else if (VAR_10 != -1) {
        return VAR_10 != VAR_1;
    } else {
        return 0;
    }
}
