
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct adapter {struct net_device** port; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;

void FUNC_5(struct adapter *VAR_0, int VAR_1, int VAR_2)
{
 struct net_device *VAR_3 = VAR_0->port[VAR_1];


 if (FUNC_4(VAR_3) && VAR_2 != FUNC_2(VAR_3)) {
  if (VAR_2)
   FUNC_3(VAR_3);
  else
   FUNC_1(VAR_3);

  FUNC_0(VAR_3);
 }
}
