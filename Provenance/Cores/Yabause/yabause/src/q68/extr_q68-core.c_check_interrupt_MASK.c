
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int irq; scalar_t__ halted; scalar_t__ exception; } ;
typedef TYPE_1__ Q68State ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int const FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline void FUNC_2(Q68State *VAR_2)
{
    const int VAR_3 = VAR_2->irq & 7;
    if (FUNC_1(VAR_3 > FUNC_0(VAR_2)
              || VAR_3 == 7
    )) {
        if (VAR_2->halted != VAR_1) {
            VAR_2->irq = 0;
            VAR_2->halted = 0;
            VAR_2->exception = VAR_0 + (VAR_3-1);
        }
    }
}
