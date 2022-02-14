
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; } ;
struct fcoe_port {struct bnx2fc_interface* priv; } ;
struct fc_lport {int dummy; } ;
struct bnx2fc_interface {struct bnx2fc_hba* hba; } ;
struct bnx2fc_hba {int adapter_state; struct net_device* phys_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 struct fcoe_port* FUNC_1 (struct fc_lport*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct fc_lport *VAR_2)
{
 struct fcoe_port *VAR_3 = FUNC_1(VAR_2);
 struct bnx2fc_interface *VAR_4 = VAR_3->priv;
 struct bnx2fc_hba *VAR_5 = VAR_4->hba;
 struct net_device *VAR_6 = VAR_5->phys_dev;
 int VAR_7 = 0;

 if ((VAR_6->flags & VAR_1) && FUNC_2(VAR_6))
  FUNC_0(VAR_0, &VAR_5->adapter_state);
 else {
  FUNC_3(VAR_0, &VAR_5->adapter_state);
  VAR_7 = -1;
 }
 return VAR_7;
}
