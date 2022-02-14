
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_fd {scalar_t__ irq; scalar_t__ id; } ;
struct irq_and_dev {scalar_t__ irq; scalar_t__ dev; } ;



__attribute__((used)) static int FUNC_0(struct irq_fd *VAR_0, void *VAR_1)
{
 struct irq_and_dev *VAR_2 = VAR_1;

 return ((VAR_0->irq == VAR_2->irq) && (VAR_0->id == VAR_2->dev));
}
