
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct port_info {struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct adapter {int msg_enable; } ;


 struct port_info* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0, u32 VAR_1)
{
 struct port_info *VAR_2 = FUNC_0(VAR_0);
 struct adapter *VAR_3 = VAR_2->adapter;

 VAR_3->msg_enable = VAR_1;
}
