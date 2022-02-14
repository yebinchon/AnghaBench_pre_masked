
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_chip {unsigned int base; unsigned int ngpio; } ;
struct TYPE_2__ {int * chip; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 scalar_t__ FUNC_3 (int ,int *) ;

int FUNC_4(struct gpio_chip *VAR_4)
{
 unsigned long VAR_5;
 int VAR_6 = 0;
 unsigned VAR_7;

 FUNC_1(&VAR_3, VAR_5);

 for (VAR_7 = VAR_4->base; VAR_7 < VAR_4->base + VAR_4->ngpio; VAR_7++) {
  if (FUNC_3(VAR_1, &VAR_2[VAR_7].flags)) {
   VAR_6 = -VAR_0;
   break;
  }
 }
 if (VAR_6 == 0) {
  for (VAR_7 = VAR_4->base; VAR_7 < VAR_4->base + VAR_4->ngpio; VAR_7++)
   VAR_2[VAR_7].chip = ((void*)0);
 }

 FUNC_2(&VAR_3, VAR_5);

 if (VAR_6 == 0)
  FUNC_0(VAR_4);

 return VAR_6;
}
