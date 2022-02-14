
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ngpio; } ;
struct s3c_gpio_chip {TYPE_1__ chip; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 struct s3c_gpio_chip* FUNC_0 (unsigned int) ;
 int FUNC_1 (struct s3c_gpio_chip*) ;

void FUNC_2(void)
{
 struct s3c_gpio_chip *VAR_2;
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  VAR_2 = FUNC_0(VAR_3);
  if (!VAR_2)
   continue;

  FUNC_1(VAR_2);

  VAR_3 += VAR_2->chip.ngpio;
  VAR_3 += VAR_0;
 }
}
