
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int base; } ;
struct s3c_gpio_chip {TYPE_1__ chip; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct s3c_gpio_chip*,int,unsigned int) ;
 struct s3c_gpio_chip* FUNC_3 (unsigned int) ;

int FUNC_4(unsigned int VAR_1, unsigned int VAR_2)
{
 struct s3c_gpio_chip *VAR_3 = FUNC_3(VAR_1);
 unsigned long VAR_4;
 int VAR_5;
 int VAR_6;

 if (!VAR_3)
  return -VAR_0;

 VAR_5 = VAR_1 - VAR_3->chip.base;

 FUNC_1(VAR_4);
 VAR_6 = FUNC_2(VAR_3, VAR_5, VAR_2);
 FUNC_0(VAR_4);

 return VAR_6;
}
