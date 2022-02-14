
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct smc_private {int lock; int mii_if; } ;
struct net_device {unsigned int base_addr; } ;
struct mii_ioctl_data {int dummy; } ;
struct ifreq {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,struct mii_ioctl_data*,int,int *) ;
 struct mii_ioctl_data* FUNC_2 (struct ifreq*) ;
 int FUNC_3 (scalar_t__) ;
 struct smc_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8 (struct net_device *VAR_2, struct ifreq *VAR_3, int VAR_4)
{
 struct smc_private *VAR_5 = FUNC_4(VAR_2);
 struct mii_ioctl_data *VAR_6 = FUNC_2(VAR_3);
 int VAR_7 = 0;
 u16 VAR_8;
 unsigned int VAR_9 = VAR_2->base_addr;

 if (!FUNC_5(VAR_2))
  return -VAR_1;

 FUNC_6(&VAR_5->lock);
 VAR_8 = FUNC_3(VAR_9 + VAR_0);
 FUNC_0(3);
 VAR_7 = FUNC_1(&VAR_5->mii_if, VAR_6, VAR_4, ((void*)0));
 FUNC_0(VAR_8);
 FUNC_7(&VAR_5->lock);
 return VAR_7;
}
