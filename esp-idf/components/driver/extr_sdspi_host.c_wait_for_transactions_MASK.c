
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int spi_transaction_t ;
struct TYPE_2__ {size_t used_transaction_count; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int ,int **,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(int VAR_2)
{
    size_t VAR_3 = VAR_1[VAR_2].used_transaction_count;
    for (size_t VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4) {
        spi_transaction_t* VAR_5;
        FUNC_1(FUNC_2(VAR_2), &VAR_5, VAR_0);
        FUNC_0(VAR_2);
    }
}
