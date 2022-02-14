
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct b43_wldev {TYPE_2__ phy; } ;
struct TYPE_3__ {int (* radio_read ) (struct b43_wldev*,int ) ;} ;


 int FUNC_0 (struct b43_wldev*) ;
 int FUNC_1 (struct b43_wldev*,int ) ;

u16 FUNC_2(struct b43_wldev *VAR_0, u16 VAR_1)
{
 FUNC_0(VAR_0);
 return VAR_0->phy.ops->radio_read(VAR_0, VAR_1);
}
