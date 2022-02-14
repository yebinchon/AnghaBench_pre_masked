
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hci_dev {struct btmrvl_private* driver_data; } ;
struct btmrvl_private {TYPE_1__* adapter; } ;
struct TYPE_2__ {int tx_queue; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct hci_dev *VAR_0)
{
 struct btmrvl_private *VAR_1 = VAR_0->driver_data;

 FUNC_0(&VAR_1->adapter->tx_queue);

 return 0;
}
