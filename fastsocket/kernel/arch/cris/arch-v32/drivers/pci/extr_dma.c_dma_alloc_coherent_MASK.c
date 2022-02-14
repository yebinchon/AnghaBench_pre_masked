
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int coherent_dma_mask; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (struct device*,size_t,int *,void**) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (void*,int ,size_t) ;
 int FUNC_4 (void*) ;

void *FUNC_5(struct device *VAR_3, size_t VAR_4,
      dma_addr_t *VAR_5, gfp_t VAR_6)
{
 void *VAR_7;
 int VAR_8 = FUNC_2(VAR_4);

 VAR_6 &= ~(VAR_1 | VAR_2);

 if (FUNC_1(VAR_3, VAR_4, VAR_5, &VAR_7))
  return VAR_7;

 if (VAR_3 == ((void*)0) || (VAR_3->coherent_dma_mask < 0xffffffff))
  VAR_6 |= VAR_0;

 VAR_7 = (void *)FUNC_0(VAR_6, VAR_8);

 if (VAR_7 != ((void*)0)) {
  FUNC_3(VAR_7, 0, VAR_4);
  *VAR_5 = FUNC_4(VAR_7);
 }
 return VAR_7;
}
