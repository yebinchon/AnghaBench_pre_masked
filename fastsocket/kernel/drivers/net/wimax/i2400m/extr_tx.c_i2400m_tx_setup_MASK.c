
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2400m {scalar_t__ bus_tx_block_size; int * tx_buf; scalar_t__ tx_sequence; int wake_tx_ws; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int VAR_3 ;
 int * FUNC_2 (int ,int ) ;

int FUNC_3(struct i2400m *VAR_4)
{
 int VAR_5;




 FUNC_1(&VAR_4->wake_tx_ws, VAR_3);

 VAR_4->tx_sequence = 0;
 VAR_4->tx_buf = FUNC_2(VAR_2, VAR_1);
 if (VAR_4->tx_buf == ((void*)0))
  VAR_5 = -VAR_0;
 else
  VAR_5 = 0;

 FUNC_0(VAR_4->bus_tx_block_size == 0);
 return VAR_5;

}
