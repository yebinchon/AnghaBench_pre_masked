
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2400m {int boot_mode; int rx_reorder; int init_mutex; int msg_completion; int msg_mutex; void* rx_size_min; void* rx_pl_min; int rx_lock; void* tx_size_min; void* tx_pl_min; int tx_lock; int state_wq; int wimax_dev; } ;


 void* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static inline
void FUNC_5(struct i2400m *VAR_1)
{
 FUNC_4(&VAR_1->wimax_dev);

 VAR_1->boot_mode = 1;
 VAR_1->rx_reorder = 1;
 FUNC_1(&VAR_1->state_wq);

 FUNC_3(&VAR_1->tx_lock);
 VAR_1->tx_pl_min = VAR_0;
 VAR_1->tx_size_min = VAR_0;

 FUNC_3(&VAR_1->rx_lock);
 VAR_1->rx_pl_min = VAR_0;
 VAR_1->rx_size_min = VAR_0;

 FUNC_2(&VAR_1->msg_mutex);
 FUNC_0(&VAR_1->msg_completion);

 FUNC_2(&VAR_1->init_mutex);

}
