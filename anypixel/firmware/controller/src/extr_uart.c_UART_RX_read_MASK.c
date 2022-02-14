
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_3__ {int configured; int frame_available; int rx_fifo; } ;
typedef TYPE_1__ CONFIG_USART_ConfigState ;


 int FUNC_0 (int ,int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (scalar_t__,int *) ;
 int FUNC_3 (int) ;

bool FUNC_4(CONFIG_USART_ConfigState *VAR_0, char *VAR_1, uint16_t VAR_2) {
 bool VAR_3;
 uint16_t VAR_4;

 FUNC_3(VAR_0->configured == 1);

    VAR_3 = FUNC_0(VAR_0->rx_fifo, (uint8_t*)VAR_1, VAR_2);
 if(VAR_3) {




        do {
            VAR_4 = FUNC_1(&VAR_0->frame_available);
            if(VAR_4 < VAR_2)
                VAR_4 = 0;
            else
                VAR_4 -= VAR_2;
        } while( FUNC_2(VAR_4, &VAR_0->frame_available));


 }
 return VAR_3;
}
