
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fcoe_fcf_device {struct fcoe_fcf* priv; scalar_t__ selected; int fka_period; int priority; int mac; int vfid; int fc_map; int switch_name; int fabric_name; } ;
struct fcoe_fcf {int list; struct fcoe_fcf_device* fcf_dev; int fka_period; int pri; int fcf_mac; int vfid; int fc_map; int switch_name; int fabric_name; struct fcoe_ctlr* fip; } ;
struct fcoe_ctlr_device {int lock; } ;
struct fcoe_ctlr {int fcf_count; int fcfs; } ;


 int FUNC_0 (struct fcoe_fcf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct fcoe_ctlr*,char*,int ,int ) ;
 struct fcoe_ctlr_device* FUNC_2 (struct fcoe_ctlr*) ;
 struct fcoe_fcf_device* FUNC_3 (struct fcoe_ctlr_device*,struct fcoe_fcf_device*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct fcoe_fcf *VAR_2)
{
 struct fcoe_ctlr *VAR_3 = VAR_2->fip;
 struct fcoe_ctlr_device *VAR_4;
 struct fcoe_fcf_device VAR_5, *VAR_6;
 int VAR_7 = 0;

 FUNC_1(VAR_3, "New FCF fab %16.16llx mac %pM\n",
   VAR_2->fabric_name, VAR_2->fcf_mac);

 VAR_5.fabric_name = VAR_2->fabric_name;
 VAR_5.switch_name = VAR_2->switch_name;
 VAR_5.fc_map = VAR_2->fc_map;
 VAR_5.vfid = VAR_2->vfid;
 FUNC_5(VAR_5.mac, VAR_2->fcf_mac, VAR_1);
 VAR_5.priority = VAR_2->pri;
 VAR_5.fka_period = VAR_2->fka_period;
 VAR_5.selected = 0;
 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4) {
  FUNC_6(&VAR_4->lock);
  VAR_6 = FUNC_3(VAR_4, &VAR_5);
  if (FUNC_8(!VAR_6)) {
   VAR_7 = -VAR_0;
   FUNC_7(&VAR_4->lock);
   goto out;
  }
  FUNC_0(VAR_6->priv);

  VAR_6->priv = VAR_2;
  VAR_2->fcf_dev = VAR_6;
  FUNC_7(&VAR_4->lock);
 }

 FUNC_4(&VAR_2->list, &VAR_3->fcfs);
 VAR_3->fcf_count++;

out:
 return VAR_7;
}
