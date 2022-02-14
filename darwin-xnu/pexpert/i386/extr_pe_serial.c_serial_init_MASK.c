
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int new_uart_baud_rate ;
struct TYPE_5__ {int (* uart_init ) () ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,unsigned int*,int) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 () ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 () ;
 TYPE_1__ VAR_6 ;
 scalar_t__ FUNC_3 () ;
 TYPE_1__ VAR_7 ;
 int VAR_8 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 unsigned int VAR_9 ;

int
FUNC_7( void )
{
    unsigned VAR_10 = 0;

    if (FUNC_0("serialbaud", &VAR_10, sizeof (VAR_10)))
    {

        if (!((VAR_0 / 16) % VAR_10)) {
            VAR_9 = VAR_10;
        }
    }

    if ( FUNC_2() )
    {
        VAR_1 = &VAR_6;
        VAR_1->uart_init();
        VAR_5 = 1;
        VAR_4 = 1;
        return 1;
    }
    else if ( FUNC_1() )
    {
        VAR_1 = &VAR_3;
        VAR_1->uart_init();
        VAR_2 = 1;
        return 1;
    }
    else if ( FUNC_3() )
    {
        VAR_1 = &VAR_7;
        VAR_1->uart_init();
        VAR_8 = 1;
        return 1;
    }
    else
    {
        return 0;
    }

}
