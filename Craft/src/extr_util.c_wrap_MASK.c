
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char*,char*,int) ;
 char* FUNC_7 (char*,char*,char**) ;

int FUNC_8(const char *VAR_0, int VAR_1, char *VAR_2, int VAR_3) {
    *VAR_2 = '\0';
    char *VAR_4 = FUNC_2(sizeof(char) * (FUNC_5(VAR_0) + 1));
    FUNC_3(VAR_4, VAR_0);
    int VAR_5 = FUNC_0(' ');
    int VAR_6 = 0;
    char *VAR_7, *VAR_8;
    char *VAR_9 = FUNC_7(VAR_4, "\r\n", &VAR_7);
    while (VAR_9) {
        int VAR_10 = 0;
        char *VAR_11 = FUNC_7(VAR_9, " ", &VAR_8);
        while (VAR_11) {
            int VAR_12 = FUNC_4(VAR_11);
            if (VAR_10) {
                if (VAR_10 + VAR_12 > VAR_1) {
                    VAR_10 = 0;
                    VAR_6++;
                    FUNC_6(VAR_2, "\n", VAR_3 - FUNC_5(VAR_2) - 1);
                }
                else {
                    FUNC_6(VAR_2, " ", VAR_3 - FUNC_5(VAR_2) - 1);
                }
            }
            FUNC_6(VAR_2, VAR_11, VAR_3 - FUNC_5(VAR_2) - 1);
            VAR_10 += VAR_12 + VAR_5;
            VAR_11 = FUNC_7(((void*)0), " ", &VAR_8);
        }
        VAR_6++;
        FUNC_6(VAR_2, "\n", VAR_3 - FUNC_5(VAR_2) - 1);
        VAR_9 = FUNC_7(((void*)0), "\r\n", &VAR_7);
    }
    FUNC_1(VAR_4);
    return VAR_6;
}
