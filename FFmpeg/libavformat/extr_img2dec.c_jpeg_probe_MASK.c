
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int* buf; int buf_size; } ;
typedef TYPE_1__ AVProbeData ;
 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;



 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(const AVProbeData *VAR_3)
{
    const uint8_t *VAR_4 = VAR_3->buf;
    int VAR_5, VAR_6 = 129;

    if (FUNC_0(VAR_4) != 0xFFD8 ||
        FUNC_1(VAR_4) == 0xFFD8FFF7)
    return 0;

    VAR_4 += 2;
    for (VAR_5 = 0; VAR_5 < VAR_3->buf_size - 3; VAR_5++) {
        int VAR_7;
        if (VAR_4[VAR_5] != 0xFF)
            continue;
        VAR_7 = VAR_4[VAR_5 + 1];
        switch (VAR_7) {
        case 129:
            return 0;
        case 136:
        case 135:
        case 134:
        case 133:
        case 132:
        case 131:
        case 130:
            VAR_5 += FUNC_0(&VAR_4[VAR_5 + 2]) + 1;
            if (VAR_6 != 129)
                return 0;
            VAR_6 = 136;
            break;
        case 128:
            VAR_5 += FUNC_0(&VAR_4[VAR_5 + 2]) + 1;
            if (VAR_6 != 136 && VAR_6 != 128)
                return 0;
            VAR_6 = 128;
            break;
        case 137:
            if (VAR_6 != 128)
                return 0;
            VAR_6 = 137;
            break;
        case 138:
        case 155:
        case 154:
        case 147:
        case 146:
        case 145:
        case 144:
        case 143:
        case 142:
        case 141:
        case 140:
        case 153:
        case 152:
        case 151:
        case 150:
        case 149:
        case 148:
        case 139:
            VAR_5 += FUNC_0(&VAR_4[VAR_5 + 2]) + 1;
            break;
        default:
            if ( (VAR_7 > VAR_2 && VAR_7 < 136)
                || VAR_7 == VAR_1)
                return 0;
        }
    }

    if (VAR_6 == 137)
        return VAR_0 + 1;
    if (VAR_6 == 128)
        return VAR_0 / 2;
    return VAR_0 / 8;
}
