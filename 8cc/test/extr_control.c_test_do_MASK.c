
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1() {
    int VAR_0 = 0;
    int VAR_1 = 0;
    do {
        VAR_0 = VAR_0 + VAR_1++;
    } while (VAR_1 <= 100);
    FUNC_0(5050, VAR_0);

    VAR_1 = 0;
    do { VAR_1 = 37; } while (0);
    FUNC_0(37, VAR_1);

    VAR_0 = 0;
    VAR_1 = 0;
    do {
        if (VAR_1++ < 5) continue;
        VAR_0 += VAR_1;
        if (VAR_1 == 9) break;
    } while (VAR_1 < 10);
    FUNC_0(6 + 7 + 8 + 9, VAR_0);

    VAR_1 = 0;
    do {} while (VAR_1++ < 100);

    VAR_1 = 0;
    do; while (VAR_1++ < 100);

    float VAR_2 = 1;
    VAR_1 = 70;
    do VAR_1++; while (VAR_2 -= 0.5);
    FUNC_0(72, VAR_1);
}
