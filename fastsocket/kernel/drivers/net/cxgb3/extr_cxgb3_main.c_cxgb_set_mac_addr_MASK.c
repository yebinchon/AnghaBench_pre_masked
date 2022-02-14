
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
struct port_info {int port_id; int mac; struct adapter* adapter; } ;
struct net_device {int dev_addr; int addr_len; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 struct port_info* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct adapter*) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (struct adapter*,int ) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_2, void *VAR_3)
{
 struct port_info *VAR_4 = FUNC_2(VAR_2);
 struct adapter *VAR_5 = VAR_4->adapter;
 struct sockaddr *VAR_6 = VAR_3;

 if (!FUNC_0(VAR_6->sa_data))
  return -VAR_0;

 FUNC_1(VAR_2->dev_addr, VAR_6->sa_data, VAR_2->addr_len);
 FUNC_4(&VAR_4->mac, VAR_1, VAR_2->dev_addr);
 if (FUNC_3(VAR_5))
  FUNC_5(VAR_5, VAR_4->port_id);
 return 0;
}
