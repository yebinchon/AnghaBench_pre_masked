
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int phy_id; } ;
struct nic {scalar_t__ phy; TYPE_1__ mii; int blink_timer; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int FUNC_1 (struct net_device*,int ,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int) ;
 struct nic* FUNC_4 (struct net_device*) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_6, u32 VAR_7)
{
 struct nic *VAR_8 = FUNC_4(VAR_6);
 u16 VAR_9 = (VAR_8->phy == VAR_5) ? VAR_0 :
               VAR_3;

 if (!VAR_7 || VAR_7 > (u32)(VAR_2 / VAR_1))
  VAR_7 = (u32)(VAR_2 / VAR_1);
 FUNC_2(&VAR_8->blink_timer, VAR_4);
 FUNC_3(VAR_7 * 1000);
 FUNC_0(&VAR_8->blink_timer);
 FUNC_1(VAR_6, VAR_8->mii.phy_id, VAR_9, 0);

 return 0;
}
