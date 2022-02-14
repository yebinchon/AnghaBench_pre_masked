
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cnic_local {int cnic_irq_task; int (* disable_int_sync ) (struct cnic_dev*) ;struct cnic_eth_dev* ethdev; } ;
struct cnic_eth_dev {int drv_state; TYPE_1__* irq_arr; } ;
struct cnic_dev {struct cnic_local* cnic_priv; } ;
struct TYPE_2__ {int vector; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct cnic_dev*) ;
 int FUNC_1 (struct cnic_dev*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct cnic_dev *VAR_1)
{
 struct cnic_local *VAR_2 = VAR_1->cnic_priv;
 struct cnic_eth_dev *VAR_3 = VAR_2->ethdev;

 if (VAR_3->drv_state & VAR_0) {
  VAR_2->disable_int_sync(VAR_1);
  FUNC_2(&VAR_2->cnic_irq_task);
  FUNC_0(VAR_3->irq_arr[0].vector, VAR_1);
 }
}
