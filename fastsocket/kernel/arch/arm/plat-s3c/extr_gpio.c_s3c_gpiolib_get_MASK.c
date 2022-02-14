
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c_gpio_chip {scalar_t__ base; } ;
struct gpio_chip {int dummy; } ;


 unsigned long FUNC_0 (scalar_t__) ;
 struct s3c_gpio_chip* FUNC_1 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 struct s3c_gpio_chip *VAR_2 = FUNC_1(VAR_0);
 unsigned long VAR_3;

 VAR_3 = FUNC_0(VAR_2->base + 0x04);
 VAR_3 >>= VAR_1;
 VAR_3 &= 1;

 return VAR_3;
}
