
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef unsigned long long uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long long FUNC_0 (unsigned long long) ;
 int FUNC_1 (char*,...) ;
 unsigned long long FUNC_2 (int,int,int) ;

__attribute__((used)) static uint32_t FUNC_3(unsigned short VAR_2, int VAR_3)
{
 unsigned short VAR_4;
 int VAR_5;
 uint32_t VAR_6, VAR_7, VAR_8;
 unsigned long long VAR_9, VAR_10;
 uint64_t VAR_11;
 uint8_t VAR_12;
 int VAR_13 = 0;

 FUNC_1("Icache index 0x%04x  ", VAR_2);
 for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {

  __asm__ __volatile__ (
  "	.set	push		\n\t"
  "	.set	noreorder	\n\t"
  "	.set	mips64		\n\t"
  "	.set	noat		\n\t"
  "	cache	4, 0(%3)	\n\t"
  "	mfc0	%0, $29		\n\t"
  "	dmfc0	$1, $28		\n\t"
  "	dsrl32	%1, $1, 0	\n\t"
  "	sll	%2, $1, 0	\n\t"
  "	.set	pop"
  : "=r" (VAR_6), "=r" (VAR_8), "=r" (VAR_7)
  : "r" ((VAR_4 << 13) | VAR_2));

  VAR_9 = ((unsigned long long)VAR_8 << 32) | VAR_7;
  if (VAR_4 == 0) {
   VAR_12 = (VAR_6 >> 14) & 0xff;
   FUNC_1("[Bank %d Set 0x%02x]  LRU > %d %d %d %d > MRU\n",
        ((VAR_2 >> 5) & 0x3),
        ((VAR_2 >> 7) & 0x3f),
        (VAR_12 & 0x3),
        ((VAR_12 >> 2) & 0x3),
        ((VAR_12 >> 4) & 0x3),
        ((VAR_12 >> 6) & 0x3));
  }
  VAR_10 = (VAR_9 & 0xC0000FFFFFFFE000ULL) | VAR_2;
  if ((VAR_9 & (1 << 31)) && (((VAR_9 >> 62) & 0x3) == 3))
   VAR_10 |= 0x3FFFF00000000000ULL;
  VAR_5 = ((VAR_6 >> 29) & 1);
  if (VAR_5) {
   VAR_11 = VAR_9 & 0xfff3ff;
   if (((VAR_9 >> 10) & 1) ^ FUNC_2(VAR_11, 23, 0)) {
    FUNC_1("   ** bad parity in VTag0/G/ASID\n");
    VAR_13 |= VAR_1;
   }
   if (((VAR_9 >> 11) & 1) ^ FUNC_2(VAR_9, 63, 24)) {
    FUNC_1("   ** bad parity in R/VTag1\n");
    VAR_13 |= VAR_1;
   }
  }
  if (VAR_5 ^ ((VAR_6 >> 27) & 1)) {
   FUNC_1("   ** bad parity for valid bit\n");
   VAR_13 |= VAR_1;
  }
  FUNC_1(" %d  [VA %016llx]  [Vld? %d]  raw tags: %08X-%016llX\n",
       VAR_4, VAR_10, VAR_5, VAR_6, VAR_9);

  if (VAR_3) {
   uint32_t VAR_14, VAR_15, VAR_16;
   uint8_t VAR_17;
   int VAR_18;


   for (VAR_18 = 0; VAR_18 < 4; VAR_18++) {

    __asm__ __volatile__ (
    "	.set	push\n\t"
    "	.set	noreorder\n\t"
    "	.set	mips64\n\t"
    "	.set	noat\n\t"
    "	cache	6, 0(%3)  \n\t"
    "	mfc0	%0, $29, 1\n\t"
    "	dmfc0  $1, $28, 1\n\t"
    "	dsrl32 %1, $1, 0 \n\t"
    "	sll    %2, $1, 0 \n\t"
    "	.set	pop         \n"
    : "=r" (VAR_14), "=r" (VAR_15), "=r" (VAR_16)
    : "r" ((VAR_4 << 13) | VAR_2 | (VAR_18 << 3)));
    VAR_17 = (VAR_14 >> 8) & 0xff;
    if (((VAR_14 >> 16) & 1) != (uint32_t)FUNC_2(VAR_17, 7, 0)) {
     FUNC_1("   ** bad parity in predecode\n");
     VAR_13 |= VAR_0;
    }

    if (((VAR_14 >> 4) & 0xf) ^ FUNC_0(VAR_15)) {
     FUNC_1("   ** bad parity in instruction a\n");
     VAR_13 |= VAR_0;
    }
    if ((VAR_14 & 0xf) ^ FUNC_0(VAR_16)) {
     FUNC_1("   ** bad parity in instruction b\n");
     VAR_13 |= VAR_0;
    }
    FUNC_1("  %05X-%08X%08X", VAR_14, VAR_15, VAR_16);
   }
   FUNC_1("\n");
  }
 }
 return VAR_13;
}
