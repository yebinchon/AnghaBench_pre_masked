
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int* buf; int buf_size; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int const) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int* FUNC_6 (int const*,int const*,int*) ;

__attribute__((used)) static int FUNC_7(const AVProbeData *VAR_1)
{
    uint32_t VAR_2= -1, VAR_3=0, VAR_4=0, VAR_5=0;
    uint8_t VAR_6=0;
    const uint8_t *VAR_7 = VAR_1->buf, *VAR_8 = VAR_1->buf + VAR_1->buf_size, *VAR_9=0;
    if (FUNC_0(VAR_1->buf) != 0x1B0){
        return 0;
    }

    while (VAR_7 < VAR_8) {
        VAR_7 = FUNC_6(VAR_7, VAR_8, &VAR_2);
        VAR_6 = VAR_2 & 0xFF;
        if ((VAR_2 & 0xffffff00) == 0x100) {
            if (FUNC_5(VAR_6)) {
                if (VAR_9 && !VAR_3) {
                    VAR_3 = VAR_7 - VAR_9;
                }
                if (FUNC_4(VAR_6)) {
                    if (!FUNC_1(*VAR_7))
                        return 0;
                    VAR_9 = VAR_7;
                    VAR_5++;
                } else if (FUNC_3(VAR_6)) {
                    VAR_4++;
                } else if (FUNC_2(VAR_6)) {
                    break;
                }
            }
        }
    }
    if (VAR_5 && VAR_3 >= 21 && VAR_4){
        return VAR_0 + 2;
    }

    return 0;
}
