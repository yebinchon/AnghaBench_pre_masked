
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(int VAR_0, int VAR_1, int VAR_2)
{
    int VAR_3 = 0;
    int VAR_4 = 0;
    int VAR_5 = (VAR_0 + VAR_1 - 1);
    for (int VAR_6 = VAR_0; VAR_6 <= VAR_5; ++VAR_6) {
        ++VAR_3;
        if ((((VAR_6 + 1) % 32) == 0) || (VAR_6 == VAR_5)) {
            if (VAR_2 == VAR_4++) {
                return VAR_3;
            }
            VAR_3 = 0;
        }
    }
    return 0;
}
