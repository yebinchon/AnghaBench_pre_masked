
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct b43_phy {int type; TYPE_1__* ops; } ;
struct b43_wldev {struct b43_phy phy; } ;
struct TYPE_7__ {int (* allocate ) (struct b43_wldev*) ;} ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 TYPE_1__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_1 (struct b43_wldev*) ;

int FUNC_2(struct b43_wldev *VAR_7)
{
 struct b43_phy *VAR_8 = &(VAR_7->phy);
 int VAR_9;

 VAR_8->ops = ((void*)0);

 switch (VAR_8->type) {
 case 133:
  VAR_8->ops = &VAR_1;
  break;
 case 132:
  VAR_8->ops = &VAR_2;
  break;
 case 128:



  break;
 case 129:



  break;
 case 131:



  break;
 case 130:



  break;
 }
 if (FUNC_0(!VAR_8->ops))
  return -VAR_0;

 VAR_9 = VAR_8->ops->allocate(VAR_7);
 if (VAR_9)
  VAR_8->ops = ((void*)0);

 return VAR_9;
}
