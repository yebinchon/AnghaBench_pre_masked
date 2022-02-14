
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;


 void* FUNC_0 (struct device*,size_t,int *,int ,int ) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (struct device*,size_t,int *,void**) ;
 void* FUNC_3 (size_t,int ) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct device*,void*) ;

void *
FUNC_6(struct device *VAR_1, size_t VAR_2, dma_addr_t *VAR_3, gfp_t VAR_4)
{
 void *VAR_5;

 if (FUNC_2(VAR_1, VAR_2, VAR_3, &VAR_5))
  return VAR_5;

 if (FUNC_1()) {
  void *VAR_6;

  VAR_6 = FUNC_3(VAR_2, VAR_4);
  if (!VAR_6)
   return ((void*)0);
  *VAR_3 = FUNC_5(VAR_1, VAR_6);

  return VAR_6;
 }

 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4,
      FUNC_4(VAR_0));
}
