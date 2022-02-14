
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int name; } ;
struct ehea_port {scalar_t__ state; int num_def_qps; TYPE_1__* port_res; int adapter; } ;
struct TYPE_2__ {int qp; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ehea_port*,int ) ;
 int FUNC_2 (struct ehea_port*) ;
 int FUNC_3 (struct ehea_port*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (char*,int ,int) ;
 int FUNC_8 (struct ehea_port*,int) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 struct ehea_port* FUNC_12 (struct net_device*) ;

__attribute__((used)) static int FUNC_13(struct net_device *VAR_3)
{
 int VAR_4, VAR_5;
 struct ehea_port *VAR_6 = FUNC_12(VAR_3);

 if (VAR_6->state == VAR_0)
  return 0;

 VAR_4 = FUNC_8(VAR_6, VAR_6->num_def_qps);
 if (VAR_4) {
  FUNC_4("port_res_failed");
  goto out;
 }


 VAR_4 = FUNC_3(VAR_6);
 if (VAR_4) {
  FUNC_4("ehea_configure_port failed. ret:%d", VAR_4);
  goto out_clean_pr;
 }

 VAR_4 = FUNC_9(VAR_3);
 if (VAR_4) {
  FUNC_4("reg_interrupts failed. ret:%d", VAR_4);
  goto out_clean_pr;
 }

 for (VAR_5 = 0; VAR_5 < VAR_6->num_def_qps; VAR_5++) {
  VAR_4 = FUNC_0(VAR_6->adapter, VAR_6->port_res[VAR_5].qp);
  if (VAR_4) {
   FUNC_4("activate_qp failed");
   goto out_free_irqs;
  }
 }

 for (VAR_5 = 0; VAR_5 < VAR_6->num_def_qps; VAR_5++) {
  VAR_4 = FUNC_5(&VAR_6->port_res[VAR_5]);
  if (VAR_4) {
   FUNC_4("out_free_irqs");
   goto out_free_irqs;
  }
 }

 VAR_4 = FUNC_1(VAR_6, VAR_2);
 if (VAR_4) {
  VAR_4 = -VAR_1;
  goto out_free_irqs;
 }

 VAR_6->state = VAR_0;

 VAR_4 = 0;
 goto out;

out_free_irqs:
 FUNC_6(VAR_3);

out_clean_pr:
 FUNC_2(VAR_6);
out:
 if (VAR_4)
  FUNC_7("Failed starting %s. ret=%i", VAR_3->name, VAR_4);

 FUNC_10();
 FUNC_11();

 return VAR_4;
}
