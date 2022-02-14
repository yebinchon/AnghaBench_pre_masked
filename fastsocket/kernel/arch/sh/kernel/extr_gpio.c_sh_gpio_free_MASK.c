
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinmux_info {TYPE_1__* gpios; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct pinmux_info* FUNC_0 (struct gpio_chip*) ;
 int VAR_3 ;
 int FUNC_1 (struct pinmux_info*,unsigned int,int,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct gpio_chip *VAR_4, unsigned VAR_5)
{
 struct pinmux_info *VAR_6 = FUNC_0(VAR_4);
 unsigned long VAR_7;
 int VAR_8;

 if (!VAR_6)
  return;

 FUNC_2(&VAR_3, VAR_7);

 VAR_8 = VAR_6->gpios[VAR_5].flags & VAR_1;
 FUNC_1(VAR_6, VAR_5, VAR_8, VAR_0);
 VAR_6->gpios[VAR_5].flags &= ~VAR_1;
 VAR_6->gpios[VAR_5].flags |= VAR_2;

 FUNC_3(&VAR_3, VAR_7);
}
