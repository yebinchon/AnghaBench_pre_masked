
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MemoryBlock {unsigned long logicalStart; int logicalEnd; unsigned long absStart; int absEnd; } ;
struct IoHriMainStoreSegment4 {unsigned long nonInterleavedBlocksStartAdr; unsigned long nonInterleavedBlocksEndAdr; } ;


 unsigned long FUNC_0 (unsigned long) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static unsigned long FUNC_2(
  struct MemoryBlock *VAR_1, unsigned long VAR_2)
{
 unsigned long VAR_3, VAR_4;
 unsigned long VAR_5 = 1;
 struct IoHriMainStoreSegment4 *VAR_6 =
  (struct IoHriMainStoreSegment4 *)VAR_0;
 unsigned long VAR_7 = VAR_6->nonInterleavedBlocksStartAdr;
 unsigned long VAR_8 = VAR_6->nonInterleavedBlocksEndAdr;
 unsigned long VAR_9 = VAR_8 - VAR_7;

 FUNC_1("Mainstore_VPD: Condor\n");






 VAR_1[0].logicalStart = 0;
 VAR_1[0].logicalEnd = 0x100000000UL;
 VAR_1[0].absStart = 0;
 VAR_1[0].absEnd = 0x100000000UL;

 if (VAR_9) {
  VAR_5 = 2;
  VAR_7 = VAR_7 & 0x000fffffffffffffUL;
  VAR_7 = FUNC_0(VAR_7);
  VAR_3 = VAR_7;
  VAR_9 = FUNC_0(VAR_9);
  VAR_4 = VAR_9;
  FUNC_1( "Main store hole: start chunk = %0lx, size = %0lx chunks\n",
    VAR_3, VAR_4 );
  VAR_1[0].logicalEnd = VAR_3;
  VAR_1[0].absEnd = VAR_3;
  VAR_1[1].logicalStart = VAR_3;
  VAR_1[1].logicalEnd = 0x100000000UL - VAR_4;
  VAR_1[1].absStart = VAR_3 + VAR_4;
  VAR_1[1].absEnd = 0x100000000UL;
 }
 return VAR_5;
}
