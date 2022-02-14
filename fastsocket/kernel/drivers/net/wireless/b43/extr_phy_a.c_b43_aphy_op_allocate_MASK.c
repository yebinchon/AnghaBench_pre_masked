
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct b43_phy_a* a; } ;
struct b43_wldev {TYPE_1__ phy; } ;
struct b43_phy_a {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct b43_wldev*) ;
 int FUNC_1 (struct b43_phy_a*) ;
 struct b43_phy_a* FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct b43_wldev *VAR_2)
{
 struct b43_phy_a *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return -VAR_0;
 VAR_2->phy.a = VAR_3;

 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4)
  goto err_free_aphy;

 return 0;

err_free_aphy:
 FUNC_1(VAR_3);
 VAR_2->phy.a = ((void*)0);

 return VAR_4;
}
