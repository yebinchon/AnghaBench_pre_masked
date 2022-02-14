
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct fcoe_port {int data_src_addr; int timer; struct fcoe_interface* priv; } ;
struct fcoe_interface {struct net_device* netdev; } ;
struct fc_lport {int host; scalar_t__ vport; } ;


 int FUNC_0 (struct net_device*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (struct fc_lport*) ;
 int FUNC_4 (struct fc_lport*) ;
 int FUNC_5 (struct fc_lport*) ;
 int FUNC_6 (struct fc_lport*) ;
 int FUNC_7 (struct fc_lport*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct fc_lport*) ;
 int FUNC_10 (struct fc_lport*) ;
 int FUNC_11 (int ) ;
 struct fcoe_port* FUNC_12 (struct fc_lport*) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;

__attribute__((used)) static void FUNC_17(struct fc_lport *VAR_0)
{
 struct fcoe_port *VAR_1 = FUNC_12(VAR_0);
 struct fcoe_interface *VAR_2 = VAR_1->priv;
 struct net_device *VAR_3 = VAR_2->netdev;

 FUNC_0(VAR_3, "Destroying interface\n");


 FUNC_4(VAR_0);


 FUNC_6(VAR_0);


 FUNC_1(&VAR_1->timer);


 FUNC_9(VAR_0);

 FUNC_13();
 if (!FUNC_11(VAR_1->data_src_addr))
  FUNC_2(VAR_3, VAR_1->data_src_addr);
 FUNC_14();


 FUNC_10(VAR_0);


 FUNC_8(VAR_0->host);
 FUNC_16(VAR_0->host);


 FUNC_5(VAR_0);


 FUNC_3(VAR_0);


 FUNC_7(VAR_0);





 if (VAR_0->vport)
  FUNC_15(VAR_0->host);
}
