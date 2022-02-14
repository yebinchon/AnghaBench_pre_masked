
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct b43_phy_operations* ops; } ;
struct b43_wldev {TYPE_1__ phy; } ;
struct b43_phy_operations {int (* pwork_60sec ) (struct b43_wldev*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct b43_wldev*,int ) ;
 int FUNC_1 (struct b43_wldev*) ;

__attribute__((used)) static void FUNC_2(struct b43_wldev *VAR_1)
{
 const struct b43_phy_operations *VAR_2 = VAR_1->phy.ops;

 if (VAR_2->pwork_60sec)
  VAR_2->pwork_60sec(VAR_1);


 FUNC_0(VAR_1, VAR_0);
}
