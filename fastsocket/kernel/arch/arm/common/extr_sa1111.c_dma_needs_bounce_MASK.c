
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int dma_addr_t ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;

int FUNC_2(struct device *VAR_0, dma_addr_t VAR_1, size_t VAR_2)
{







 return ((FUNC_0() || FUNC_1()) &&
  (VAR_1 >= 0xc8000000 || (VAR_1 + VAR_2) >= 0xc8000000));
}
