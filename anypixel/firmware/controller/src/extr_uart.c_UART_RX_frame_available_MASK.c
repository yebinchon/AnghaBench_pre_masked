
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {int configured; int frame_available; } ;
typedef TYPE_1__ CONFIG_USART_ConfigState ;


 int FUNC_0 (int) ;

uint16_t FUNC_1(CONFIG_USART_ConfigState *VAR_0) {
    FUNC_0(VAR_0->configured == 1);
    return VAR_0->frame_available;
}
