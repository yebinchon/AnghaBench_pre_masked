
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int dummy; } ;
struct hso_serial {int num_rx_urbs; TYPE_1__* parent; struct urb** rx_urb; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(struct hso_serial *VAR_0, struct urb *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_rx_urbs; VAR_2++)
  if (VAR_0->rx_urb[VAR_2] == VAR_1)
   return VAR_2;
 FUNC_0(VAR_0->parent->dev, "hso_urb_to_index failed\n");
 return -1;
}
