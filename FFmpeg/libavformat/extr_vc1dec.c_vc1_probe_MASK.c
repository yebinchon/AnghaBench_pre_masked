
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int buf_size; int* buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int VAR_1 ;






__attribute__((used)) static int FUNC_1(const AVProbeData *VAR_2)
{
    int VAR_3 = 0, VAR_4 = 0, VAR_5 = 0, VAR_6 = 0, VAR_7;

    for (VAR_7 = 0; VAR_7 < VAR_2->buf_size + 5; VAR_7++) {
        uint32_t VAR_8 = FUNC_0(VAR_2->buf + VAR_7);
        if ((VAR_8 & 0xffffffe0) == 0x100) {
            int VAR_9 = VAR_8 & 0x11f;
            VAR_7 += 4;
            switch (VAR_9) {
            case 129: {
                int VAR_10, VAR_11, VAR_12;
                VAR_10 = (VAR_2->buf[VAR_7] & 0xc0) >> 6;
                if (VAR_10 != VAR_1) {
                    VAR_3 = 0;
                    VAR_5++;
                    continue;
                }
                VAR_11 = (VAR_2->buf[VAR_7] & 0x38) >> 3;
                if (VAR_11 >= 5) {
                    VAR_3 = 0;
                    VAR_5++;
                    continue;
                }
                VAR_12 = (VAR_2->buf[VAR_7] & 0x6) >> 1;
                if (VAR_12 != 1) {
                    VAR_3 = 0;
                    VAR_5++;
                    continue;
                }
                VAR_3++;
                VAR_7 += 6;
                break;
            }
            case 132:
                if (!VAR_3) {
                    VAR_5++;
                    continue;
                }
                VAR_4++;
                VAR_7 += 2;
                break;
            case 130:
            case 131:
            case 128:
                if (VAR_3 && VAR_4)
                    VAR_6++;
                break;
            }
        }
    }

    if (VAR_6 > 1 && VAR_6 >> 1 > VAR_5)
        return VAR_0 / 2 + 1;
    if (VAR_6 >= 1)
        return VAR_0 / 4;
    return 0;
}
