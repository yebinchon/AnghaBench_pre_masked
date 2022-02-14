
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hso_serial {int num_rx_urbs; int rx_data_length; int * rx_data; int ctrl_req_rx; int * rx_urb; TYPE_1__* parent; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int port_spec; TYPE_2__* interface; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct hso_serial*,int ,int,int ,int *,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct hso_serial *VAR_4)
{
 if (!VAR_4)
  return -VAR_1;


 FUNC_1(VAR_4->rx_data[0], 0, VAR_0);


 if (VAR_4->num_rx_urbs != 1) {
  FUNC_0(&VAR_4->parent->interface->dev,
   "ERROR: mux'd reads with multiple buffers "
   "not possible\n");
  return 0;
 }
 return FUNC_2(VAR_4,
      VAR_3,
      VAR_4->parent->port_spec & VAR_2,
      VAR_4->rx_urb[0],
      &VAR_4->ctrl_req_rx,
      VAR_4->rx_data[0], VAR_4->rx_data_length);
}
