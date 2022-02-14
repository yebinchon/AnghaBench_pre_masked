
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct wm97xx {scalar_t__ id; TYPE_1__* mach_ops; scalar_t__ pen_irq; int dev; } ;
struct TYPE_2__ {int irq_gpio; int irq_enable; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int ,char*,struct wm97xx*) ;
 int VAR_4 ;
 int FUNC_3 (struct wm97xx*,int) ;
 int FUNC_4 (struct wm97xx*,int,int) ;

__attribute__((used)) static int FUNC_5(struct wm97xx *VAR_5)
{
 u16 VAR_6;



 FUNC_0(!VAR_5->mach_ops->irq_enable);

 if (FUNC_2(VAR_5->pen_irq, VAR_4, VAR_2,
   "wm97xx-pen", VAR_5)) {
  FUNC_1(VAR_5->dev,
   "Failed to register pen down interrupt, polling");
  VAR_5->pen_irq = 0;
  return -VAR_1;
 }


 if (VAR_5->id != VAR_3) {
  FUNC_0(!VAR_5->mach_ops->irq_gpio);
  VAR_6 = FUNC_3(VAR_5, VAR_0);
  FUNC_4(VAR_5, VAR_0,
    VAR_6 & ~(VAR_5->mach_ops->irq_gpio));
  VAR_6 = FUNC_3(VAR_5, 0x5a);
  FUNC_4(VAR_5, 0x5a, VAR_6 & ~0x0001);
 }

 return 0;
}
