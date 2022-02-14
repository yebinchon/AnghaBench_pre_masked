
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(char VAR_0) {
    for (int VAR_1 = 7; VAR_1 >= 0; VAR_1--)
        if ((VAR_0 & (1 << VAR_1)) == 0)
            return 7 - VAR_1;
    return 8;
}
