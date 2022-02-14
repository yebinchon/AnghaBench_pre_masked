
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kobj; } ;
struct node_entry {TYPE_1__ device; } ;
struct device {int kobj; } ;
struct hpsb_host {int id; int node_id; int busmgr_id; int irm_id; struct device device; } ;


 int FUNC_0 (char*,int ) ;
 struct node_entry* FUNC_1 (struct hpsb_host*,int ) ;
 scalar_t__ FUNC_2 (int *,int *,char*) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static void FUNC_4(struct hpsb_host *VAR_0)
{
 struct device *VAR_1 = &VAR_0->device;
 struct node_entry *VAR_2;

 FUNC_3(&VAR_1->kobj, "irm_id");
 FUNC_3(&VAR_1->kobj, "busmgr_id");
 FUNC_3(&VAR_1->kobj, "host_id");

 if ((VAR_2 = FUNC_1(VAR_0, VAR_0->irm_id)) &&
     FUNC_2(&VAR_1->kobj, &VAR_2->device.kobj, "irm_id"))
  goto fail;
 if ((VAR_2 = FUNC_1(VAR_0, VAR_0->busmgr_id)) &&
     FUNC_2(&VAR_1->kobj, &VAR_2->device.kobj, "busmgr_id"))
  goto fail;
 if ((VAR_2 = FUNC_1(VAR_0, VAR_0->node_id)) &&
     FUNC_2(&VAR_1->kobj, &VAR_2->device.kobj, "host_id"))
  goto fail;
 return;
fail:
 FUNC_0("Failed to update sysfs attributes for host %d", VAR_0->id);
}
