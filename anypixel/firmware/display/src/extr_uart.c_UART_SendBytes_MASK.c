
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {int configured; int tx_buf_size; int TX_active; char* tx_buf; } ;
typedef TYPE_1__ CONFIG_USART_ConfigState ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,int) ;

bool FUNC_2(CONFIG_USART_ConfigState *VAR_0, const char *VAR_1, uint16_t VAR_2, bool VAR_3) {
 int VAR_4;

 FUNC_0(VAR_0->configured == 1);
 FUNC_0(VAR_1 != ((void*)0));
 FUNC_0(VAR_2 <= VAR_0->tx_buf_size);

    if(VAR_3)
        while(VAR_0->TX_active);
    else
        if(VAR_0->TX_active)
            return 0;

 VAR_0->TX_active = 1;

    FUNC_1(VAR_0->tx_buf, VAR_1, VAR_2);

 for(VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  VAR_0->tx_buf[VAR_4] = VAR_1[VAR_4];

    return 1;
}
