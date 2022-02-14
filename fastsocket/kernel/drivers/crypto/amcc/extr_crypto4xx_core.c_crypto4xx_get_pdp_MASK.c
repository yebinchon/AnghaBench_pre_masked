
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct crypto4xx_device {struct ce_pd* pdr; scalar_t__ pdr_pa; } ;
struct ce_pd {int dummy; } ;
typedef scalar_t__ dma_addr_t ;



__attribute__((used)) static struct ce_pd *FUNC_0(struct crypto4xx_device *VAR_0,
           dma_addr_t *VAR_1, u32 VAR_2)
{
 *VAR_1 = VAR_0->pdr_pa + sizeof(struct ce_pd) * VAR_2;

 return VAR_0->pdr + sizeof(struct ce_pd) * VAR_2;
}
