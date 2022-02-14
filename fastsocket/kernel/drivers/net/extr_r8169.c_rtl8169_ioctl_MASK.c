
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {int (* do_ioctl ) (struct rtl8169_private*,struct mii_ioctl_data*,int) ;} ;
struct net_device {int dummy; } ;
struct mii_ioctl_data {int dummy; } ;
struct ifreq {int dummy; } ;


 int VAR_0 ;
 struct mii_ioctl_data* FUNC_0 (struct ifreq*) ;
 struct rtl8169_private* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct rtl8169_private*,struct mii_ioctl_data*,int) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1, struct ifreq *VAR_2, int VAR_3)
{
 struct rtl8169_private *VAR_4 = FUNC_1(VAR_1);
 struct mii_ioctl_data *VAR_5 = FUNC_0(VAR_2);

 return FUNC_2(VAR_1) ? VAR_4->do_ioctl(VAR_4, VAR_5, VAR_3) : -VAR_0;
}
