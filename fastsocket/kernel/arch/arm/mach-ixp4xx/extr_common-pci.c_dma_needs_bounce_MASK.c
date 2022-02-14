
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int * bus; } ;
typedef scalar_t__ dma_addr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

int FUNC_0(struct device *VAR_2, dma_addr_t VAR_3, size_t VAR_4)
{
 return (VAR_2->bus == &VAR_1 ) && ((VAR_3 + VAR_4) >= VAR_0);
}
