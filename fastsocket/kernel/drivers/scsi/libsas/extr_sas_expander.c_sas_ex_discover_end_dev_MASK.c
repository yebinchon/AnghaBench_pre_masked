
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sas_rphy {int dev; } ;
struct expander_device {int children; struct ex_phy* ex_phy; } ;
struct ex_phy {int attached_tproto; int * port; scalar_t__ attached_sata_dev; int attached_sas_addr; int attached_iproto; scalar_t__ attached_sata_ps; scalar_t__ attached_sata_host; } ;
struct domain_device {int tproto; TYPE_1__* port; int dev_list_node; int disco_list_node; struct sas_rphy* rphy; int siblings; int sas_addr; int dev_type; int hashed_sas_addr; int iproto; struct domain_device* parent; int kref; struct expander_device ex_dev; } ;
struct TYPE_2__ {int dev_list_lock; int disco_list; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int,int ,int,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int ) ;
 struct domain_device* FUNC_7 () ;
 int FUNC_8 (struct domain_device*) ;
 int FUNC_9 (struct domain_device*,int *) ;
 int FUNC_10 (struct domain_device*) ;
 int FUNC_11 (struct domain_device*) ;
 struct sas_rphy* FUNC_12 (int *) ;
 int FUNC_13 (struct domain_device*,struct domain_device*,struct ex_phy*) ;
 int FUNC_14 (struct domain_device*,struct sas_rphy*) ;
 int FUNC_15 (struct domain_device*,struct ex_phy*) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (struct domain_device*) ;
 scalar_t__ FUNC_18 (int *) ;
 int * FUNC_19 (int *,int) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (struct domain_device*) ;
 int FUNC_23 (struct sas_rphy*) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 scalar_t__ FUNC_26 (int) ;

__attribute__((used)) static struct domain_device *FUNC_27(
 struct domain_device *VAR_4, int VAR_5)
{
 struct expander_device *VAR_6 = &VAR_4->ex_dev;
 struct ex_phy *VAR_7 = &VAR_6->ex_phy[VAR_5];
 struct domain_device *VAR_8 = ((void*)0);
 struct sas_rphy *VAR_9;
 int VAR_10;

 if (VAR_7->attached_sata_host || VAR_7->attached_sata_ps)
  return ((void*)0);

 VAR_8 = FUNC_7();
 if (!VAR_8)
  return ((void*)0);

 FUNC_3(&VAR_4->kref);
 VAR_8->parent = VAR_4;
 VAR_8->port = VAR_4->port;
 VAR_8->iproto = VAR_7->attached_iproto;
 FUNC_6(VAR_8->sas_addr, VAR_7->attached_sas_addr, VAR_0);
 FUNC_16(VAR_8->hashed_sas_addr, VAR_8->sas_addr);
 if (!VAR_7->port) {
  VAR_7->port = FUNC_19(&VAR_4->rphy->dev, VAR_5);
  if (FUNC_26(!VAR_7->port))
   goto out_err;
  if (FUNC_26(FUNC_18(VAR_7->port) != 0)) {
   FUNC_21(VAR_7->port);
   goto out_err;
  }
 }
 FUNC_13(VAR_4, VAR_8, VAR_7);
 FUNC_9(VAR_8, VAR_7->port);
   if (VAR_7->attached_tproto & VAR_2) {
  VAR_8->dev_type = VAR_1;
  VAR_9 = FUNC_12(VAR_7->port);

  if (FUNC_26(!VAR_9))
   goto out_free;
  VAR_8->tproto = VAR_7->attached_tproto;
  FUNC_17(VAR_8);

  VAR_8->rphy = VAR_9;
  FUNC_2(&VAR_9->dev);
  FUNC_14(VAR_8, VAR_9);

  FUNC_4(&VAR_8->disco_list_node, &VAR_4->port->disco_list);

  VAR_10 = FUNC_10(VAR_8);
  if (VAR_10) {
   FUNC_1("sas_discover_end_dev() for device %16llx "
        "at %016llx:0x%x returned 0x%x\n",
        FUNC_0(VAR_8->sas_addr),
        FUNC_0(VAR_4->sas_addr), VAR_5, VAR_10);
   goto out_list_del;
  }
 } else {
  FUNC_1("target proto 0x%x at %016llx:0x%x not handled\n",
       VAR_7->attached_tproto, FUNC_0(VAR_4->sas_addr),
       VAR_5);
  goto out_free;
 }

 FUNC_4(&VAR_8->siblings, &VAR_6->children);
 return VAR_8;

 out_list_del:
 FUNC_23(VAR_8->rphy);
 FUNC_5(&VAR_8->disco_list_node);
 FUNC_24(&VAR_4->port->dev_list_lock);
 FUNC_5(&VAR_8->dev_list_node);
 FUNC_25(&VAR_4->port->dev_list_lock);
 out_free:
 FUNC_20(VAR_7->port);
 out_err:
 VAR_7->port = ((void*)0);
 FUNC_22(VAR_8);
 return ((void*)0);
}
