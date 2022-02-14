
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qeth_vlan_vid {unsigned short vid; int list; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct qeth_card {int vlanlock; int vid_list; TYPE_1__ info; } ;
struct net_device {struct qeth_card* ml_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int,char*) ;
 int FUNC_1 (int ,int,char*,unsigned short) ;
 int VAR_3 ;
 int VAR_4 ;
 struct qeth_vlan_vid* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct qeth_card*,unsigned short,int ) ;
 scalar_t__ FUNC_5 (struct qeth_card*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct net_device *VAR_5, unsigned short VAR_6)
{
 struct qeth_card *VAR_7 = VAR_5->ml_priv;
 struct qeth_vlan_vid *VAR_8;

 FUNC_1(VAR_4, 4, "aid:%d", VAR_6);
 if (!VAR_6)
  return;
 if (VAR_7->info.type == VAR_2) {
  FUNC_0(VAR_4, 3, "aidOSM");
  return;
 }
 if (FUNC_5(VAR_7, VAR_3)) {
  FUNC_0(VAR_4, 3, "aidREC");
  return;
 }
 VAR_8 = FUNC_2(sizeof(struct qeth_vlan_vid), VAR_0);
 if (VAR_8) {
  VAR_8->vid = VAR_6;
  FUNC_4(VAR_7, VAR_6, VAR_1);
  FUNC_6(&VAR_7->vlanlock);
  FUNC_3(&VAR_8->list, &VAR_7->vid_list);
  FUNC_7(&VAR_7->vlanlock);
 }
}
