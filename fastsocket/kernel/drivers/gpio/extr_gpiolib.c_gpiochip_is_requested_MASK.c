
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_chip {unsigned int base; } ;
struct TYPE_2__ {char const* label; int flags; struct gpio_chip* chip; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (int ,int *) ;

const char *FUNC_2(struct gpio_chip *VAR_2, unsigned VAR_3)
{
 unsigned VAR_4 = VAR_2->base + VAR_3;

 if (!FUNC_0(VAR_4) || VAR_1[VAR_4].chip != VAR_2)
  return ((void*)0);
 if (FUNC_1(VAR_0, &VAR_1[VAR_4].flags) == 0)
  return ((void*)0);



 return "?";

}
