
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int buf_size; int * buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;

__attribute__((used)) static int FUNC_2(const AVProbeData *VAR_2)
{
    const uint8_t *VAR_3 = VAR_2->buf;

    if ( VAR_2->buf_size >= 528
        && (FUNC_1(VAR_3 + 520) & 0xFFFFFFFFFFFF) == 0x001102ff0c00
        && FUNC_0(VAR_3 + 520)
        && FUNC_0(VAR_3 + 518))
        return VAR_1 * 3 / 4;
    if ( (FUNC_1(VAR_3 + 8) & 0xFFFFFFFFFFFF) == 0x001102ff0c00
        && FUNC_0(VAR_3 + 8)
        && FUNC_0(VAR_3 + 6))
        return VAR_0 / 4;
    return 0;
}
