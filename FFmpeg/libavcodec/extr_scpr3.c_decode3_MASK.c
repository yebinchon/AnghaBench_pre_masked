
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int code; } ;
typedef TYPE_1__ RangeCoder ;
typedef int GetByteContext ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(GetByteContext *VAR_0, RangeCoder *VAR_1, uint32_t VAR_2, uint32_t VAR_3)
{
    uint32_t VAR_4 = VAR_2 * (VAR_1->code >> 12) + (VAR_1->code & 0xFFF) - VAR_3;

    while (VAR_4 < 0x800000 && FUNC_0(VAR_0) > 0)
        VAR_4 = FUNC_1(VAR_0) | (VAR_4 << 8);
    VAR_1->code = VAR_4;

    return 0;
}
