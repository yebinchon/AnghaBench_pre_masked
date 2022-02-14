
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wm8350 {int irq_mutex; int dev; TYPE_1__* irq; } ;
struct TYPE_2__ {int data; int (* handler ) (struct wm8350*,int,int ) ;} ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct wm8350*,int,int ) ;
 int FUNC_4 (struct wm8350*,int) ;

__attribute__((used)) static void FUNC_5(struct wm8350 *VAR_0, int VAR_1)
{
 FUNC_1(&VAR_0->irq_mutex);

 if (VAR_0->irq[VAR_1].handler)
  VAR_0->irq[VAR_1].handler(VAR_0, VAR_1, VAR_0->irq[VAR_1].data);
 else {
  FUNC_0(VAR_0->dev, "irq %d nobody cared. now masked.\n",
   VAR_1);
  FUNC_4(VAR_0, VAR_1);
 }

 FUNC_2(&VAR_0->irq_mutex);
}
