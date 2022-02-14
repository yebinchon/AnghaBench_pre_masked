
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct b43legacy_wldev {int wl; TYPE_1__* dev; } ;
struct TYPE_2__ {int dma_dev; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,unsigned int) ;
 int FUNC_2 (int ,char*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct b43legacy_wldev *VAR_1, u64 VAR_2)
{
 u64 VAR_3 = VAR_2;
 bool VAR_4 = 0;
 int VAR_5;



 while (1) {
  VAR_5 = FUNC_5(VAR_1->dev->dma_dev, VAR_2);
  if (!VAR_5) {
   VAR_5 = FUNC_4(VAR_1->dev->dma_dev, VAR_2);
   if (!VAR_5)
    break;
  }
  if (VAR_2 == FUNC_0(64)) {
   VAR_2 = FUNC_0(32);
   VAR_4 = 1;
   continue;
  }
  if (VAR_2 == FUNC_0(32)) {
   VAR_2 = FUNC_0(30);
   VAR_4 = 1;
   continue;
  }
  FUNC_1(VAR_1->wl, "The machine/kernel does not support "
         "the required %u-bit DMA mask\n",
         (unsigned int)FUNC_3(VAR_3));
  return -VAR_0;
 }
 if (VAR_4) {
  FUNC_2(VAR_1->wl, "DMA mask fallback from %u-bit to %u-"
   "bit\n",
   (unsigned int)FUNC_3(VAR_3),
   (unsigned int)FUNC_3(VAR_2));
 }

 return 0;
}
