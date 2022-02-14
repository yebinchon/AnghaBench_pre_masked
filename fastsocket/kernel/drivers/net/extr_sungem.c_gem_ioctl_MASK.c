
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mii_ioctl_data {int phy_id; int reg_num; int val_in; int val_out; } ;
struct ifreq {int dummy; } ;
struct gem {int mii_phy_addr; int pm_mutex; int lock; int running; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct gem*,int,int) ;
 int FUNC_1 (struct gem*,int,int,int ) ;
 int FUNC_2 (struct gem*) ;
 int FUNC_3 (struct gem*) ;
 struct mii_ioctl_data* FUNC_4 (struct ifreq*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct gem* FUNC_7 (struct net_device*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_2, struct ifreq *VAR_3, int VAR_4)
{
 struct gem *VAR_5 = FUNC_7(VAR_2);
 struct mii_ioctl_data *VAR_6 = FUNC_4(VAR_3);
 int VAR_7 = -VAR_1;
 unsigned long VAR_8;




 FUNC_5(&VAR_5->pm_mutex);

 FUNC_8(&VAR_5->lock, VAR_8);
 FUNC_2(VAR_5);
 FUNC_9(&VAR_5->lock, VAR_8);

 switch (VAR_4) {
 case 130:
  VAR_6->phy_id = VAR_5->mii_phy_addr;


 case 129:
  if (!VAR_5->running)
   VAR_7 = -VAR_0;
  else {
   VAR_6->val_out = FUNC_0(VAR_5, VAR_6->phy_id & 0x1f,
         VAR_6->reg_num & 0x1f);
   VAR_7 = 0;
  }
  break;

 case 128:
  if (!VAR_5->running)
   VAR_7 = -VAR_0;
  else {
   FUNC_1(VAR_5, VAR_6->phy_id & 0x1f, VAR_6->reg_num & 0x1f,
        VAR_6->val_in);
   VAR_7 = 0;
  }
  break;
 };

 FUNC_8(&VAR_5->lock, VAR_8);
 FUNC_3(VAR_5);
 FUNC_9(&VAR_5->lock, VAR_8);

 FUNC_6(&VAR_5->pm_mutex);

 return VAR_7;
}
