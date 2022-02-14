
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int flags; struct bfusb_data* driver_data; } ;
struct bfusb_data {int lock; } ;


 int FUNC_0 (char*,struct hci_dev*,struct bfusb_data*) ;
 int VAR_0 ;
 int FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (struct bfusb_data*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct hci_dev *VAR_1)
{
 struct bfusb_data *VAR_2 = VAR_1->driver_data;
 unsigned long VAR_3;

 FUNC_0("hdev %p bfusb %p", VAR_1, VAR_2);

 if (!FUNC_3(VAR_0, &VAR_1->flags))
  return 0;

 FUNC_4(&VAR_2->lock, VAR_3);
 FUNC_5(&VAR_2->lock, VAR_3);

 FUNC_2(VAR_2);
 FUNC_1(VAR_1);

 return 0;
}
