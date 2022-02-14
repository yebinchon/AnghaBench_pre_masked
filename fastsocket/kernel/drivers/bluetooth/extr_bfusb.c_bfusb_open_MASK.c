
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int flags; struct bfusb_data* driver_data; } ;
struct bfusb_data {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct hci_dev*,struct bfusb_data*) ;
 int VAR_1 ;
 int FUNC_1 (struct bfusb_data*,int *) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct hci_dev *VAR_2)
{
 struct bfusb_data *VAR_3 = VAR_2->driver_data;
 unsigned long VAR_4;
 int VAR_5, VAR_6;

 FUNC_0("hdev %p bfusb %p", VAR_2, VAR_3);

 if (FUNC_3(VAR_1, &VAR_2->flags))
  return 0;

 FUNC_4(&VAR_3->lock, VAR_4);

 VAR_6 = FUNC_1(VAR_3, ((void*)0));
 if (!VAR_6) {
  for (VAR_5 = 1; VAR_5 < VAR_0; VAR_5++)
   FUNC_1(VAR_3, ((void*)0));
 } else {
  FUNC_2(VAR_1, &VAR_2->flags);
 }

 FUNC_5(&VAR_3->lock, VAR_4);

 return VAR_6;
}
