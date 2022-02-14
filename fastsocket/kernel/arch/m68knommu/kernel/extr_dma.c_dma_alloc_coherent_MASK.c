
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int* dma_mask; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (void*,int ,size_t) ;
 int FUNC_3 (void*) ;

void *FUNC_4(struct device *VAR_3, size_t VAR_4,
      dma_addr_t *VAR_5, gfp_t VAR_6)
{
 void *VAR_7;

 VAR_6 &= ~(VAR_1 | VAR_2);

 if (VAR_3 == ((void*)0) || (*VAR_3->dma_mask < 0xffffffff))
  VAR_6 |= VAR_0;
 VAR_7 = (void *)FUNC_0(VAR_6, FUNC_1(VAR_4));

 if (VAR_7 != ((void*)0)) {
  FUNC_2(VAR_7, 0, VAR_4);
  *VAR_5 = FUNC_3(VAR_7);
 }
 return VAR_7;
}
