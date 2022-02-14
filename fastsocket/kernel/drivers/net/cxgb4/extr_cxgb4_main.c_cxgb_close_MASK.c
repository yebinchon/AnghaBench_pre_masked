
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_info {int viid; struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct adapter {int fn; } ;


 struct port_info* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct adapter*,int ,int ,int,int) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0)
{
 struct port_info *VAR_1 = FUNC_0(VAR_0);
 struct adapter *VAR_2 = VAR_1->adapter;

 FUNC_2(VAR_0);
 FUNC_1(VAR_0);
 return FUNC_3(VAR_2, VAR_2->fn, VAR_1->viid, 0, 0);
}
