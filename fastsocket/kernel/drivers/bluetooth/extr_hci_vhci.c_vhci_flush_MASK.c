
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhci_data {int readq; } ;
struct hci_dev {struct vhci_data* driver_data; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct hci_dev *VAR_0)
{
 struct vhci_data *VAR_1 = VAR_0->driver_data;

 FUNC_0(&VAR_1->readq);

 return 0;
}
