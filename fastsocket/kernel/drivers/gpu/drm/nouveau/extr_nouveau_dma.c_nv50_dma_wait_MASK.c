
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int free; int cur; int max; scalar_t__ put; } ;
struct nouveau_channel {TYPE_1__ dma; } ;


 int VAR_0 ;
 int FUNC_0 (struct nouveau_channel*) ;
 int FUNC_1 (struct nouveau_channel*,int *,int*) ;
 int FUNC_2 (struct nouveau_channel*,int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(struct nouveau_channel *VAR_1, int VAR_2, int VAR_3)
{
 uint64_t VAR_4 = 0;
 int VAR_5, VAR_6 = 0;

 VAR_5 = FUNC_2(VAR_1, VAR_2 + 1);
 if (FUNC_3(VAR_5))
  return VAR_5;

 while (VAR_1->dma.free < VAR_3) {
  int VAR_7 = FUNC_1(VAR_1, &VAR_4, &VAR_6);
  if (FUNC_3(VAR_7 < 0)) {
   if (VAR_7 == -VAR_0)
    continue;

   return VAR_7;
  }

  if (VAR_7 <= VAR_1->dma.cur) {
   VAR_1->dma.free = VAR_1->dma.max - VAR_1->dma.cur;
   if (VAR_1->dma.free >= VAR_3)
    break;

   FUNC_0(VAR_1);
   do {
    VAR_7 = FUNC_1(VAR_1, &VAR_4, &VAR_6);
    if (FUNC_3(VAR_7 < 0)) {
     if (VAR_7 == -VAR_0)
      continue;
     return VAR_7;
    }
   } while (VAR_7 == 0);
   VAR_1->dma.cur = 0;
   VAR_1->dma.put = 0;
  }

  VAR_1->dma.free = VAR_7 - VAR_1->dma.cur - 1;
 }

 return 0;
}
