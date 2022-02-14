
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinmux_info {int dummy; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 struct pinmux_info* FUNC_0 (struct gpio_chip*) ;
 int VAR_1 ;
 int FUNC_1 (struct pinmux_info*,unsigned int,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_2, unsigned VAR_3)
{
 struct pinmux_info *VAR_4 = FUNC_0(VAR_2);
 unsigned long VAR_5;
 int VAR_6;

 FUNC_2(&VAR_1, VAR_5);
 VAR_6 = FUNC_1(VAR_4, VAR_3, VAR_0);
 FUNC_3(&VAR_1, VAR_5);

 return VAR_6;
}
