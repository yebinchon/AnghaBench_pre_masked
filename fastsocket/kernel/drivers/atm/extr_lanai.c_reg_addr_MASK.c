
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lanai_dev {int base; } ;
typedef enum lanai_register { ____Placeholder_lanai_register } lanai_register ;
typedef int bus_addr_t ;



__attribute__((used)) static inline bus_addr_t FUNC_0(const struct lanai_dev *VAR_0,
 enum lanai_register VAR_1)
{
 return VAR_0->base + VAR_1;
}
