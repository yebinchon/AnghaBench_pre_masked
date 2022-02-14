
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int read_lock; int write_lock; int rx_func; int tx_func; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__** VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_2(int VAR_3)
{
    FUNC_0(&VAR_0[VAR_3]->read_lock);
    FUNC_0(&VAR_0[VAR_3]->write_lock);
    VAR_0[VAR_3]->tx_func = VAR_2;
    VAR_0[VAR_3]->rx_func = VAR_1;
    FUNC_1(&VAR_0[VAR_3]->write_lock);
    FUNC_1(&VAR_0[VAR_3]->read_lock);
}
