
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long owner; unsigned long frame; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,int ) ;
 int VAR_6 ;

int FUNC_2(unsigned long VAR_7, unsigned long VAR_8, unsigned long VAR_9)
{
 int VAR_10, VAR_11, VAR_12;

 if (VAR_7 > 0xffffff) {
  if (VAR_6)
   FUNC_0
       ("vdma_map: Invalid logical address: %08lx\n",
        VAR_7);
  return -VAR_0;
 }
 if (VAR_8 > 0x1fffffff) {
  if (VAR_6)
   FUNC_0
       ("vdma_map: Invalid physical address: %08lx\n",
        VAR_8);
  return -VAR_0;
 }

 VAR_12 = VAR_11 =
     (((VAR_8 & (VAR_3 - 1)) + VAR_9) >> 12) + 1;
 VAR_10 = VAR_7 >> 12;
 if (VAR_6)
  FUNC_0("vdma_remap: first=%x, pages=%x\n", VAR_10, VAR_11);
 if (VAR_10 + VAR_11 > VAR_4) {
  if (VAR_6)
   FUNC_0("vdma_alloc: Invalid size: %08lx\n", VAR_9);
  return -VAR_0;
 }

 VAR_8 &= ~(VAR_3 - 1);
 while (VAR_11 > 0 && VAR_10 < VAR_4) {
  if (VAR_5[VAR_10].owner != VAR_7) {
   if (VAR_6)
    FUNC_0("Trying to remap other's pages.\n");
   return -VAR_1;
  }
  VAR_5[VAR_10].frame = VAR_8;
  VAR_8 += VAR_3;
  VAR_10++;
  VAR_11--;
 }




 FUNC_1(VAR_2, 0);

 if (VAR_6 > 2) {
  int VAR_13;
  VAR_11 = (((VAR_8 & (VAR_3 - 1)) + VAR_9) >> 12) + 1;
  VAR_10 = VAR_7 >> 12;
  FUNC_0("LADDR: ");
  for (VAR_13 = VAR_10; VAR_13 < VAR_10 + VAR_11; VAR_13++)
   FUNC_0("%08x ", VAR_13 << 12);
  FUNC_0("\nPADDR: ");
  for (VAR_13 = VAR_10; VAR_13 < VAR_10 + VAR_11; VAR_13++)
   FUNC_0("%08x ", VAR_5[VAR_13].frame);
  FUNC_0("\nOWNER: ");
  for (VAR_13 = VAR_10; VAR_13 < VAR_10 + VAR_11; VAR_13++)
   FUNC_0("%08x ", VAR_5[VAR_13].owner);
  FUNC_0("\n");
 }

 return 0;
}
