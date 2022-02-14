
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {int ib_free; scalar_t__ ib_put; scalar_t__ ib_max; } ;
struct nouveau_channel {TYPE_1__ dma; int object; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int) ;

__attribute__((used)) static int
FUNC_2(struct nouveau_channel *VAR_1, int VAR_2)
{
 uint32_t VAR_3 = 0, VAR_4 = 0;

 while (VAR_1->dma.ib_free < VAR_2) {
  uint32_t VAR_5 = FUNC_1(VAR_1->object, 0x88);
  if (VAR_5 != VAR_4) {
   VAR_4 = VAR_5;
   VAR_3 = 0;
  }

  if ((++VAR_3 & 0xff) == 0) {
   FUNC_0(1);
   if (VAR_3 > 100000)
    return -VAR_0;
  }

  VAR_1->dma.ib_free = VAR_5 - VAR_1->dma.ib_put;
  if (VAR_1->dma.ib_free <= 0)
   VAR_1->dma.ib_free += VAR_1->dma.ib_max;
 }

 return 0;
}
