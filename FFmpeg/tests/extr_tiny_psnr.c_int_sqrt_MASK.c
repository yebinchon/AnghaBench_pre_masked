
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;



__attribute__((used)) static uint64_t FUNC_0(uint64_t VAR_0)
{
    uint64_t VAR_1 = 0;
    uint64_t VAR_2 = 0;
    int VAR_3;

    for (VAR_3 = 31; VAR_3 >= 0; VAR_3--) {
        uint64_t VAR_4 = VAR_2 + (1ULL << (VAR_3 * 2)) + (VAR_1 << VAR_3) * 2;
        if (VAR_4 <= VAR_0) {
            VAR_2 = VAR_4;
            VAR_1 += 1ULL << VAR_3;
        }
    }
    return VAR_1;
}
