
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct ehea_adapter {TYPE_3__** port; TYPE_1__* ofdev; } ;
struct device_node {int full_name; } ;
struct TYPE_6__ {TYPE_2__* netdev; } ;
struct TYPE_5__ {int name; } ;
struct TYPE_4__ {struct device_node* node; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ehea_adapter*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,int ,int const) ;
 int FUNC_3 (struct ehea_adapter*) ;
 TYPE_3__* FUNC_4 (struct ehea_adapter*,int const,struct device_node*) ;
 struct device_node* FUNC_5 (struct device_node*,struct device_node*) ;
 int * FUNC_6 (struct device_node*,char*,int *) ;
 int FUNC_7 (struct device_node*) ;

__attribute__((used)) static int FUNC_8(struct ehea_adapter *VAR_1)
{
 struct device_node *VAR_2;
 struct device_node *VAR_3 = ((void*)0);

 const u32 *VAR_4;
 int VAR_5 = 0;

 VAR_2 = VAR_1->ofdev->node;
 while ((VAR_3 = FUNC_5(VAR_2, VAR_3))) {

  VAR_4 = FUNC_6(VAR_3, "ibm,hea-port-no",
       ((void*)0));
  if (!VAR_4) {
   FUNC_1("bad device node: eth_dn name=%s",
       VAR_3->full_name);
   continue;
  }

  if (FUNC_0(VAR_1)) {
   FUNC_1("creating MR failed");
   FUNC_7(VAR_3);
   return -VAR_0;
  }

  VAR_1->port[VAR_5] = FUNC_4(VAR_1,
         *VAR_4,
         VAR_3);
  if (VAR_1->port[VAR_5])
   FUNC_2("%s -> logical port id #%d",
      VAR_1->port[VAR_5]->netdev->name,
      *VAR_4);
  else
   FUNC_3(VAR_1);

  VAR_5++;
 };
 return 0;
}
