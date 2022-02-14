
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cnic_local {int cnic_ops; struct cnic_eth_dev* ethdev; } ;
struct cnic_eth_dev {int drv_state; int (* drv_register_cnic ) (int ,int ,struct cnic_dev*) ;int max_iscsi_conn; } ;
struct cnic_dev {int max_iscsi_conn; int netdev; struct cnic_local* cnic_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,struct cnic_dev*) ;

__attribute__((used)) static int FUNC_2(struct cnic_dev *VAR_3)
{
 struct cnic_local *VAR_4 = VAR_3->cnic_priv;
 struct cnic_eth_dev *VAR_5 = VAR_4->ethdev;
 int VAR_6;

 if (!VAR_5)
  return -VAR_2;

 if (VAR_5->drv_state & VAR_1)
  return 0;

 VAR_6 = VAR_5->drv_register_cnic(VAR_3->netdev, VAR_4->cnic_ops, VAR_3);
 if (VAR_6)
  FUNC_0(VAR_3->netdev, "register_cnic failed\n");




 VAR_3->max_iscsi_conn = VAR_5->max_iscsi_conn;
 if (VAR_5->drv_state & VAR_0)
  VAR_3->max_iscsi_conn = 0;

 return VAR_6;
}
