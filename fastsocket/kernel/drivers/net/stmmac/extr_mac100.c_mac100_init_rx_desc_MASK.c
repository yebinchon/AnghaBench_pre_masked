
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int own; int end_ring; int disable_ic; scalar_t__ buffer1_size; } ;
struct TYPE_4__ {TYPE_1__ rx; } ;
struct dma_desc {TYPE_2__ des01; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct dma_desc *VAR_1, unsigned int VAR_2,
    int VAR_3)
{
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_1->des01.rx.own = 1;
  VAR_1->des01.rx.buffer1_size = VAR_0 - 1;
  if (VAR_4 == VAR_2 - 1)
   VAR_1->des01.rx.end_ring = 1;
  if (VAR_3)
   VAR_1->des01.rx.disable_ic = 1;
  VAR_1++;
 }
 return;
}
