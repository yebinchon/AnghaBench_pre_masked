
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u16 ;
struct dma_info {int dmadev; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 void* FUNC_1 (int ,int ,int *,int ) ;

__attribute__((used)) static void *FUNC_2(struct dma_info *VAR_2, uint VAR_3,
      u16 VAR_4, uint *VAR_5,
      dma_addr_t *VAR_6)
{
 if (VAR_4) {
  u16 VAR_7 = (1 << VAR_4);
  if (!FUNC_0(VAR_1, VAR_7))
   VAR_3 += VAR_7;
  *VAR_5 = VAR_3;
 }
 return FUNC_1(VAR_2->dmadev, VAR_3, VAR_6, VAR_0);
}
