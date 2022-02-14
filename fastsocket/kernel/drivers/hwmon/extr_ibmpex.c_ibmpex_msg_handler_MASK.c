
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int data_len; int * data; } ;
struct ipmi_recv_msg {scalar_t__ msgid; TYPE_1__ msg; int recv_type; } ;
struct ibmpex_bmc_data {scalar_t__ tx_msgid; int rx_msg_len; int read_complete; int rx_msg_data; int rx_result; int rx_recv_type; int bmc_device; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (struct ipmi_recv_msg*) ;
 int FUNC_3 (int ,int *,int) ;

__attribute__((used)) static void FUNC_4(struct ipmi_recv_msg *VAR_1, void *VAR_2)
{
 struct ibmpex_bmc_data *VAR_3 = (struct ibmpex_bmc_data *)VAR_2;

 if (VAR_1->msgid != VAR_3->tx_msgid) {
  FUNC_1(VAR_3->bmc_device, "Mismatch between received msgid "
   "(%02x) and transmitted msgid (%02x)!\n",
   (int)VAR_1->msgid,
   (int)VAR_3->tx_msgid);
  FUNC_2(VAR_1);
  return;
 }

 VAR_3->rx_recv_type = VAR_1->recv_type;
 if (VAR_1->msg.data_len > 0)
  VAR_3->rx_result = VAR_1->msg.data[0];
 else
  VAR_3->rx_result = VAR_0;

 if (VAR_1->msg.data_len > 1) {
  VAR_3->rx_msg_len = VAR_1->msg.data_len - 1;
  FUNC_3(VAR_3->rx_msg_data, VAR_1->msg.data + 1, VAR_3->rx_msg_len);
 } else
  VAR_3->rx_msg_len = 0;

 FUNC_2(VAR_1);
 FUNC_0(&VAR_3->read_complete);
}
