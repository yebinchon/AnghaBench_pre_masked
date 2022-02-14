
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct electra_cf_socket {int gpio_detect; scalar_t__ gpio_base; } ;


 unsigned int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct electra_cf_socket *VAR_0)
{
 unsigned int VAR_1;

 VAR_1 = FUNC_0(VAR_0->gpio_base+0x40);
 return !(VAR_1 & (1 << VAR_0->gpio_detect));
}
