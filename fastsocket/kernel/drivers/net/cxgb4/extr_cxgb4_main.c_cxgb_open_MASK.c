
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_info {struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct adapter {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct adapter*) ;
 int FUNC_1 (struct net_device*) ;
 struct port_info* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1)
{
 int VAR_2;
 struct port_info *VAR_3 = FUNC_2(VAR_1);
 struct adapter *VAR_4 = VAR_3->adapter;

 FUNC_3(VAR_1);

 if (!(VAR_4->flags & VAR_0)) {
  VAR_2 = FUNC_0(VAR_4);
  if (VAR_2 < 0)
   return VAR_2;
 }

 VAR_2 = FUNC_1(VAR_1);
 if (!VAR_2)
  FUNC_4(VAR_1);
 return VAR_2;
}
