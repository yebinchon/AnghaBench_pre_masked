
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mii_ioctl_data {int dummy; } ;
struct ifreq {int dummy; } ;
struct b44 {int lock; int mii_if; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct mii_ioctl_data*,int,int *) ;
 struct mii_ioctl_data* FUNC_1 (struct ifreq*) ;
 struct b44* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_1, struct ifreq *VAR_2, int VAR_3)
{
 struct mii_ioctl_data *VAR_4 = FUNC_1(VAR_2);
 struct b44 *VAR_5 = FUNC_2(VAR_1);
 int VAR_6 = -VAR_0;

 if (!FUNC_3(VAR_1))
  goto out;

 FUNC_4(&VAR_5->lock);
 VAR_6 = FUNC_0(&VAR_5->mii_if, VAR_4, VAR_3, ((void*)0));
 FUNC_5(&VAR_5->lock);
out:
 return VAR_6;
}
