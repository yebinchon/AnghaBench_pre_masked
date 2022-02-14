
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef size_t uint16_t ;



__attribute__((used)) static int FUNC_0(const uint8_t * VAR_0, size_t VAR_1)
{
    if (VAR_1 == 1) {
        return 0;
    }

    int VAR_2 = 0;
    uint16_t VAR_3=0;
    size_t VAR_4 = 0;

    while (VAR_3 < VAR_1) {
        VAR_4 = VAR_0[VAR_3++];
        if (!VAR_4) {
            break;
        }
        if ((VAR_3+VAR_4) > VAR_1) {
            return -1;
        }
        VAR_3+=VAR_4;
        VAR_2++;
    }
    return VAR_2;
}
