
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cnic_local {int cnic_irq_task; struct cnic_eth_dev* ethdev; } ;
struct cnic_eth_dev {TYPE_1__* irq_arr; } ;
struct cnic_dev {struct cnic_local* cnic_priv; } ;
struct TYPE_2__ {int vector; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,char*,struct cnic_dev*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct cnic_dev *VAR_1)
{
 struct cnic_local *VAR_2 = VAR_1->cnic_priv;
 struct cnic_eth_dev *VAR_3 = VAR_2->ethdev;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3->irq_arr[0].vector, VAR_0, 0, "cnic", VAR_1);
 if (VAR_4)
  FUNC_1(&VAR_2->cnic_irq_task);

 return VAR_4;
}
