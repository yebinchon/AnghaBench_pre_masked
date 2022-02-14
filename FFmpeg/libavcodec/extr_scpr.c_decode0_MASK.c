
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_3__ {int range; int code1; int code; } ;
typedef TYPE_1__ RangeCoder ;
typedef int GetByteContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(GetByteContext *VAR_2, RangeCoder *VAR_3, uint32_t VAR_4, uint32_t VAR_5, uint32_t VAR_6)
{
    uint32_t VAR_7;

    if (VAR_6 == 0)
        return VAR_0;

    VAR_7 = VAR_3->range * (uint64_t)VAR_4 / VAR_6;

    VAR_3->code1 += VAR_7 + 1;
    VAR_3->range = VAR_3->range * (uint64_t)(VAR_5 + VAR_4) / VAR_6 - (VAR_7 + 1);

    while (VAR_3->range < VAR_1 && FUNC_0(VAR_2) > 0) {
        uint32_t VAR_8 = FUNC_1(VAR_2);
        VAR_3->code = (VAR_3->code << 8) | VAR_8;
        VAR_3->code1 <<= 8;
        VAR_3->range <<= 8;
    }

    return 0;
}
