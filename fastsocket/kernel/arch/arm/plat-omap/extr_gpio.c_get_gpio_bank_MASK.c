
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_bank {int dummy; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 struct gpio_bank* VAR_0 ;

__attribute__((used)) static inline struct gpio_bank *FUNC_8(int VAR_1)
{
 if (FUNC_2()) {
  if (FUNC_1(VAR_1))
   return &VAR_0[0];
  return &VAR_0[1];
 }
 if (FUNC_3()) {
  if (FUNC_1(VAR_1))
   return &VAR_0[0];
  return &VAR_0[1 + (VAR_1 >> 4)];
 }
 if (FUNC_7()) {
  if (FUNC_1(VAR_1))
   return &VAR_0[0];
  return &VAR_0[1 + (VAR_1 >> 5)];
 }
 if (FUNC_4())
  return &VAR_0[VAR_1 >> 5];
 if (FUNC_5() || FUNC_6())
  return &VAR_0[VAR_1 >> 5];
 FUNC_0();
 return ((void*)0);
}
