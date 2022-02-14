
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hso_serial {int tx_data_count; int tx_data; int ctrl_req_tx; int tx_urb; TYPE_1__* parent; } ;
struct TYPE_2__ {int port_spec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hso_serial*,int ,int,int ,int *,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct hso_serial *VAR_3)
{
 if (((void*)0) == VAR_3)
  return -VAR_0;

 return FUNC_0(VAR_3,
      VAR_2,
      VAR_3->parent->port_spec & VAR_1,
      VAR_3->tx_urb,
      &VAR_3->ctrl_req_tx,
      VAR_3->tx_data, VAR_3->tx_data_count);
}
