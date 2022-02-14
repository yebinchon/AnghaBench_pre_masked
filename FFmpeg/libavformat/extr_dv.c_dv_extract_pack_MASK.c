
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef enum dv_pack_type { ____Placeholder_dv_pack_type } dv_pack_type ;







__attribute__((used)) static const uint8_t *FUNC_0(const uint8_t *VAR_0, enum dv_pack_type VAR_1)
{
    int VAR_2;
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < 10; VAR_3++) {
        switch (VAR_1) {
        case 130:
            if (VAR_3&1) VAR_2 = (80 * 6 + 80 * 16 * 0 + 3 + VAR_3*12000);
            else VAR_2 = (80 * 6 + 80 * 16 * 3 + 3 + VAR_3*12000);
            break;
        case 131:
            if (VAR_3&1) VAR_2 = (80 * 6 + 80 * 16 * 1 + 3 + VAR_3*12000);
            else VAR_2 = (80 * 6 + 80 * 16 * 4 + 3 + VAR_3*12000);
            break;
        case 128:
            if (VAR_3&1) VAR_2 = (80 * 3 + 8 + VAR_3*12000);
            else VAR_2 = (80 * 5 + 48 + 5 + VAR_3*12000);
            break;
        case 129:
            VAR_2 = (80*1 + 3 + 3);
            break;
        default:
            return ((void*)0);
        }
        if (VAR_0[VAR_2] == VAR_1)
            break;
    }

    return VAR_0[VAR_2] == VAR_1 ? &VAR_0[VAR_2] : ((void*)0);
}
