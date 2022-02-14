
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,int) ;
 int VAR_2 ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_3, unsigned VAR_4)
{
 unsigned long VAR_5;

 if (!FUNC_1(VAR_4, VAR_1))
  return -VAR_0;

 FUNC_2(&VAR_2, VAR_5);


 FUNC_0(VAR_4, 1);

 FUNC_3(&VAR_2, VAR_5);

 return 0;
}
