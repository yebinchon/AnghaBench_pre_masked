
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; int length; int tx_data; } ;
typedef TYPE_1__ spi_transaction_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(int VAR_2)
{
    spi_transaction_t VAR_3 = {
        .flags = VAR_0 | VAR_1,
        .length = 8,
        .tx_data = 0xff
    };
    FUNC_0(FUNC_1(VAR_2), &VAR_3);

}
