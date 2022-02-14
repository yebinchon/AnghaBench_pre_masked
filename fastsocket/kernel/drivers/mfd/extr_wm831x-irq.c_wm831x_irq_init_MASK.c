
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x {int irq; int* irq_masks; int dev; int irq_work; int irq_wq; int irq_lock; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,int ,int,char*,struct wm831x*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (struct wm831x*,scalar_t__,int) ;

int FUNC_8(struct wm831x *VAR_7, int VAR_8)
{
 int VAR_9, VAR_10;

 FUNC_5(&VAR_7->irq_lock);

 if (!VAR_8) {
  FUNC_4(VAR_7->dev,
    "No interrupt specified - functionality limited\n");
  return 0;
 }


 VAR_7->irq_wq = FUNC_2("wm831x-irq");
 if (!VAR_7->irq_wq) {
  FUNC_3(VAR_7->dev, "Failed to allocate IRQ worker\n");
  return -VAR_0;
 }

 VAR_7->irq = VAR_8;
 FUNC_1(&VAR_7->irq_work, VAR_6);


 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_7->irq_masks); VAR_9++) {
  VAR_7->irq_masks[VAR_9] = 0xffff;
  FUNC_7(VAR_7, VAR_3 + VAR_9,
     0xffff);
 }


 FUNC_7(VAR_7, VAR_4, 0);
 VAR_10 = FUNC_6(VAR_8, VAR_5, VAR_2 | VAR_1,
     "wm831x", VAR_7);
 if (VAR_10 != 0) {
  FUNC_3(VAR_7->dev, "Failed to request IRQ %d: %d\n",
   VAR_8, VAR_10);
  return VAR_10;
 }

 return 0;
}
