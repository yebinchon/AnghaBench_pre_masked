
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sco_num; } ;
struct hci_dev {TYPE_1__ conn_hash; int name; struct btusb_data* driver_data; } ;
struct btusb_data {scalar_t__ sco_num; int work; } ;


 int FUNC_0 (char*,int ,unsigned int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct hci_dev *VAR_0, unsigned int VAR_1)
{
 struct btusb_data *VAR_2 = VAR_0->driver_data;

 FUNC_0("%s evt %d", VAR_0->name, VAR_1);

 if (VAR_0->conn_hash.sco_num != VAR_2->sco_num) {
  VAR_2->sco_num = VAR_0->conn_hash.sco_num;
  FUNC_1(&VAR_2->work);
 }
}
