
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
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(const AVProbeData *VAR_1)
{
    int VAR_2, VAR_3, VAR_4;
    const uint8_t *VAR_5 = VAR_1->buf + VAR_1->buf_size;
    int VAR_6, VAR_7;
    int VAR_8 = 0;

    for(VAR_2=0; VAR_2<VAR_1->buf_size; VAR_2++){
        if (VAR_1->buf[VAR_2] == 0x0f) {
            const uint8_t *VAR_9 = VAR_1->buf + VAR_2;
            uint8_t VAR_10[6] = {0};
            int VAR_11 = 255;
            for(VAR_3=0; 6 < VAR_5 - VAR_9; VAR_3++) {
                if (*VAR_9 != 0x0f)
                    break;
                VAR_6 = VAR_9[1];

                VAR_7 = FUNC_0(VAR_9 + 4);
                if (VAR_6 == 0x80) {
                    ;
                } else if (VAR_6 >= 0x10 && VAR_6 <= 0x14) {
                    VAR_10[VAR_6 - 0x10] ++;
                } else
                    break;
                if (6 + VAR_7 > VAR_5 - VAR_9)
                    break;
                VAR_9 += 6 + VAR_7;
            }
            for (VAR_4=0; VAR_4 < 4; VAR_4++) {
                VAR_11 = FUNC_1(VAR_11, VAR_10[VAR_4]);
            }
            if (VAR_11 && VAR_3 > VAR_8)
                VAR_8 = VAR_3;
        }
    }

    if (VAR_8 > 5)
        return VAR_0;

    return 0;
}
