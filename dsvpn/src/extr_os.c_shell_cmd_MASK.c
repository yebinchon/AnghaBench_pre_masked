
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int VAR_2 ;
 int FUNC_3 (char*,char**) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (unsigned char) ;
 int FUNC_6 (char*,char const*,size_t) ;
 int FUNC_7 (char*,int ) ;
 size_t FUNC_8 (char const*) ;
 int FUNC_9 (char const*,char const*,size_t) ;
 scalar_t__ FUNC_10 (scalar_t__,int*,int ) ;

int FUNC_11(const char *VAR_3[][2], const char *VAR_4, int VAR_5)
{
    char * VAR_6[64];
    char VAR_7[4096];
    pid_t VAR_8;
    size_t VAR_9 = 0, VAR_10 = 0, VAR_11, VAR_12;
    int VAR_13, VAR_14, VAR_15 = 1;

    VAR_2 = VAR_0;
    for (VAR_11 = 0; (VAR_13 = VAR_4[VAR_11]) != 0; VAR_11++) {
        if (FUNC_5((unsigned char) VAR_13)) {
            if (!VAR_15) {
                if (VAR_10 >= sizeof VAR_7) {
                    return -1;
                }
                VAR_7[VAR_10++] = 0;
            }
            VAR_15 = 1;
            continue;
        }
        if (VAR_15) {
            if (VAR_9 >= sizeof VAR_6 / sizeof VAR_6[0]) {
                return -1;
            }
            VAR_6[VAR_9++] = &VAR_7[VAR_10];
        }
        VAR_15 = 0;
        for (VAR_12 = 0; VAR_3[VAR_12][0] != ((void*)0); VAR_12++) {
            size_t VAR_16 = FUNC_8(VAR_3[VAR_12][0]), VAR_17;
            if (!FUNC_9(VAR_3[VAR_12][0], &VAR_4[VAR_11], VAR_16)) {
                VAR_17 = FUNC_8(VAR_3[VAR_12][1]);
                if (sizeof VAR_7 - VAR_10 <= VAR_17) {
                    return -1;
                }
                FUNC_6(&VAR_7[VAR_10], VAR_3[VAR_12][1], VAR_17);
                VAR_11 += VAR_16 - 1;
                VAR_10 += VAR_17;
                break;
            }
        }
        if (VAR_3[VAR_12][0] == ((void*)0)) {
            if (VAR_10 >= sizeof VAR_7) {
                return -1;
            }
            VAR_7[VAR_10++] = VAR_13;
        }
    }
    if (!VAR_15) {
        if (VAR_10 >= sizeof VAR_7) {
            return -1;
        }
        VAR_7[VAR_10++] = 0;
    }
    if (VAR_9 >= sizeof VAR_6 / sizeof VAR_6[0]) {
        return -1;
    }
    VAR_6[VAR_9] = ((void*)0);
    if ((VAR_8 = FUNC_4()) == (pid_t) -1) {
        return -1;
    } else if (VAR_8 == (pid_t) 0) {
        if (VAR_5) {
            FUNC_2(FUNC_2(FUNC_7("/dev/null", VAR_1), 2), 1);
        }
        FUNC_3(VAR_6[0], VAR_6);
        FUNC_1(1);
    } else if (FUNC_10(VAR_8, &VAR_14, 0) == (pid_t) -1 || !FUNC_0(VAR_14)) {
        return -1;
    }
    return 0;
}
