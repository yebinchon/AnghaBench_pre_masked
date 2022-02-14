
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct TYPE_3__ {scalar_t__ buf_size; int * buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char,char,char,int ) ;
 scalar_t__ FUNC_1 (int const**) ;
 scalar_t__ FUNC_2 (int const**) ;

__attribute__((used)) static int FUNC_3(const AVProbeData *VAR_2)
{
    int VAR_3;

    for (VAR_3 = 0; VAR_3 + VAR_1 <= VAR_2->buf_size; VAR_3++) {
        uint16_t VAR_4, VAR_5;
        uint32_t VAR_6;
        const uint8_t *VAR_7 = VAR_2->buf + VAR_3;

        if (FUNC_1(&VAR_7) != VAR_1)
            continue;
        VAR_4 = FUNC_1(&VAR_7);
        VAR_5 = FUNC_1(&VAR_7);
        if (!(VAR_4 == 320 &&
              VAR_5 == 240) && !(VAR_4 == 160 && VAR_5 == 120))
            continue;
        VAR_7 += 2;
        VAR_7 += 4;
        VAR_6 = FUNC_2(&VAR_7);
        if (VAR_6 != FUNC_0('M', 'L', '2', '0'))
            continue;

        if (VAR_3) {
            if (VAR_3 < 14)
                return VAR_0 / 2;
            else
                return VAR_0 / 3;
        } else {
            return VAR_0;
        }
    }

    return 0;
}
