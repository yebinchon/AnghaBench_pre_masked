
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int CLOFEN; int CLOFSL; int COBR; int COBG; int COBB; int COAR; int COAG; int COAB; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(void) {
    if(VAR_0->CLOFEN & 0x40) {

        if(VAR_0->CLOFSL & 0x40) {

            VAR_3 = VAR_0->COBR & 0xFF;
            if(VAR_0->COBR & 0x100)
                VAR_3 |= 0xFFFFFF00;

            VAR_2 = VAR_0->COBG & 0xFF;
            if(VAR_0->COBG & 0x100)
                VAR_2 |= 0xFFFFFF00;

            VAR_1 = VAR_0->COBB & 0xFF;
            if(VAR_0->COBB & 0x100)
                VAR_1 |= 0xFFFFFF00;
        }
        else {

            VAR_3 = VAR_0->COAR & 0xFF;
            if(VAR_0->COAR & 0x100)
                VAR_3 |= 0xFFFFFF00;

            VAR_2 = VAR_0->COAG & 0xFF;
            if(VAR_0->COAG & 0x100)
                VAR_2 |= 0xFFFFFF00;

            VAR_1 = VAR_0->COAB & 0xFF;
            if(VAR_0->COAB & 0x100)
                VAR_1 |= 0xFFFFFF00;
        }
    }
    else
        VAR_3 = VAR_2 = VAR_1 = 0;
}
