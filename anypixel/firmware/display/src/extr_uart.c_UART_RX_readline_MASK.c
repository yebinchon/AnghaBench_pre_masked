
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_4__ {int configured; int rx_fifo; } ;
typedef TYPE_1__ CONFIG_USART_ConfigState ;


 scalar_t__ FUNC_0 (int ) ;
 char FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int,char*,int) ;
 int FUNC_3 (TYPE_1__*,char*,int) ;
 int FUNC_4 (int) ;

uint16_t FUNC_5(CONFIG_USART_ConfigState *VAR_0, char *VAR_1, uint16_t VAR_2) {
 int VAR_3;

 FUNC_4(VAR_0->configured == 1);

 VAR_3 = FUNC_2(VAR_0->rx_fifo, (uint8_t*)VAR_1, VAR_2-1, "\r\n", 2);
 if(VAR_3 == 0)
     return 0;

 if(VAR_1[VAR_3-1] == '\r') {
  VAR_3--;

  if( FUNC_0(VAR_0->rx_fifo) && FUNC_1(VAR_0->rx_fifo) == '\n' ) {

   char VAR_4[2];
   FUNC_3(VAR_0, VAR_4, 1);
  }
 }
 if(VAR_1[VAR_3-1] == '\n')
  VAR_3--;
    VAR_1[VAR_3++] = 0;
 return VAR_3;
}
