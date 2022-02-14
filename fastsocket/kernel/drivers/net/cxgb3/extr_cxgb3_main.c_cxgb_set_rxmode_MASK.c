
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_info {int mac; } ;
struct net_device {int dummy; } ;


 struct port_info* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *,struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0)
{
 struct port_info *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->mac, VAR_0);
}
