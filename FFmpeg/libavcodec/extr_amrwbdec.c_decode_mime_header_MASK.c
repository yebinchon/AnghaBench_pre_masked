
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int fr_cur_mode; int fr_quality; } ;
typedef TYPE_1__ AMRWBContext ;



__attribute__((used)) static int FUNC_0(AMRWBContext *VAR_0, const uint8_t *VAR_1)
{

    VAR_0->fr_cur_mode = VAR_1[0] >> 3 & 0x0F;
    VAR_0->fr_quality = (VAR_1[0] & 0x4) == 0x4;

    return 1;
}
