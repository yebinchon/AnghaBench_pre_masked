
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ngpio; int label; } ;
struct s3c_gpio_chip {TYPE_1__ chip; int * pm_save; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (char*,int ,int ,int ,int ,int ) ;
 struct s3c_gpio_chip* FUNC_1 (unsigned int) ;
 int FUNC_2 (struct s3c_gpio_chip*) ;

void FUNC_3(void)
{
 struct s3c_gpio_chip *VAR_2;
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  VAR_2 = FUNC_1(VAR_3);
  if (!VAR_2)
   continue;

  FUNC_2(VAR_2);

  FUNC_0("%s: save %08x,%08x,%08x,%08x\n",
     VAR_2->chip.label,
     VAR_2->pm_save[0],
     VAR_2->pm_save[1],
     VAR_2->pm_save[2],
     VAR_2->pm_save[3]);

  VAR_3 += VAR_2->chip.ngpio;
  VAR_3 += VAR_0;
 }
}
