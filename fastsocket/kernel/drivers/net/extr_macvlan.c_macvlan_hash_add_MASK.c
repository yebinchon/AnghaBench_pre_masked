
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct macvlan_port {int * vlan_hash; } ;
struct macvlan_dev {int hlist; TYPE_1__* dev; struct macvlan_port* port; } ;
struct TYPE_2__ {unsigned char* dev_addr; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct macvlan_dev *VAR_0)
{
 struct macvlan_port *VAR_1 = VAR_0->port;
 const unsigned char *VAR_2 = VAR_0->dev->dev_addr;

 FUNC_0(&VAR_0->hlist, &VAR_1->vlan_hash[VAR_2[5]]);
}
