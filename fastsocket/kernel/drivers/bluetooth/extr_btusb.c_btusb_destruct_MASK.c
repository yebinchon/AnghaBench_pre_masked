
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int name; struct btusb_data* driver_data; } ;
struct btusb_data {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct btusb_data*) ;

__attribute__((used)) static void FUNC_2(struct hci_dev *VAR_0)
{
 struct btusb_data *VAR_1 = VAR_0->driver_data;

 FUNC_0("%s", VAR_0->name);

 FUNC_1(VAR_1);
}
