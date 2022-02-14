
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int data_len; } ;
struct ibmpex_bmc_data {int rx_msg_len; int interface; int * rx_msg_data; int sensor_minor; int sensor_major; int bmc_device; scalar_t__ rx_result; int read_complete; TYPE_1__ tx_message; int * tx_msg_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct ibmpex_bmc_data*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct ibmpex_bmc_data *VAR_2)
{
 VAR_2->tx_msg_data[0] = VAR_1;
 VAR_2->tx_message.data_len = 1;
 FUNC_2(VAR_2);

 FUNC_3(&VAR_2->read_complete);

 if (VAR_2->rx_result || VAR_2->rx_msg_len != 6)
  return -VAR_0;

 VAR_2->sensor_major = VAR_2->rx_msg_data[0];
 VAR_2->sensor_minor = VAR_2->rx_msg_data[1];

 FUNC_0(VAR_2->bmc_device, "Found BMC with sensor interface "
   "v%d.%d %d-%02d-%02d on interface %d\n",
   VAR_2->sensor_major,
   VAR_2->sensor_minor,
   FUNC_1(VAR_2->rx_msg_data, 2),
   VAR_2->rx_msg_data[4],
   VAR_2->rx_msg_data[5],
   VAR_2->interface);

 return 0;
}
