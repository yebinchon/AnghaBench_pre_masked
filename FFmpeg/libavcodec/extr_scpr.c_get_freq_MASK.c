
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int range; int code; } ;
typedef TYPE_1__ RangeCoder ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(RangeCoder *VAR_1, uint32_t VAR_2, uint32_t *VAR_3)
{
    if (VAR_2 == 0)
        return VAR_0;

    VAR_1->range = VAR_1->range / VAR_2;

    if (VAR_1->range == 0)
        return VAR_0;

    *VAR_3 = VAR_1->code / VAR_1->range;

    return 0;
}
