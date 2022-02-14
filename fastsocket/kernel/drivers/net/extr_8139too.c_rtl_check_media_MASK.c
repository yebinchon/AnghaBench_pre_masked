
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8139_private {scalar_t__* phys; int mii; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int *,int ,unsigned int) ;
 struct rtl8139_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct rtl8139_private*) ;

__attribute__((used)) static void FUNC_3 (struct net_device *VAR_0, unsigned int VAR_1)
{
 struct rtl8139_private *VAR_2 = FUNC_1(VAR_0);

 if (VAR_2->phys[0] >= 0) {
  FUNC_0(&VAR_2->mii, FUNC_2(VAR_2), VAR_1);
 }
}
