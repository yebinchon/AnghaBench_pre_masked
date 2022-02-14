
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int buf_size; int* buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
__attribute__((used)) static int FUNC_0(const AVProbeData *VAR_1)
{
    uint32_t VAR_2 = -1;
    int VAR_3 = 0, VAR_4 = 0, VAR_5 = 0, VAR_6 = 0;
    int VAR_7;

    for (VAR_7 = 0; VAR_7 < VAR_1->buf_size - 1; VAR_7++) {
        VAR_2 = (VAR_2 << 8) + VAR_1->buf[VAR_7];
        if ((VAR_2 & 0xffffff00) == 0x100) {
            uint8_t VAR_8 = VAR_1->buf[VAR_7 + 1];
            int VAR_9 = (VAR_2 & 0x7E) >> 1;

            if (VAR_2 & 0x81)
                return 0;

            if (VAR_8 & 0xf8)
                return 0;

            switch (VAR_9) {
            case 128: VAR_3++; break;
            case 129: VAR_4++; break;
            case 130: VAR_5++; break;
            case 136:
            case 135:
            case 134:
            case 133:
            case 132:
            case 131: VAR_6++; break;
            }
        }
    }

    if (VAR_3 && VAR_4 && VAR_5 && VAR_6)
        return VAR_0 + 1;
    return 0;
}
