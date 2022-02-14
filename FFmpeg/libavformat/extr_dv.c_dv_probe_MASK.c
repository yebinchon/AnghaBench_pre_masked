
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buf_size; scalar_t__ buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 unsigned int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(const AVProbeData *VAR_1)
{
    unsigned VAR_2 = 0;
    int VAR_3;
    int VAR_4 = 0;
    int VAR_5 = 0;
    int VAR_6 = 0;

    if (VAR_1->buf_size < 5)
        return 0;

    for (VAR_3 = 0; VAR_3 < VAR_1->buf_size-4; VAR_3++) {
        unsigned VAR_7 = FUNC_0(VAR_1->buf+VAR_3);
        if ((VAR_7 & 0x0007f840) == 0x00070000) {


            if ((VAR_7 & 0xff07ff7f) == 0x1f07003f) {
                VAR_6++;
                if ((VAR_7 & 0xffffff7f) == 0x1f07003f) {
                    VAR_4++;
                    if (!VAR_3)
                        VAR_5 = 1;
                }
            }
            if (VAR_7 == 0x003f0700 || VAR_7 == 0xff3f0700)
                VAR_2 = VAR_3;
            if (VAR_7 == 0xff3f0701 && VAR_3 - VAR_2 == 80)
                VAR_4++;
        }
    }

    if (VAR_4 && VAR_1->buf_size / VAR_4 < 1024 * 1024) {
        if (VAR_4 > 4 || VAR_5 ||
            (VAR_6 >= 10 &&
             VAR_1->buf_size / VAR_6 < 24000))

            return VAR_0 * 3 / 4;
        return VAR_0 / 4;
    }
    return 0;
}
