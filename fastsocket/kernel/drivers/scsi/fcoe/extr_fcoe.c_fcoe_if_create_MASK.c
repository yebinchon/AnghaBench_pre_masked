
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct fcoe_port {int destroy_work; int min_queue_depth; int max_queue_depth; int get_netdev; struct fcoe_interface* priv; struct fc_lport* lport; } ;
struct fcoe_interface {struct net_device* netdev; } ;
struct fcoe_ctlr {int dummy; } ;
struct fc_vport {int port_name; int node_name; } ;
struct fc_lport {int host; } ;
struct device {int dummy; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 struct fc_lport* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct net_device*,char*,...) ;
 int FUNC_2 (int *,int ) ;
 struct fc_vport* FUNC_3 (struct device*) ;
 int FUNC_4 (struct fc_lport*) ;
 int FUNC_5 (struct fc_lport*,struct fc_lport*) ;
 int FUNC_6 (struct fc_lport*,int ) ;
 int FUNC_7 (struct fc_lport*,int ) ;
 int VAR_3 ;
 int FUNC_8 (struct fc_lport*) ;
 int FUNC_9 (struct fc_lport*,struct net_device*) ;
 int FUNC_10 (struct fc_lport*) ;
 int FUNC_11 (struct fc_lport*) ;
 int FUNC_12 (struct fc_lport*,struct fcoe_ctlr*,int *,int) ;
 int VAR_4 ;
 int FUNC_13 (struct fc_lport*) ;
 int VAR_5 ;
 int FUNC_14 (struct fc_lport*,struct net_device*) ;
 int FUNC_15 (struct fc_lport*,struct device*) ;
 int VAR_6 ;
 struct fcoe_ctlr* FUNC_16 (struct fcoe_interface*) ;
 struct fc_lport* FUNC_17 (int *,int) ;
 struct fc_lport* FUNC_18 (struct fc_vport*,int) ;
 struct fcoe_port* FUNC_19 (struct fc_lport*) ;
 int FUNC_20 (int ) ;
 struct fc_lport* FUNC_21 (struct Scsi_Host*) ;
 struct Scsi_Host* FUNC_22 (struct fc_vport*) ;

__attribute__((used)) static struct fc_lport *FUNC_23(struct fcoe_interface *VAR_7,
           struct device *VAR_8, int VAR_9)
{
 struct fcoe_ctlr *VAR_10 = FUNC_16(VAR_7);
 struct net_device *VAR_11 = VAR_7->netdev;
 struct fc_lport *VAR_12, *VAR_13;
 struct fcoe_port *VAR_14;
 struct Scsi_Host *VAR_15;
 int VAR_16;




 struct fc_vport *VAR_17 = FUNC_3(VAR_8);

 FUNC_1(VAR_11, "Create Interface\n");

 if (!VAR_9)
  VAR_12 = FUNC_17(&VAR_6, sizeof(*VAR_14));
 else
  VAR_12 = FUNC_18(VAR_17, sizeof(*VAR_14));

 if (!VAR_12) {
  FUNC_1(VAR_11, "Could not allocate host structure\n");
  VAR_16 = -VAR_0;
  goto out;
 }
 VAR_14 = FUNC_19(VAR_12);
 VAR_14->lport = VAR_12;
 VAR_14->priv = VAR_7;
 VAR_14->get_netdev = VAR_5;
 VAR_14->max_queue_depth = VAR_1;
 VAR_14->min_queue_depth = VAR_2;
 FUNC_2(&VAR_14->destroy_work, VAR_3);





 FUNC_10(VAR_12);


 VAR_16 = FUNC_13(VAR_12);
 if (VAR_16) {
  FUNC_1(VAR_11, "Could not configure lport for the "
    "interface\n");
  goto out_host_put;
 }

 if (VAR_9) {
  FUNC_1(VAR_11, "Setting vport names, "
    "%16.16llx %16.16llx\n",
    VAR_17->node_name, VAR_17->port_name);
  FUNC_6(VAR_12, VAR_17->node_name);
  FUNC_7(VAR_12, VAR_17->port_name);
 }


 VAR_16 = FUNC_14(VAR_12, VAR_11);
 if (VAR_16) {
  FUNC_1(VAR_11, "Could not configure netdev for the "
    "interface\n");
  goto out_lp_destroy;
 }


 VAR_16 = FUNC_15(VAR_12, VAR_8);
 if (VAR_16) {
  FUNC_1(VAR_11, "Could not configure shost for the "
    "interface\n");
  goto out_lp_destroy;
 }


 VAR_16 = FUNC_12(VAR_12, VAR_10, &VAR_4, 1);
 if (VAR_16) {
  FUNC_1(VAR_11, "Could not configure libfc for the "
    "interface\n");
  goto out_lp_destroy;
 }


 FUNC_9(VAR_12, VAR_11);
 if (!VAR_9)

  VAR_16 = FUNC_8(VAR_12);
 else {
  VAR_15 = FUNC_22(VAR_17);
  VAR_13 = FUNC_21(VAR_15);
  VAR_16 = FUNC_5(VAR_13, VAR_12);
 }

 if (VAR_16) {
  FUNC_1(VAR_11, "Could not configure the EM\n");
  goto out_lp_destroy;
 }

 return VAR_12;

out_lp_destroy:
 FUNC_4(VAR_12);
out_host_put:
 FUNC_11(VAR_12);
 FUNC_20(VAR_12->host);
out:
 return FUNC_0(VAR_16);
}
