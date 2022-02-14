
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLfloat ;


 int FUNC_0 (int,float) ;
 int FUNC_1 (char) ;
 int FUNC_2 (int *,float,float,float,float,int,char) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*,char*,char**) ;
 int FUNC_6 (char const*,float,char*,int) ;

int FUNC_7(
    GLfloat *VAR_0, float VAR_1, float VAR_2, float VAR_3, int VAR_4, const char *VAR_5)
{
    static const int VAR_6[8] = {0, 0, -1, 1, 1, 0, -1, 0};
    static const int VAR_7[8] = {1, -1, 0, 0, 0, -1, 0, 1};
    static const int VAR_8[8] = {0, 0, 0, 0, 0, 1, 0, -1};
    static const int VAR_9[8] = {-1, -1, -1, -1, 0, 0, 0, 0};
    static const int VAR_10[8] = {0, 0, 0, 0, 1, 0, -1, 0};
    if (VAR_4 < 0 || VAR_4 >= 8) {
        return 0;
    }
    int VAR_11 = 0;
    float VAR_12 = 64;
    float VAR_13 = 1.25;
    char VAR_14[1024];
    int VAR_15 = FUNC_6(VAR_5, VAR_12, VAR_14, 1024);
    VAR_15 = FUNC_0(VAR_15, 5);
    int VAR_16 = VAR_6[VAR_4];
    int VAR_17 = VAR_7[VAR_4];
    int VAR_18 = VAR_8[VAR_4];
    int VAR_19 = VAR_9[VAR_4];
    int VAR_20 = VAR_10[VAR_4];
    float VAR_21 = 1.0 / (VAR_12 / 10);
    float VAR_22 = VAR_1 - VAR_21 * (VAR_15 - 1) * (VAR_13 / 2) * VAR_18;
    float VAR_23 = VAR_2 - VAR_21 * (VAR_15 - 1) * (VAR_13 / 2) * VAR_19;
    float VAR_24 = VAR_3 - VAR_21 * (VAR_15 - 1) * (VAR_13 / 2) * VAR_20;
    char *VAR_25;
    char *VAR_26 = FUNC_5(VAR_14, "\n", &VAR_25);
    while (VAR_26) {
        int VAR_27 = FUNC_4(VAR_26);
        int VAR_28 = FUNC_3(VAR_26);
        VAR_28 = FUNC_0(VAR_28, VAR_12);
        float VAR_29 = VAR_22 - VAR_16 * VAR_28 / VAR_12 / 2;
        float VAR_30 = VAR_23;
        float VAR_31 = VAR_24 - VAR_17 * VAR_28 / VAR_12 / 2;
        for (int VAR_32 = 0; VAR_32 < VAR_27; VAR_32++) {
            int VAR_33 = FUNC_1(VAR_26[VAR_32]);
            VAR_28 -= VAR_33;
            if (VAR_28 < 0) {
                break;
            }
            VAR_29 += VAR_16 * VAR_33 / VAR_12 / 2;
            VAR_31 += VAR_17 * VAR_33 / VAR_12 / 2;
            if (VAR_26[VAR_32] != ' ') {
                FUNC_2(
                    VAR_0 + VAR_11 * 30, VAR_29, VAR_30, VAR_31, VAR_21 / 2, VAR_4, VAR_26[VAR_32]);
                VAR_11++;
            }
            VAR_29 += VAR_16 * VAR_33 / VAR_12 / 2;
            VAR_31 += VAR_17 * VAR_33 / VAR_12 / 2;
        }
        VAR_22 += VAR_21 * VAR_13 * VAR_18;
        VAR_23 += VAR_21 * VAR_13 * VAR_19;
        VAR_24 += VAR_21 * VAR_13 * VAR_20;
        VAR_26 = FUNC_5(((void*)0), "\n", &VAR_25);
        VAR_15--;
        if (VAR_15 <= 0) {
            break;
        }
    }
    return VAR_11;
}
