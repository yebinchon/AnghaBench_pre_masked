
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int end_ring; } ;
struct TYPE_4__ {TYPE_1__ etx; } ;
struct dma_desc {TYPE_2__ des01; } ;


 int FUNC_0 (struct dma_desc*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct dma_desc *VAR_0)
{
 int VAR_1 = VAR_0->des01.etx.end_ring;

 FUNC_0(VAR_0, 0, sizeof(struct dma_desc));
 VAR_0->des01.etx.end_ring = VAR_1;

 return;
}
