
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ehea_port {int full_duplex; int port_speed; TYPE_1__* netdev; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ,char*) ;
 int FUNC_1 (struct ehea_port*,int ) ;
 struct ehea_port* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1)
{
 struct ehea_port *VAR_2 = FUNC_2(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2, VAR_0);

 if (!VAR_3)
  FUNC_0("%s: Port speed succesfully set: %dMbps "
     "%s Duplex",
     VAR_2->netdev->name, VAR_2->port_speed,
     VAR_2->full_duplex == 1 ? "Full" : "Half");
 return VAR_3;
}
