
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int pin; TYPE_1__* GPIOx; } ;
struct TYPE_3__ {int BRR; int BSRR; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 () ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__* VAR_7 ;

void FUNC_1(void) {
    bool VAR_8 = 0;
    bool VAR_9 = 0;
    static int VAR_10 = 0;

    if( FUNC_0() ) {
        VAR_8 = VAR_5;
        VAR_9 = VAR_6;
    }

    if((VAR_10++ & 1) == 0) {
        if(VAR_4) {
            VAR_7[VAR_0].GPIOx->BSRR = VAR_7[VAR_0].pin;
        }

        if(VAR_8) {
            VAR_7[VAR_2].GPIOx->BSRR = VAR_7[VAR_2].pin;

        }

        asm("NOP");
        asm("NOP");
        asm("NOP");
        asm("NOP");
        asm("NOP");
        asm("NOP");
        asm("NOP");
        asm("NOP");
        asm("NOP");
        if(VAR_8) {
            VAR_7[VAR_2].GPIOx->BRR = VAR_7[VAR_2].pin;

            VAR_5 = 0;
        }
        if(VAR_4) {
            VAR_7[VAR_0].GPIOx->BRR = VAR_7[VAR_0].pin;
        }

    } else {
        if(VAR_4) {
            VAR_7[VAR_1].GPIOx->BSRR = VAR_7[VAR_1].pin;
        }
        if(VAR_9) {
            VAR_7[VAR_3].GPIOx->BSRR = VAR_7[VAR_3].pin;
        }

        asm("NOP");
        asm("NOP");
        asm("NOP");
        asm("NOP");
        asm("NOP");
        asm("NOP");
        asm("NOP");
        asm("NOP");
        asm("NOP");
        if(VAR_9) {
            VAR_7[VAR_3].GPIOx->BRR = VAR_7[VAR_3].pin;
            VAR_6 = 0;
        }
        if(VAR_4) {
            VAR_7[VAR_1].GPIOx->BRR = VAR_7[VAR_1].pin;
        }
    }

}
