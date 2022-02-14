
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static int FUNC_0(const uint8_t ** VAR_0, const uint8_t * VAR_1)
{
    int VAR_2 = 0;
    for (; *VAR_0 < VAR_1; ++*VAR_0) {
        VAR_2 <<= 7;
        VAR_2 += **VAR_0 & 0x7f;
        if (!(**VAR_0 & 0x80)) {
            ++*VAR_0;
            return VAR_2;
        }
    }
    return 0;
}
