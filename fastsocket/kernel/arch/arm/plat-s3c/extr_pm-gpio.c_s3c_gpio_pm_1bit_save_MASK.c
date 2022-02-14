
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c_gpio_chip {scalar_t__ base; void** pm_save; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct s3c_gpio_chip *VAR_2)
{
 VAR_2->pm_save[0] = FUNC_0(VAR_2->base + VAR_0);
 VAR_2->pm_save[1] = FUNC_0(VAR_2->base + VAR_1);
}
