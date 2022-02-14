
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (unsigned int,int) ;
 int VAR_2 ;
 int FUNC_3 (unsigned int,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct gpio_chip *VAR_3, unsigned VAR_4,
 int VAR_5)
{
 unsigned long VAR_6;

 if (!FUNC_3(VAR_4, VAR_1))
  return -VAR_0;

 FUNC_4(&VAR_2, VAR_6);


 FUNC_0(VAR_4, 0);


 FUNC_2(VAR_4, VAR_5);


 FUNC_1(VAR_4, 0);

 FUNC_5(&VAR_2, VAR_6);

 return 0;
}
