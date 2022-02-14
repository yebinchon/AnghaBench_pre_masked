
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int uint32_t ;
typedef unsigned int uint16_t ;
struct TYPE_4__ {unsigned int range; unsigned int value; } ;
typedef TYPE_1__ OpusRangeCoder ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (TYPE_1__*,unsigned int,unsigned int,unsigned int,unsigned int) ;

uint32_t FUNC_2(OpusRangeCoder *VAR_0, const uint16_t *VAR_1)
{
    unsigned int VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;

    VAR_4 = *VAR_1++;

    VAR_3 = VAR_0->range / VAR_4;
    VAR_5 = VAR_0->value / VAR_3 + 1;
    VAR_5 = VAR_4 - FUNC_0(VAR_5, VAR_4);

    for (VAR_2 = 0; VAR_1[VAR_2] <= VAR_5; VAR_2++);
    VAR_7 = VAR_1[VAR_2];
    VAR_6 = VAR_2 ? VAR_1[VAR_2-1] : 0;

    FUNC_1(VAR_0, VAR_3, VAR_6, VAR_7, VAR_4);

    return VAR_2;
}
