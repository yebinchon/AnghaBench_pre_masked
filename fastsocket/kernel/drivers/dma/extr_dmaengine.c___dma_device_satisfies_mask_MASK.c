
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bits; } ;
struct dma_device {TYPE_1__ cap_mask; } ;
struct TYPE_5__ {int bits; } ;
typedef TYPE_2__ dma_cap_mask_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct dma_device *VAR_1, dma_cap_mask_t *VAR_2)
{
 dma_cap_mask_t VAR_3;

 FUNC_0(VAR_3.bits, VAR_2->bits, VAR_1->cap_mask.bits,
  VAR_0);
 return FUNC_1(VAR_2->bits, VAR_3.bits, VAR_0);
}
