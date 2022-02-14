
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int speed; size_t fc; } ;
struct port_info {TYPE_1__ link_cfg; } ;
struct net_device {int dummy; } ;





 int FUNC_0 (struct net_device*,char*,...) ;
 struct port_info* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0)
{
 if (!FUNC_2(VAR_0))
  FUNC_0(VAR_0, "link down\n");
 else {
  static const char *VAR_1[] = { "no", "Rx", "Tx", "Tx/Rx" };

  const char *VAR_2 = "10Mbps";
  const struct port_info *VAR_3 = FUNC_1(VAR_0);

  switch (VAR_3->link_cfg.speed) {
  case 128:
   VAR_2 = "10Gbps";
   break;
  case 129:
   VAR_2 = "1000Mbps";
   break;
  case 130:
   VAR_2 = "100Mbps";
   break;
  }

  FUNC_0(VAR_0, "link up, %s, full-duplex, %s PAUSE\n", VAR_2,
       VAR_1[VAR_3->link_cfg.fc]);
 }
}
