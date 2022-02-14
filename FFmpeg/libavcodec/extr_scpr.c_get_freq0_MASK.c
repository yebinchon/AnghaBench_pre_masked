
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_3__ {int range; scalar_t__ code1; scalar_t__ code; } ;
typedef TYPE_1__ RangeCoder ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(RangeCoder *VAR_1, uint32_t VAR_2, uint32_t *VAR_3)
{
    if (VAR_1->range == 0)
        return VAR_0;

    *VAR_3 = VAR_2 * (uint64_t)(VAR_1->code - VAR_1->code1) / VAR_1->range;

    return 0;
}
