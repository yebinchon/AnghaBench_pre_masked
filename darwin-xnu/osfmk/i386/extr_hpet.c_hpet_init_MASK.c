
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_2__ {int GCAP_ID; } ;
typedef TYPE_1__ hpetReg_t ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long long VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 unsigned long long VAR_12 ;
 int VAR_13 ;
 unsigned long long VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_1 (int,int,int ) ;
 int FUNC_2 (char*,int,int,...) ;
 int FUNC_3 () ;
 scalar_t__ VAR_18 ;
 int FUNC_4 (unsigned long long,int) ;
 int VAR_19 ;
 int VAR_20 ;
 unsigned long long VAR_21 ;

void
FUNC_5(void)
{
 unsigned int *VAR_22;

 FUNC_3();





 VAR_22 = (uint32_t *)(VAR_18 + 0x3404);
 uint32_t VAR_23 = *VAR_22;
 FUNC_0("    current RCBA.HPTC:  %08X\n", *VAR_22);
 if(!(VAR_23 & VAR_17)) {
  FUNC_0("HPET memory is not enabled, "
      "enabling and assigning to 0xFED00000 (hope that's ok)\n");
  *VAR_22 = (VAR_23 & ~3) | VAR_17;
 }




 VAR_11 = VAR_9 | ((VAR_23 & 3) << 12);
 VAR_10 = FUNC_1(VAR_11 & -4096, VAR_1 * 4, VAR_3);
 FUNC_2("HPET: vaddr = %lX, paddr = %08X\n", (unsigned long)VAR_10, VAR_11);






 VAR_15 = (uint32_t)(((hpetReg_t *)VAR_10)->GCAP_ID >> 32);
 VAR_16 = (1 * VAR_2) / VAR_15;
 VAR_14 = (uint64_t)VAR_15 << 32;
 VAR_14 = VAR_14 / 1000000ULL;
 VAR_13 = 0xFFFFFFFFFFFFFFFFULL / VAR_14;
 FUNC_2("HPET: Frequency = %6d.%04dMHz, "
  "cvtt2n = %08X.%08X, cvtn2t = %08X.%08X\n",
  (uint32_t)(VAR_16 / VAR_0), (uint32_t)(VAR_16 % VAR_0),
  (uint32_t)(VAR_14 >> 32), (uint32_t)VAR_14,
  (uint32_t)(VAR_13 >> 32), (uint32_t)VAR_13);






 VAR_12 = (uint64_t)VAR_15 << 20;
 VAR_12 = VAR_12 / 1000000ULL;


 VAR_19 = FUNC_4(VAR_21, VAR_13);
 FUNC_0(" CVT: TSC to HPET = %08X.%08X\n",
     (uint32_t)(VAR_19 >> 32), (uint32_t)VAR_19);


 VAR_8 = FUNC_4(VAR_14, VAR_20);
 FUNC_0(" CVT: HPET to TSC = %08X.%08X\n",
     (uint32_t)(VAR_8 >> 32), (uint32_t)VAR_8);


 VAR_4 = FUNC_4(VAR_6, VAR_13);
 FUNC_0(" CVT: BUS to HPET = %08X.%08X\n",
     (uint32_t)(VAR_4 >> 32), (uint32_t)VAR_4);


 VAR_7 = FUNC_4(VAR_14, VAR_5);
 FUNC_0(" CVT: HPET to BUS = %08X.%08X\n",
     (uint32_t)(VAR_7 >> 32), (uint32_t)VAR_7);
}
