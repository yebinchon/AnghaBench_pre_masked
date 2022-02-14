
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_4__ {int exp; int mant; int sign; } ;
typedef TYPE_1__ Float11 ;



__attribute__((used)) static inline int16_t FUNC_0(Float11* VAR_0, Float11* VAR_1)
{
        int VAR_2, VAR_3;

        VAR_3 = VAR_0->exp + VAR_1->exp;
        VAR_2 = (((VAR_0->mant * VAR_1->mant) + 0x30) >> 4);
        VAR_2 = VAR_3 > 19 ? VAR_2 << (VAR_3 - 19) : VAR_2 >> (19 - VAR_3);
        return (VAR_0->sign ^ VAR_1->sign) ? -VAR_2 : VAR_2;
}
