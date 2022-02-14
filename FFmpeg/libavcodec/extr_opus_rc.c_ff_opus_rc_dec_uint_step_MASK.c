
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int range; int value; } ;
typedef TYPE_1__ OpusRangeCoder ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*,int,int,int,int) ;

uint32_t FUNC_2(OpusRangeCoder *VAR_0, int VAR_1)
{

    uint32_t VAR_2, VAR_3, VAR_4, VAR_5 = (VAR_1+1)*3 + VAR_1;
    VAR_3 = VAR_0->range / VAR_5;
    VAR_4 = VAR_0->value / VAR_3 + 1;
    VAR_4 = VAR_5 - FUNC_0(VAR_4, VAR_5);

    VAR_2 = (VAR_4 < (VAR_1+1)*3) ? VAR_4/3 : VAR_4 - (VAR_1+1)*2;

    FUNC_1(VAR_0, VAR_3, (VAR_2 <= VAR_1) ? 3*(VAR_2+0) : (VAR_2-1-VAR_1) + 3*(VAR_1+1),
                       (VAR_2 <= VAR_1) ? 3*(VAR_2+1) : (VAR_2-0-VAR_1) + 3*(VAR_1+1), VAR_5);
    return VAR_2;
}
