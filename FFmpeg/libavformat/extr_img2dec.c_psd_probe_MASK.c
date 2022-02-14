
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_3__ {int* buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (char,char,char,char) ;

__attribute__((used)) static int FUNC_4(const AVProbeData *VAR_1)
{
    const uint8_t *VAR_2 = VAR_1->buf;
    int VAR_3 = 0;
    uint16_t VAR_4;

    if (FUNC_2(VAR_2) == FUNC_3('8','B','P','S')) {
        VAR_3 += 1;
    } else {
        return 0;
    }

    if ((VAR_2[4] == 0) && (VAR_2[5] == 1)) {
        VAR_3 += 1;
    } else {
        return 0;
    }

    if ((FUNC_2(VAR_2+6) == 0) && (FUNC_1(VAR_2+10) == 0))
        VAR_3 += 1;

    VAR_4 = FUNC_0(VAR_2+24);
    if ((VAR_4 <= 9) && (VAR_4 != 5) && (VAR_4 != 6))
        VAR_3 += 1;

    return VAR_0 + VAR_3;
}
