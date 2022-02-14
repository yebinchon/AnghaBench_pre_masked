
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;


 void* FUNC_0 (struct device*,size_t,int *,int ) ;
 void* FUNC_1 (struct device*,size_t,int *,int ) ;

__attribute__((used)) static void *FUNC_2(struct device *VAR_0, size_t VAR_1,
     dma_addr_t *VAR_2, gfp_t VAR_3)
{
 void *VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_4)
  return VAR_4;

 return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
}
