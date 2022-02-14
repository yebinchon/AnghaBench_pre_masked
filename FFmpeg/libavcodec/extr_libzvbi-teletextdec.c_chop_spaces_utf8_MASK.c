
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(const unsigned char* VAR_0, int VAR_1)
{
    VAR_0 += VAR_1;
    while (VAR_1 > 0) {
        if (*--VAR_0 != ' ' || (VAR_1-1 > 0 && *(VAR_0-1) & 0x80))
            break;
        --VAR_1;
    }
    return VAR_1;
}
