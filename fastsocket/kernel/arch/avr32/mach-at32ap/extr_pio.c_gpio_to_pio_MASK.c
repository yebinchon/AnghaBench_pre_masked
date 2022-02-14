
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pio_device {int regs; } ;


 unsigned int VAR_0 ;
 struct pio_device* VAR_1 ;

__attribute__((used)) static struct pio_device *FUNC_0(unsigned int VAR_2)
{
 struct pio_device *VAR_3;
 unsigned int VAR_4;

 VAR_4 = VAR_2 >> 5;
 if (VAR_4 >= VAR_0)
  return ((void*)0);
 VAR_3 = &VAR_1[VAR_4];
 if (!VAR_3->regs)
  return ((void*)0);

 return VAR_3;
}
