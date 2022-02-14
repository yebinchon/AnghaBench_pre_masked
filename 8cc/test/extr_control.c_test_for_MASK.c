
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1() {
    int VAR_0;
    int VAR_1 = 0;
    for (VAR_0 = 0; VAR_0 < 5; VAR_0++) {
        VAR_1 = VAR_1 + VAR_0;
    }
    FUNC_0(10, VAR_1);

    VAR_1 = 0;
    for (VAR_0 = 0; VAR_0 < 5; VAR_0++) {
        VAR_1 = VAR_1 + VAR_0;
    }
    FUNC_0(10, VAR_1);

    VAR_1 = 0;
    for (VAR_0 = 0; VAR_0 < 100; VAR_0++) {
        if (VAR_0 < 5) continue;
        if (VAR_0 == 9) break;
        VAR_1 += VAR_0;
    }
    FUNC_0(5 + 6 + 7 + 8, VAR_1);

    for (int VAR_2 = 3, VAR_3 = 5, VAR_4 = 8; VAR_2 < 100; VAR_2++, VAR_3++, VAR_4+=2)
        FUNC_0(VAR_4, VAR_2 + VAR_3);

    for (;;)
        break;
    for (VAR_0 = 0; VAR_0 < 100; VAR_0++)
        ;

    VAR_0 = 0;
    for (; 0.5;) {
        VAR_0 = 68;
        break;
    }
    FUNC_0(68, VAR_0);
}
