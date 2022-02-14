
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gpio_chip {unsigned int ngpio; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_2, unsigned VAR_3)
{
 u32 VAR_4;
 u32 VAR_5;

 if (VAR_3 >= VAR_2->ngpio)
  FUNC_0();

 if (VAR_3 < 32) {
  VAR_4 = VAR_1;
  VAR_5 = 1 << VAR_3;
 } else {
  VAR_4 = VAR_0;
  VAR_5 = 1 << (VAR_3 - 32);
 }

 return !!(FUNC_1(VAR_4) & VAR_5);
}
