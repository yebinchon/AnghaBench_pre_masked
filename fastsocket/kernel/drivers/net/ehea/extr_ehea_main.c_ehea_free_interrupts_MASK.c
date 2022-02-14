
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ehea_port_res {int num_def_qps; TYPE_4__* qp_eq; TYPE_2__* eq; struct ehea_port_res* port_res; } ;
struct ehea_port {int num_def_qps; TYPE_4__* qp_eq; TYPE_2__* eq; struct ehea_port* port_res; } ;
struct TYPE_7__ {int ist1; } ;
struct TYPE_8__ {TYPE_3__ attr; } ;
struct TYPE_5__ {int ist1; } ;
struct TYPE_6__ {TYPE_1__ attr; } ;


 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (int ,struct ehea_port_res*) ;
 struct ehea_port_res* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct ehea_port_res*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0)
{
 struct ehea_port *VAR_1 = FUNC_2(VAR_0);
 struct ehea_port_res *VAR_2;
 int VAR_3;



 for (VAR_3 = 0; VAR_3 < VAR_1->num_def_qps; VAR_3++) {
  VAR_2 = &VAR_1->port_res[VAR_3];
  FUNC_1(VAR_2->eq->attr.ist1, VAR_2);
  if (FUNC_3(VAR_1))
   FUNC_0("free send irq for res %d with handle 0x%X",
      VAR_3, VAR_2->eq->attr.ist1);
 }


 FUNC_1(VAR_1->qp_eq->attr.ist1, VAR_1);
 if (FUNC_3(VAR_1))
  FUNC_0("associated event interrupt for handle 0x%X freed",
     VAR_1->qp_eq->attr.ist1);
}
