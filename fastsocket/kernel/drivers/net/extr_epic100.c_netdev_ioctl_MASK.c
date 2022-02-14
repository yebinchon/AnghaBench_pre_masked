
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {long base_addr; } ;
struct mii_ioctl_data {int dummy; } ;
struct ifreq {int dummy; } ;
struct epic_private {int lock; int mii; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,struct mii_ioctl_data*,int,int *) ;
 struct mii_ioctl_data* FUNC_1 (struct ifreq*) ;
 int FUNC_2 (scalar_t__) ;
 struct epic_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_2, struct ifreq *VAR_3, int VAR_4)
{
 struct epic_private *VAR_5 = FUNC_3(VAR_2);
 long VAR_6 = VAR_2->base_addr;
 struct mii_ioctl_data *VAR_7 = FUNC_1(VAR_3);
 int VAR_8;


 if (! FUNC_4(VAR_2)) {
  FUNC_5(0x0200, VAR_6 + VAR_0);
  FUNC_5((FUNC_2(VAR_6 + VAR_1) & ~0x003C) | 0x4800, VAR_6 + VAR_1);
 }


 FUNC_6(&VAR_5->lock);
 VAR_8 = FUNC_0(&VAR_5->mii, VAR_7, VAR_4, ((void*)0));
 FUNC_7(&VAR_5->lock);


 if (! FUNC_4(VAR_2)) {
  FUNC_5(0x0008, VAR_6 + VAR_0);
  FUNC_5((FUNC_2(VAR_6 + VAR_1) & ~0x483C) | 0x0000, VAR_6 + VAR_1);
 }
 return VAR_8;
}
