
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u16 ;
struct b43_phy {unsigned int channel; TYPE_1__* ops; } ;
struct b43_wldev {struct b43_phy phy; int wl; } ;
struct TYPE_2__ {unsigned int (* get_default_chan ) (struct b43_wldev*) ;int (* switch_channel ) (struct b43_wldev*,unsigned int) ;} ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 unsigned int FUNC_1 (struct b43_wldev*,int ,int ) ;
 int FUNC_2 (struct b43_wldev*,int ,int ,unsigned int) ;
 int FUNC_3 (int) ;
 unsigned int FUNC_4 (struct b43_wldev*) ;
 int FUNC_5 (struct b43_wldev*,unsigned int) ;

int FUNC_6(struct b43_wldev *VAR_6, unsigned int VAR_7)
{
 struct b43_phy *VAR_8 = &(VAR_6->phy);
 u16 VAR_9, VAR_10;
 int VAR_11;

 if (VAR_7 == VAR_0)
  VAR_7 = VAR_8->ops->get_default_chan(VAR_6);




 VAR_9 = VAR_7;
 if (FUNC_0(VAR_6->wl) == VAR_5)
  VAR_9 |= VAR_4;

 if (0)
  VAR_9 |= VAR_3;
 VAR_10 = FUNC_1(VAR_6, VAR_1, VAR_2);
 FUNC_2(VAR_6, VAR_1, VAR_2, VAR_9);


 VAR_11 = VAR_8->ops->switch_channel(VAR_6, VAR_7);
 if (VAR_11)
  goto err_restore_cookie;

 VAR_6->phy.channel = VAR_7;

 FUNC_3(8);

 return 0;

err_restore_cookie:
 FUNC_2(VAR_6, VAR_1,
   VAR_2, VAR_10);

 return VAR_11;
}
