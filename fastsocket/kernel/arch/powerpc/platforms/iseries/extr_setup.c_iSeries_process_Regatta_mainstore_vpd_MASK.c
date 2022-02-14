
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct MemoryBlock {unsigned long absStart; unsigned long absEnd; unsigned long logicalStart; unsigned long logicalEnd; } ;
struct IoHriMainStoreSegment5 {int msAreaExists; struct IoHriMainStoreArea4* msAreaArray; } ;
struct IoHriMainStoreArea4 {unsigned long numAdrRangeBlocks; TYPE_1__* xAdrRangeBlock; } ;
struct TYPE_2__ {scalar_t__ blockEnd; scalar_t__ blockStart; } ;


 unsigned long VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static unsigned long FUNC_3(
  struct MemoryBlock *VAR_2, unsigned long VAR_3)
{
 struct IoHriMainStoreSegment5 *VAR_4 =
  (struct IoHriMainStoreSegment5 *)VAR_1;
 unsigned long VAR_5 = 0;
 u32 VAR_6 = VAR_4->msAreaExists;
 unsigned long VAR_7;

 FUNC_2("Mainstore_VPD: Regatta\n");

 for (VAR_7 = 0; VAR_7 < VAR_0; ++VAR_7 ) {
  unsigned long VAR_8;
  struct IoHriMainStoreArea4 *VAR_9;

  if (VAR_6 & 0x80000000) {
   unsigned long VAR_10;

   VAR_9 = &VAR_4->msAreaArray[VAR_7];
   VAR_8 = VAR_9->numAdrRangeBlocks;
   FUNC_2("ms_vpd: processing area %2ld  blocks=%ld",
     VAR_7, VAR_8);
   for (VAR_10 = 0; VAR_10 < VAR_8;
     ++VAR_10 ) {

    struct MemoryBlock VAR_11;
    unsigned long VAR_12;

    VAR_11.absStart =
     (unsigned long)VAR_9->xAdrRangeBlock[VAR_10].blockStart;
    VAR_11.absEnd =
     (unsigned long)VAR_9->xAdrRangeBlock[VAR_10].blockEnd;
    VAR_11.logicalStart = 0;
    VAR_11.logicalEnd = 0;
    FUNC_2("\n          block %ld absStart=%016lx absEnd=%016lx",
      VAR_10, VAR_11.absStart,
      VAR_11.absEnd);

    for (VAR_12 = 0; VAR_12 < VAR_5; ++VAR_12) {
     if (VAR_2[VAR_12].absStart ==
       VAR_11.absStart)
      break;
    }
    if (VAR_12 == VAR_5) {
     if (VAR_5 == VAR_3)
      FUNC_1("iSeries_process_mainstore_vpd: too many memory blocks");
     VAR_2[VAR_5] = VAR_11;
     ++VAR_5;
    } else
     FUNC_2(" (duplicate)");
   }
   FUNC_2("\n");
  }
  VAR_6 <<= 1;
 }

 if (VAR_5 > 1) {
  unsigned long VAR_13, VAR_14;

  for (VAR_13 = 0; VAR_13 < VAR_5 - 1; ++VAR_13) {
   for (VAR_14 = VAR_5 - 1; VAR_13 < VAR_14; --VAR_14) {
    if (VAR_2[VAR_14].absStart <
      VAR_2[VAR_14-1].absStart) {
     struct MemoryBlock VAR_15;

     VAR_15 = VAR_2[VAR_14];
     VAR_2[VAR_14] = VAR_2[VAR_14-1];
     VAR_2[VAR_14-1] = VAR_15;
    }
   }
  }
 }





 {
 unsigned long VAR_16, VAR_17;

 FUNC_2("ms_vpd: %ld sorted memory blocks\n", VAR_5);
 VAR_17 = 0;
 for (VAR_16 = 0; VAR_16 < VAR_5; ++VAR_16) {
  unsigned long VAR_18 = VAR_2[VAR_16].absEnd -
   VAR_2[VAR_16].absStart;

  VAR_2[VAR_16].logicalStart = VAR_17;
  VAR_2[VAR_16].logicalEnd = VAR_17 + VAR_18;
  VAR_17 += VAR_18;
  FUNC_2("          Bitmap range: %016lx - %016lx\n"
    "        Absolute range: %016lx - %016lx\n",
    VAR_2[VAR_16].logicalStart,
    VAR_2[VAR_16].logicalEnd,
    VAR_2[VAR_16].absStart, VAR_2[VAR_16].absEnd);
  VAR_2[VAR_16].absStart = FUNC_0(VAR_2[VAR_16].absStart &
    0x000fffffffffffffUL);
  VAR_2[VAR_16].absEnd = FUNC_0(VAR_2[VAR_16].absEnd &
    0x000fffffffffffffUL);
  VAR_2[VAR_16].logicalStart =
   FUNC_0(VAR_2[VAR_16].logicalStart);
  VAR_2[VAR_16].logicalEnd = FUNC_0(VAR_2[VAR_16].logicalEnd);
 }
 }

 return VAR_5;
}
