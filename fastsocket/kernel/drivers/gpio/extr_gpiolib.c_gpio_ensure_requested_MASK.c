
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_desc {int flags; struct gpio_chip* chip; } ;
struct gpio_chip {unsigned int base; scalar_t__ request; int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,char*,int const) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct gpio_desc*,char*) ;
 int FUNC_3 (char*,int const) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct gpio_desc *VAR_2, unsigned VAR_3)
{
 const struct gpio_chip *VAR_4 = VAR_2->chip;
 const int VAR_5 = VAR_4->base + VAR_3;

 if (FUNC_0(FUNC_4(VAR_1, &VAR_2->flags) == 0,
   "autorequest GPIO-%d\n", VAR_5)) {
  if (!FUNC_5(VAR_4->owner)) {
   FUNC_3("GPIO-%d: module can't be gotten \n", VAR_5);
   FUNC_1(VAR_1, &VAR_2->flags);

   return -VAR_0;
  }
  FUNC_2(VAR_2, "[auto]");

  if (VAR_4->request)
   return 1;
 }
 return 0;
}
