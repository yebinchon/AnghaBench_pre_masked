
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int irqreturn_t ;
struct TYPE_6__ {TYPE_2__* irq_handlers; TYPE_1__* fbdev; int frame_done; } ;
struct TYPE_5__ {int irq_mask; int data; int (* callback ) (int ) ;} ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int) ;
 TYPE_3__ VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_6, void *VAR_7)
{
 u32 VAR_8;
 int VAR_9 = 0;

 FUNC_4(1);

 VAR_8 = FUNC_2(VAR_0);
 if (VAR_8 & VAR_1)
  FUNC_0(&VAR_5.frame_done);

 if (VAR_8 & VAR_2) {
  if (FUNC_5()) {
   FUNC_1(VAR_5.fbdev->dev, "irq error status %04x\n",
    VAR_8 & 0x7fff);
  }
 }

 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  if (FUNC_7(VAR_5.irq_handlers[VAR_9].callback &&
        (VAR_8 & VAR_5.irq_handlers[VAR_9].irq_mask)))
   VAR_5.irq_handlers[VAR_9].callback(
      VAR_5.irq_handlers[VAR_9].data);
 }

 FUNC_3(VAR_0, VAR_8);

 FUNC_4(0);

 return VAR_3;
}
