
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,int) ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(struct gpio_chip *VAR_2, unsigned VAR_3, int VAR_4)
{
 if (VAR_3 < 4)
  FUNC_0(VAR_3 + 1, VAR_4);
 else if (VAR_3 < 6)
  FUNC_1(VAR_3 - 3, VAR_4 ? VAR_1 : VAR_0);
 else
  FUNC_2(VAR_4);
}
