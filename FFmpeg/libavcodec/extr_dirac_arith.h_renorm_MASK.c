
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int range; int low; scalar_t__ counter; } ;
typedef TYPE_1__ DiracArith ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(DiracArith *VAR_0)
{







    while (VAR_0->range <= 0x4000) {
        VAR_0->low <<= 1;
        VAR_0->range <<= 1;
        VAR_0->counter++;
    }

}
