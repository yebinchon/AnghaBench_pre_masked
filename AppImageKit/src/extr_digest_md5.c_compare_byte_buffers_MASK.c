
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
bool FUNC_0(const char* VAR_0, const char* VAR_1, size_t VAR_2) {
    for (size_t VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
        if (VAR_0[VAR_3] != VAR_1[VAR_3]) {
            return 0;
        }
    }

    return 1;
}
