
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1() {
    int VAR_0 = 0;
    int VAR_1 = 0;
    while (VAR_1 <= 100)
        VAR_0 = VAR_0 + VAR_1++;
    FUNC_0(5050, VAR_0);

    VAR_0 = 1;
    VAR_1 = 0;
    while (VAR_1 <= 100) {
        VAR_0 = VAR_0 + VAR_1++;
    }
    FUNC_0(5051, VAR_0);

    VAR_0 = 0;
    VAR_1 = 0;
    while (VAR_1 < 10) {
        if (VAR_1++ < 5) continue;
        VAR_0 += VAR_1;
        if (VAR_1 == 9) break;
    }
    FUNC_0(6 + 7 + 8 + 9, VAR_0);

    VAR_1 = 0;
    while (VAR_1++ < 100)
        ;

    VAR_1 = 0;
    while (0.5) {
        VAR_1 = 67;
        break;
    }
    FUNC_0(67, VAR_1);
}
