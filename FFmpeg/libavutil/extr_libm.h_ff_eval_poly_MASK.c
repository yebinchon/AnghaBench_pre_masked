
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline double FUNC_0(const double *VAR_0, int VAR_1, double VAR_2) {
    double VAR_3 = VAR_0[VAR_1-1];
    int VAR_4;
    for (VAR_4 = VAR_1-2; VAR_4 >= 0; --VAR_4) {
        VAR_3 *= VAR_2;
        VAR_3 += VAR_0[VAR_4];
    }
    return VAR_3;
}
