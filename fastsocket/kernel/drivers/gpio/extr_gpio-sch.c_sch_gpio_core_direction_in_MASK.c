
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
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_3, unsigned VAR_4)
{
 u8 VAR_5;
 unsigned short VAR_6, VAR_7;

 FUNC_2(&VAR_2);

 VAR_6 = VAR_0 + VAR_4 / 8;
 VAR_7 = VAR_4 % 8;

 VAR_5 = FUNC_0(VAR_1 + VAR_6);

 if (!(VAR_5 & (1 << VAR_7)))
  FUNC_1(VAR_5 | (1 << VAR_7), VAR_1 + VAR_6);

 FUNC_3(&VAR_2);
 return 0;
}
