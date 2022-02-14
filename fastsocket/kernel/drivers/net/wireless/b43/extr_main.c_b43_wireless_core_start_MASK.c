
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct b43_wldev {TYPE_1__* wl; int irq_mask; TYPE_3__* dev; } ;
struct TYPE_5__ {int irq; } ;
struct TYPE_4__ {int hw; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct b43_wldev*) ;
 int FUNC_3 (struct b43_wldev*) ;
 int FUNC_4 (struct b43_wldev*) ;
 int VAR_7 ;
 int FUNC_5 (struct b43_wldev*,int ) ;
 int FUNC_6 (struct b43_wldev*,int ) ;
 scalar_t__ FUNC_7 (struct b43_wldev*) ;
 int FUNC_8 (struct b43_wldev*,int ,int ) ;
 int FUNC_9 (TYPE_1__*,char*) ;
 int FUNC_10 (TYPE_1__*,char*,...) ;
 int FUNC_11 (struct b43_wldev*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ,int ,int ,int ,struct b43_wldev*) ;

__attribute__((used)) static int FUNC_14(struct b43_wldev *VAR_8)
{
 int VAR_9;

 FUNC_0(FUNC_7(VAR_8) != VAR_1);

 FUNC_11(VAR_8);
 if (FUNC_1(VAR_8->dev)) {
  VAR_9 = FUNC_5(VAR_8, VAR_7);
  if (VAR_9) {
   FUNC_10(VAR_8->wl, "Cannot request SDIO IRQ\n");
   goto out;
  }
 } else {
  VAR_9 = FUNC_13(VAR_8->dev->irq, VAR_5,
        VAR_6,
        VAR_3, VAR_4, VAR_8);
  if (VAR_9) {
   FUNC_10(VAR_8->wl, "Cannot request IRQ-%d\n",
          VAR_8->dev->irq);
   goto out;
  }
 }


 FUNC_12(VAR_8->wl->hw);
 FUNC_6(VAR_8, VAR_2);


 FUNC_3(VAR_8);
 FUNC_8(VAR_8, VAR_0, VAR_8->irq_mask);


 FUNC_4(VAR_8);

 FUNC_2(VAR_8);

 FUNC_9(VAR_8->wl, "Wireless interface started\n");
out:
 return VAR_9;
}
