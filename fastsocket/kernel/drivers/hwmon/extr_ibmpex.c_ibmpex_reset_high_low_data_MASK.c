
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int data_len; } ;
struct ibmpex_bmc_data {int read_complete; TYPE_1__ tx_message; int * tx_msg_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct ibmpex_bmc_data*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct ibmpex_bmc_data *VAR_1)
{
 VAR_1->tx_msg_data[0] = VAR_0;
 VAR_1->tx_message.data_len = 1;
 FUNC_0(VAR_1);

 FUNC_1(&VAR_1->read_complete);

 return 0;
}
