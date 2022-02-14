
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct crypto4xx_device {scalar_t__ gdr; scalar_t__ gdr_pa; } ;
struct ce_gd {int dummy; } ;
typedef scalar_t__ dma_addr_t ;



__attribute__((used)) static inline struct ce_gd *FUNC_0(struct crypto4xx_device *VAR_0,
           dma_addr_t *VAR_1, u32 VAR_2)
{
 *VAR_1 = VAR_0->gdr_pa + sizeof(struct ce_gd) * VAR_2;

 return (struct ce_gd *) (VAR_0->gdr + sizeof(struct ce_gd) * VAR_2);
}
