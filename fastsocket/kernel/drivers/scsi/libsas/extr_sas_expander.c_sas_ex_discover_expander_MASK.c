
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sas_rphy {int dev; } ;
struct sas_expander_device {scalar_t__ level; } ;
struct ex_phy {scalar_t__ routing_attr; int attached_dev_type; int attached_sas_addr; int attached_tproto; int attached_iproto; int port; int attached_phy_id; } ;
struct TYPE_4__ {int children; struct ex_phy* ex_phy; } ;
struct domain_device {int dev_type; TYPE_2__ ex_dev; int siblings; struct asd_sas_port* port; int dev_list_node; int sas_addr; int hashed_sas_addr; int tproto; int iproto; struct domain_device* parent; int kref; struct sas_rphy* rphy; } ;
struct TYPE_3__ {int max_level; } ;
struct asd_sas_port {int dev_list_lock; int dev_list; TYPE_1__ disc; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;


 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (char*,int ,int,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (int ,int ,int ) ;
 struct sas_expander_device* FUNC_10 (struct sas_rphy*) ;
 struct domain_device* FUNC_11 () ;
 int FUNC_12 (struct domain_device*) ;
 int FUNC_13 (struct domain_device*,struct domain_device*,struct ex_phy*) ;
 struct sas_rphy* FUNC_14 (int ,int ) ;
 int FUNC_15 (struct domain_device*,struct sas_rphy*) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (struct domain_device*) ;
 scalar_t__ FUNC_18 (int ) ;
 int FUNC_19 (int *,int) ;
 int FUNC_20 (struct domain_device*) ;
 int FUNC_21 (struct sas_rphy*) ;
 int FUNC_22 (struct sas_rphy*) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;

__attribute__((used)) static struct domain_device *FUNC_25(
 struct domain_device *VAR_4, int VAR_5)
{
 struct sas_expander_device *VAR_6 = FUNC_10(VAR_4->rphy);
 struct ex_phy *VAR_7 = &VAR_4->ex_dev.ex_phy[VAR_5];
 struct domain_device *VAR_8 = ((void*)0);
 struct sas_rphy *VAR_9;
 struct sas_expander_device *VAR_10;
 struct asd_sas_port *VAR_11;
 int VAR_12;

 if (VAR_7->routing_attr == VAR_0) {
  FUNC_3("ex %016llx:0x%x:D <--> ex %016llx:0x%x is not "
       "allowed\n",
       FUNC_2(VAR_4->sas_addr), VAR_5,
       FUNC_2(VAR_7->attached_sas_addr),
       VAR_7->attached_phy_id);
  return ((void*)0);
 }
 VAR_8 = FUNC_11();
 if (!VAR_8)
  return ((void*)0);

 VAR_7->port = FUNC_19(&VAR_4->rphy->dev, VAR_5);

 FUNC_1(FUNC_18(VAR_7->port) != 0);


 switch (VAR_7->attached_dev_type) {
 case 129:
  VAR_9 = FUNC_14(VAR_7->port,
       VAR_2);
  break;
 case 128:
  VAR_9 = FUNC_14(VAR_7->port,
       VAR_3);
  break;
 default:
  VAR_9 = ((void*)0);
  FUNC_0();
 }
 VAR_11 = VAR_4->port;
 VAR_8->rphy = VAR_9;
 FUNC_4(&VAR_9->dev);
 VAR_10 = FUNC_10(VAR_9);
 VAR_8->dev_type = VAR_7->attached_dev_type;
 FUNC_5(&VAR_4->kref);
 VAR_8->parent = VAR_4;
 VAR_8->port = VAR_11;
 VAR_8->iproto = VAR_7->attached_iproto;
 VAR_8->tproto = VAR_7->attached_tproto;
 FUNC_9(VAR_8->sas_addr, VAR_7->attached_sas_addr, VAR_1);
 FUNC_16(VAR_8->hashed_sas_addr, VAR_8->sas_addr);
 FUNC_13(VAR_4, VAR_8, VAR_7);
 VAR_10->level = VAR_6->level + 1;
 VAR_4->port->disc.max_level = FUNC_8(VAR_4->port->disc.max_level,
        VAR_10->level);
 FUNC_17(VAR_8);
 FUNC_15(VAR_8, VAR_9);
 FUNC_21(VAR_9);

 FUNC_23(&VAR_4->port->dev_list_lock);
 FUNC_6(&VAR_8->dev_list_node, &VAR_4->port->dev_list);
 FUNC_24(&VAR_4->port->dev_list_lock);

 VAR_12 = FUNC_12(VAR_8);
 if (VAR_12) {
  FUNC_22(VAR_9);
  FUNC_23(&VAR_4->port->dev_list_lock);
  FUNC_7(&VAR_8->dev_list_node);
  FUNC_24(&VAR_4->port->dev_list_lock);
  FUNC_20(VAR_8);
  return ((void*)0);
 }
 FUNC_6(&VAR_8->siblings, &VAR_4->ex_dev.children);
 return VAR_8;
}
