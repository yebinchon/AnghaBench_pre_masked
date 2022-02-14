
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ipw2100_priv {int hw_features; int status; TYPE_2__* ieee; int net_dev; } ;
struct TYPE_3__ {int wiphy; } ;
struct TYPE_4__ {TYPE_1__ wdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(struct ipw2100_priv *VAR_6)
{



 unsigned short VAR_7 = 0;
 u32 VAR_8 = 0;
 int VAR_9;

 if (!(VAR_6->hw_features & VAR_0)) {
  FUNC_2(VAR_6->ieee->wdev.wiphy, 0);
  VAR_6->status &= ~VAR_5;
  return 0;
 }

 for (VAR_9 = 0; VAR_9 < 5; VAR_9++) {
  FUNC_1(40);
  FUNC_0(VAR_6->net_dev, VAR_2, &VAR_8);
  VAR_7 = (VAR_7 << 1) | ((VAR_8 & VAR_1) ? 0 : 1);
 }

 if (VAR_7 == 0) {
  FUNC_2(VAR_6->ieee->wdev.wiphy, 1);
  VAR_6->status |= VAR_5;
 } else {
  FUNC_2(VAR_6->ieee->wdev.wiphy, 0);
  VAR_6->status &= ~VAR_5;
 }

 return (VAR_7 == 0);
}
