
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
struct netxen_adapter {int (* macaddr_set ) (struct netxen_adapter*,int ) ;int mac_addr; } ;
struct net_device {int addr_len; int dev_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 struct netxen_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct netxen_adapter*) ;
 int FUNC_7 (struct netxen_adapter*) ;
 int FUNC_8 (struct netxen_adapter*,int ) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_1, void *VAR_2)
{
 struct netxen_adapter *VAR_3 = FUNC_2(VAR_1);
 struct sockaddr *VAR_4 = VAR_2;

 if (!FUNC_0(VAR_4->sa_data))
  return -VAR_0;

 if (FUNC_5(VAR_1)) {
  FUNC_4(VAR_1);
  FUNC_6(VAR_3);
 }

 FUNC_1(VAR_3->mac_addr, VAR_4->sa_data, VAR_1->addr_len);
 FUNC_1(VAR_1->dev_addr, VAR_4->sa_data, VAR_1->addr_len);
 VAR_3->macaddr_set(VAR_3, VAR_4->sa_data);

 if (FUNC_5(VAR_1)) {
  FUNC_3(VAR_1);
  FUNC_7(VAR_3);
 }
 return 0;
}
