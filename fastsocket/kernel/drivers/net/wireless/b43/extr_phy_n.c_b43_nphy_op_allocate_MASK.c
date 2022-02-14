
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct b43_phy_n* n; } ;
struct b43_wldev {TYPE_1__ phy; } ;
struct b43_phy_n {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct b43_phy_n* FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct b43_wldev *VAR_2)
{
 struct b43_phy_n *VAR_3;

 VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return -VAR_0;
 VAR_2->phy.n = VAR_3;

 return 0;
}
