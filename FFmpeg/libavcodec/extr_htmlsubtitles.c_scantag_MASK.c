
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(const char* VAR_0, char* VAR_1, int* VAR_2) {
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < 128; VAR_3++) {
        const char VAR_4 = *VAR_0++;
        switch (VAR_4) {
        case '\0':
            return 0;
        case '<':
            return 0;
        case '>':
            VAR_1[VAR_3] = '\0';
            *VAR_2 = VAR_3+1;
            return 1;
        default:
            break;
        }
        VAR_1[VAR_3] = VAR_4;
    }
    return 0;
}
