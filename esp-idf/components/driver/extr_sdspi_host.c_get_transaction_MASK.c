
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int spi_transaction_t ;
struct TYPE_2__ {size_t used_transaction_count; int * transactions; } ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static spi_transaction_t* FUNC_1(int VAR_2)
{
    size_t VAR_3 = VAR_1[VAR_2].used_transaction_count;
    FUNC_0(VAR_3 < VAR_0);
    spi_transaction_t* VAR_4 = &VAR_1[VAR_2].transactions[VAR_3];
    ++VAR_1[VAR_2].used_transaction_count;
    return VAR_4;
}
