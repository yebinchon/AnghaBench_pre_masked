
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lanai_dev {scalar_t__ base; } ;
typedef scalar_t__ bus_addr_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline bus_addr_t FUNC_0(const struct lanai_dev *VAR_1, int VAR_2)
{
 return VAR_1->base + VAR_0 + VAR_2;
}
