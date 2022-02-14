
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {struct bfusb_data* driver_data; } ;
struct bfusb_data {int dummy; } ;


 int FUNC_0 (char*,struct hci_dev*,struct bfusb_data*) ;
 int FUNC_1 (struct bfusb_data*) ;

__attribute__((used)) static void FUNC_2(struct hci_dev *VAR_0)
{
 struct bfusb_data *VAR_1 = VAR_0->driver_data;

 FUNC_0("hdev %p bfusb %p", VAR_0, VAR_1);

 FUNC_1(VAR_1);
}
