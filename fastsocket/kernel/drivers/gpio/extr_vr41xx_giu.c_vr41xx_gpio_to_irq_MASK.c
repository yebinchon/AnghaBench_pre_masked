
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {unsigned int ngpio; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct gpio_chip *VAR_2, unsigned VAR_3)
{
 if (VAR_3 >= VAR_2->ngpio)
  return -VAR_0;

 return VAR_1 + VAR_3;
}
