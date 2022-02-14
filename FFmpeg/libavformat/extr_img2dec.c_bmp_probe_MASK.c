
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int * buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;

__attribute__((used)) static int FUNC_3(const AVProbeData *VAR_1)
{
    const uint8_t *VAR_2 = VAR_1->buf;
    int VAR_3;

    if (FUNC_0(VAR_2) != 0x424d)
        return 0;

    VAR_3 = FUNC_1(VAR_2+14);
    if (VAR_3 < 12 || VAR_3 > 255)
        return 0;

    if (!FUNC_2(VAR_2 + 6)) {
        return VAR_0 + 1;
    }
    return VAR_0 / 4;
}
