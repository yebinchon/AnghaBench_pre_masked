
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhci_data {int readq; } ;
struct hci_dev {int flags; struct vhci_data* driver_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct hci_dev *VAR_1)
{
 struct vhci_data *VAR_2 = VAR_1->driver_data;

 if (!FUNC_1(VAR_0, &VAR_1->flags))
  return 0;

 FUNC_0(&VAR_2->readq);

 return 0;
}
