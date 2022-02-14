
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ssb_device {int dummy; } ;
struct TYPE_3__ {scalar_t__ type; } ;
struct b43_wldev {TYPE_1__ phy; TYPE_2__* dev; } ;
struct TYPE_4__ {struct ssb_device* sdev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct b43_wldev*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ssb_device*,int ) ;
 int FUNC_3 (struct ssb_device*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct b43_wldev *VAR_7, bool VAR_8)
{
 struct ssb_device *VAR_9 = VAR_7->dev->sdev;
 u32 VAR_10;
 u32 VAR_11 = 0;

 if (VAR_8)
  VAR_11 |= VAR_1;
 VAR_11 |= VAR_2;
 VAR_11 |= VAR_3;
 if (VAR_7->phy.type == VAR_0)
  VAR_11 |= VAR_4;
 FUNC_0(VAR_7, VAR_11);
 FUNC_1(2);


 VAR_10 = FUNC_2(VAR_9, VAR_5);
 VAR_10 |= VAR_6;
 VAR_10 &= ~VAR_3;
 FUNC_3(VAR_9, VAR_5, VAR_10);
 FUNC_2(VAR_9, VAR_5);
 FUNC_1(1);
 VAR_10 &= ~VAR_6;
 FUNC_3(VAR_9, VAR_5, VAR_10);
 FUNC_2(VAR_9, VAR_5);
 FUNC_1(1);
}
