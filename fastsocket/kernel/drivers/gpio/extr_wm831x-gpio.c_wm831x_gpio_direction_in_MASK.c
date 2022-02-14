
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x_gpio {struct wm831x* wm831x; } ;
struct wm831x {int dummy; } ;
struct gpio_chip {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct wm831x_gpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (struct wm831x*,unsigned int,int,int) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_3, unsigned VAR_4)
{
 struct wm831x_gpio *VAR_5 = FUNC_0(VAR_3);
 struct wm831x *VAR_6 = VAR_5->wm831x;

 return FUNC_1(VAR_6, VAR_0 + VAR_4,
          VAR_1 | VAR_2,
          VAR_1);
}
