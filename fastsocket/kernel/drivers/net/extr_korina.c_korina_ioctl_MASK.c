
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mii_ioctl_data {int dummy; } ;
struct korina_private {int mii_if; int lock; } ;
struct ifreq {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct mii_ioctl_data*,int,int *) ;
 struct mii_ioctl_data* FUNC_1 (struct ifreq*) ;
 int FUNC_2 (int *) ;
 struct korina_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_1, struct ifreq *VAR_2, int VAR_3)
{
 struct korina_private *VAR_4 = FUNC_3(VAR_1);
 struct mii_ioctl_data *VAR_5 = FUNC_1(VAR_2);
 int VAR_6;

 if (!FUNC_4(VAR_1))
  return -VAR_0;
 FUNC_5(&VAR_4->lock);
 VAR_6 = FUNC_0(&VAR_4->mii_if, VAR_5, VAR_3, ((void*)0));
 FUNC_6(&VAR_4->lock);
 FUNC_2(&VAR_4->mii_if);

 return VAR_6;
}
