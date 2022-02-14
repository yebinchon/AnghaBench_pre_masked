
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int code; int range; } ;
typedef TYPE_1__ RangeCoder ;
typedef int GetByteContext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(GetByteContext *VAR_1, RangeCoder *VAR_2, uint32_t VAR_3, uint32_t VAR_4, uint32_t VAR_5)
{
    VAR_2->code -= VAR_3 * VAR_2->range;
    VAR_2->range *= VAR_4;

    while (VAR_2->range < VAR_0 && FUNC_0(VAR_1) > 0) {
        uint32_t VAR_6 = FUNC_1(VAR_1);
        VAR_2->code = (VAR_2->code << 8) | VAR_6;
        VAR_2->range <<= 8;
    }

    return 0;
}
