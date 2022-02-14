
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hci_dev {int flags; struct btmrvl_private* driver_data; } ;
struct btmrvl_private {TYPE_1__* adapter; } ;
struct TYPE_2__ {int tx_queue; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct hci_dev *VAR_1)
{
 struct btmrvl_private *VAR_2 = VAR_1->driver_data;

 if (!FUNC_1(VAR_0, &VAR_1->flags))
  return 0;

 FUNC_0(&VAR_2->adapter->tx_queue);

 return 0;
}
