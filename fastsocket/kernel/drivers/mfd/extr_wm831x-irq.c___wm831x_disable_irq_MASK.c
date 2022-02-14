
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x_irq_data {int reg; int mask; } ;
struct wm831x {int * irq_masks; } ;


 int FUNC_0 (struct wm831x_irq_data*) ;
 struct wm831x_irq_data* VAR_0 ;
 int FUNC_1 (struct wm831x*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct wm831x *VAR_1, int VAR_2)
{
 struct wm831x_irq_data *VAR_3 = &VAR_0[VAR_2];

 VAR_1->irq_masks[VAR_3->reg - 1] |= VAR_3->mask;
 FUNC_1(VAR_1, FUNC_0(VAR_3),
    VAR_1->irq_masks[VAR_3->reg - 1]);
}
