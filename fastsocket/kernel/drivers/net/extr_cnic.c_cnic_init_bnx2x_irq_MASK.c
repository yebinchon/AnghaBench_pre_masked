
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cnic_local {int cnic_irq_task; struct cnic_eth_dev* ethdev; } ;
struct cnic_eth_dev {int drv_state; } ;
struct cnic_dev {struct cnic_local* cnic_priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct cnic_dev*) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct cnic_dev *VAR_2)
{
 struct cnic_local *VAR_3 = VAR_2->cnic_priv;
 struct cnic_eth_dev *VAR_4 = VAR_3->ethdev;
 int VAR_5 = 0;

 FUNC_1(&VAR_3->cnic_irq_task, VAR_1,
       (unsigned long) VAR_2);
 if (VAR_4->drv_state & VAR_0)
  VAR_5 = FUNC_0(VAR_2);

 return VAR_5;
}
