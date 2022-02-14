
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int new_mmio_uart_base ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (char*,unsigned int*,int) ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static int
FUNC_2( void )
{
    unsigned VAR_3 = 0;


    if (FUNC_0("mmio_uart", &VAR_3, sizeof (VAR_3)))
    {

        if (VAR_3 == 0) {
            return 0;
        }

        VAR_2 = VAR_3;
        return 1;
    }


    VAR_2 = VAR_0;
    if (FUNC_1()) {
      return 1;
    }

    VAR_2 = VAR_1;
    if (FUNC_1()) {
      return 1;
    }


    return 0;
}
