
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octeon_ethernet {int mii_info; } ;
struct net_device {int dummy; } ;
struct mii_ioctl_data {int dummy; } ;
struct ifreq {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct mii_ioctl_data*,int,unsigned int*) ;
 struct mii_ioctl_data* FUNC_2 (struct ifreq*) ;
 int VAR_0 ;
 struct octeon_ethernet* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct net_device *VAR_1, struct ifreq *VAR_2, int VAR_3)
{
 struct octeon_ethernet *VAR_4 = FUNC_3(VAR_1);
 struct mii_ioctl_data *VAR_5 = FUNC_2(VAR_2);
 unsigned int VAR_6;
 int VAR_7;

 FUNC_0(&VAR_0);
 VAR_7 = FUNC_1(&VAR_4->mii_info, VAR_5, VAR_3, &VAR_6);
 FUNC_4(&VAR_0);

 return VAR_7;
}
