
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_desc {int flags; struct gpio_chip* chip; } ;
struct gpio_chip {int owner; scalar_t__ base; int (* free ) (struct gpio_chip*,scalar_t__) ;scalar_t__ can_sleep; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct gpio_desc*,int *) ;
 scalar_t__ VAR_1 ;
 struct gpio_desc* VAR_2 ;
 int FUNC_3 (unsigned int) ;
 int VAR_3 ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (struct gpio_chip*,scalar_t__) ;
 scalar_t__ FUNC_11 (int ,int *) ;

void FUNC_12(unsigned VAR_4)
{
 unsigned long VAR_5;
 struct gpio_desc *VAR_6;
 struct gpio_chip *VAR_7;

 FUNC_5();

 if (!FUNC_3(VAR_4)) {
  FUNC_0(VAR_1);
  return;
 }

 FUNC_4(VAR_4);

 FUNC_8(&VAR_3, VAR_5);

 VAR_6 = &VAR_2[VAR_4];
 VAR_7 = VAR_6->chip;
 if (VAR_7 && FUNC_11(VAR_0, &VAR_6->flags)) {
  if (VAR_7->free) {
   FUNC_9(&VAR_3, VAR_5);
   FUNC_6(VAR_1 && VAR_7->can_sleep);
   VAR_7->free(VAR_7, VAR_4 - VAR_7->base);
   FUNC_8(&VAR_3, VAR_5);
  }
  FUNC_2(VAR_6, ((void*)0));
  FUNC_7(VAR_6->chip->owner);
  FUNC_1(VAR_0, &VAR_6->flags);
 } else
  FUNC_0(VAR_1);

 FUNC_9(&VAR_3, VAR_5);
}
