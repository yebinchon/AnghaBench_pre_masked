
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hso_serial {int num_rx_urbs; int tx_data; int tx_urb; int * rx_data; int * rx_urb; int minor; TYPE_1__* parent; } ;
struct TYPE_2__ {scalar_t__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct hso_serial *VAR_2)
{
 int VAR_3;

 if (VAR_2->parent->dev)
  FUNC_0(VAR_2->parent->dev, &VAR_0);

 FUNC_2(VAR_1, VAR_2->minor);

 for (VAR_3 = 0; VAR_3 < VAR_2->num_rx_urbs; VAR_3++) {

  FUNC_3(VAR_2->rx_urb[VAR_3]);

  FUNC_1(VAR_2->rx_data[VAR_3]);
 }


 FUNC_3(VAR_2->tx_urb);
 FUNC_1(VAR_2->tx_data);
}
