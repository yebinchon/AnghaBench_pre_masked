
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u32 ;
typedef int u16 ;
struct dma_info {int dmadev; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int) ;
 void* FUNC_1 (struct dma_info*,int,int,int*,int *) ;
 int FUNC_2 (int ,int,void*,int ) ;
 scalar_t__ FUNC_3 (unsigned long,int) ;

__attribute__((used)) static void *FUNC_4(struct dma_info *VAR_0, u32 VAR_1, uint VAR_2,
      u16 *VAR_3, uint *VAR_4,
      dma_addr_t *VAR_5)
{
 void *VAR_6;
 u32 VAR_7;
 u32 VAR_8 = 1 << *VAR_3;

 VAR_6 = FUNC_1(VAR_0, VAR_2, *VAR_3, VAR_4, VAR_5);

 if (((void*)0) == VAR_6)
  return ((void*)0);

 VAR_7 = (u32) FUNC_3((unsigned long)VAR_6, VAR_8);
 if (((VAR_7 + VAR_2 - 1) & VAR_1) != (VAR_7
       & VAR_1)) {
  *VAR_3 = FUNC_0(VAR_2);
  FUNC_2(VAR_0->dmadev, VAR_2, VAR_6, *VAR_5);
  VAR_6 = FUNC_1(VAR_0, VAR_2, *VAR_3,
   VAR_4, VAR_5);
 }
 return VAR_6;
}
