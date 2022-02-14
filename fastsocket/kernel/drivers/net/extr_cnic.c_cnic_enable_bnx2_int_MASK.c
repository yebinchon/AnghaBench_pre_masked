
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cnic_local {int int_num; int last_status_idx; struct cnic_eth_dev* ethdev; } ;
struct cnic_eth_dev {int drv_state; } ;
struct cnic_dev {struct cnic_local* cnic_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cnic_dev*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct cnic_dev *VAR_3)
{
 struct cnic_local *VAR_4 = VAR_3->cnic_priv;
 struct cnic_eth_dev *VAR_5 = VAR_4->ethdev;

 if (!(VAR_5->drv_state & VAR_2))
  return;

 FUNC_0(VAR_3, VAR_0, VAR_4->int_num |
  VAR_1 | VAR_4->last_status_idx);
}
