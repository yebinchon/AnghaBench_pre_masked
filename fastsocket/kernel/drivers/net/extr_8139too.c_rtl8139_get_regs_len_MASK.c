
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8139_private {int regs_len; } ;
struct net_device {int dummy; } ;


 struct rtl8139_private* FUNC_0 (struct net_device*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_1)
{
 struct rtl8139_private *VAR_2;

 if (VAR_0)
  return 0;
 VAR_2 = FUNC_0(VAR_1);
 return VAR_2->regs_len;
}
