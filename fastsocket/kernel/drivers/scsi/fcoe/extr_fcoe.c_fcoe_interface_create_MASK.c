
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dev; } ;
struct fcoe_interface {int dummy; } ;
struct fcoe_ctlr_device {int dummy; } ;
struct fcoe_ctlr {int get_src_addr; int update_mac; int send; struct fcoe_ctlr_device* cdev; } ;
typedef enum fip_state { ____Placeholder_fip_state } fip_state ;


 int VAR_0 ;
 int VAR_1 ;
 struct fcoe_interface* FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct net_device*,char*) ;
 int VAR_2 ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct fcoe_ctlr*) ;
 struct fcoe_ctlr_device* FUNC_6 (int *,int *,int) ;
 int FUNC_7 (struct fcoe_ctlr_device*) ;
 struct fcoe_ctlr* FUNC_8 (struct fcoe_ctlr_device*) ;
 int FUNC_9 (struct fcoe_ctlr*,int) ;
 struct fcoe_interface* FUNC_10 (struct fcoe_ctlr*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_11 (struct fcoe_interface*,struct net_device*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static struct fcoe_interface *FUNC_14(struct net_device *VAR_7,
          enum fip_state VAR_8)
{
 struct fcoe_ctlr_device *VAR_9;
 struct fcoe_ctlr *VAR_10;
 struct fcoe_interface *VAR_11;
 int VAR_12;
 int VAR_13;

 if (!FUNC_13(VAR_2)) {
  FUNC_2(VAR_7,
    "Could not get a reference to the module\n");
  VAR_11 = FUNC_0(-VAR_0);
  goto out;
 }

 VAR_12 = sizeof(struct fcoe_ctlr) + sizeof(struct fcoe_interface);
 VAR_9 = FUNC_6(&VAR_7->dev, &VAR_5,
     VAR_12);
 if (!VAR_9) {
  FUNC_1("Failed to add fcoe_ctlr_device\n");
  VAR_11 = FUNC_0(-VAR_1);
  goto out_putmod;
 }

 VAR_10 = FUNC_8(VAR_9);
 VAR_10->cdev = VAR_9;
 VAR_11 = FUNC_10(VAR_10);

 FUNC_3(VAR_7);




 FUNC_9(VAR_10, VAR_8);
 VAR_10->send = VAR_3;
 VAR_10->update_mac = VAR_6;
 VAR_10->get_src_addr = VAR_4;

 VAR_13 = FUNC_11(VAR_11, VAR_7);
 if (VAR_13) {
  FUNC_5(VAR_10);
  FUNC_7(VAR_9);
  FUNC_4(VAR_7);
  VAR_11 = FUNC_0(VAR_13);
  goto out_putmod;
 }

 goto out;

out_putmod:
 FUNC_12(VAR_2);
out:
 return VAR_11;
}
