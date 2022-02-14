
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ape_dev {int irq_count; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static irqreturn_t FUNC_0(int VAR_2, void *VAR_3)
{
 struct ape_dev *VAR_4 = (struct ape_dev *)VAR_3;
 if (!VAR_4)
  return VAR_1;
 VAR_4->irq_count++;
 return VAR_0;
}
