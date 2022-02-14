
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct physdev_irq {int irq; int vector; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct physdev_irq*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_1(int VAR_2)
{
 struct physdev_irq VAR_3;

 VAR_3.irq = VAR_2;
 if (FUNC_0(VAR_1, &VAR_3))
  return -VAR_0;

 return VAR_3.vector;
}
