
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int end_ring; scalar_t__ own; } ;
struct TYPE_4__ {TYPE_1__ etx; } ;
struct dma_desc {TYPE_2__ des01; } ;



__attribute__((used)) static void FUNC_0(struct dma_desc *VAR_0, unsigned int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  VAR_0->des01.etx.own = 0;
  if (VAR_2 == VAR_1 - 1)
   VAR_0->des01.etx.end_ring = 1;
  VAR_0++;
 }

 return;
}
