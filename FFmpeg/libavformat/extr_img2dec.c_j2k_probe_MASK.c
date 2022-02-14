
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

__attribute__((used)) static int FUNC_2(const AVProbeData *VAR_1)
{
    const uint8_t *VAR_2 = VAR_1->buf;

    if (FUNC_1(VAR_2) == 0x0000000c6a502020 ||
        FUNC_0(VAR_2) == 0xff4fff51)
        return VAR_0 + 1;
    return 0;
}
