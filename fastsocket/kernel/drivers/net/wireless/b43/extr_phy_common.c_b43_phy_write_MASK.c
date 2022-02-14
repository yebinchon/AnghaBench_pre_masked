
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {scalar_t__ writes_counter; TYPE_1__* ops; } ;
struct b43_wldev {TYPE_2__ phy; } ;
struct TYPE_3__ {int (* phy_write ) (struct b43_wldev*,int ,int ) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct b43_wldev*) ;
 int FUNC_1 (struct b43_wldev*,int ) ;
 int FUNC_2 (struct b43_wldev*,int ,int ) ;

void FUNC_3(struct b43_wldev *VAR_2, u16 VAR_3, u16 VAR_4)
{
 FUNC_0(VAR_2);
 VAR_2->phy.ops->phy_write(VAR_2, VAR_3, VAR_4);
 if (++VAR_2->phy.writes_counter == VAR_0) {
  FUNC_1(VAR_2, VAR_1);
  VAR_2->phy.writes_counter = 0;
 }
}
