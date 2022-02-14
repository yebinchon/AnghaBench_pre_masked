
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int gfp_t ;
typedef scalar_t__ dma_addr_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (void*) ;

__attribute__((used)) static void *FUNC_3(struct device *VAR_0, size_t VAR_1,
       dma_addr_t *VAR_2, gfp_t VAR_3)
{
 void *VAR_4;

 VAR_4 = (void *)FUNC_0(VAR_3, FUNC_1(VAR_1));
 if (VAR_4)
  *VAR_2 = (dma_addr_t)FUNC_2(VAR_4);

 return VAR_4;
}
