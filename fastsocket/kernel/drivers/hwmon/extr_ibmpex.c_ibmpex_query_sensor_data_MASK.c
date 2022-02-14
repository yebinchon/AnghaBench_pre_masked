
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int data_len; } ;
struct ibmpex_bmc_data {int* tx_msg_data; int rx_msg_len; int bmc_device; scalar_t__ rx_result; int read_complete; TYPE_1__ tx_message; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct ibmpex_bmc_data*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct ibmpex_bmc_data *VAR_2, int VAR_3)
{
 VAR_2->tx_msg_data[0] = VAR_1;
 VAR_2->tx_msg_data[1] = VAR_3;
 VAR_2->tx_message.data_len = 2;
 FUNC_1(VAR_2);

 FUNC_2(&VAR_2->read_complete);

 if (VAR_2->rx_result || VAR_2->rx_msg_len < 26) {
  FUNC_0(VAR_2->bmc_device, "Error reading sensor %d.\n",
   VAR_3);
  return -VAR_0;
 }

 return 0;
}
