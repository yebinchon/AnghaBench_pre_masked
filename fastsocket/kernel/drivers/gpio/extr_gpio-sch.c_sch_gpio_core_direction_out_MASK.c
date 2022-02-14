
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gpio_chip {int dummy; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (struct gpio_chip*,unsigned int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct gpio_chip *VAR_3,
     unsigned VAR_4, int VAR_5)
{
 u8 VAR_6;
 unsigned short VAR_7, VAR_8;

 FUNC_2(VAR_3, VAR_4, VAR_5);

 FUNC_3(&VAR_2);

 VAR_7 = VAR_0 + VAR_4 / 8;
 VAR_8 = VAR_4 % 8;

 VAR_6 = FUNC_0(VAR_1 + VAR_7);
 if (VAR_6 & (1 << VAR_8))
  FUNC_1(VAR_6 & ~(1 << VAR_8), VAR_1 + VAR_7);

 FUNC_4(&VAR_2);
 return 0;
}
