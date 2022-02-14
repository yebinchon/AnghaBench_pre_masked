
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_chip {int dummy; } ;
struct TYPE_2__ {int din; } ;


 int FUNC_0 (int *) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_1(struct gpio_chip *VAR_1, unsigned int VAR_2)
{
 return FUNC_0(&VAR_0->din) & (1 << VAR_2);
}
