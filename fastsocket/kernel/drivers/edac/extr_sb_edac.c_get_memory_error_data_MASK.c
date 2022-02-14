
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef long u64 ;
typedef int u32 ;
struct sbridge_pvt {int * pci_tad; scalar_t__ is_close_pg; scalar_t__ is_lockstep; scalar_t__ is_mirrored; int pci_ha0; TYPE_1__* sbridge_dev; int pci_sad0; scalar_t__ tohm; scalar_t__ tolm; } ;
struct mem_ctl_info {struct sbridge_pvt* pvt_info; } ;
struct TYPE_2__ {int mc; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 long FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 long FUNC_6 (int) ;
 int FUNC_7 (int) ;
 long FUNC_8 (int) ;
 long FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (char*,int,long,...) ;
 int * VAR_5 ;
 int FUNC_16 (struct mem_ctl_info*,char*) ;
 char* FUNC_17 (int) ;
 struct mem_ctl_info* FUNC_18 (int) ;
 int * VAR_6 ;
 int FUNC_19 (int ,int ,int*) ;
 int ** VAR_7 ;
 int * VAR_8 ;
 int FUNC_20 (int,int) ;
 int FUNC_21 (char*,char*,...) ;
 int * VAR_9 ;
 int * VAR_10 ;

__attribute__((used)) static int FUNC_22(struct mem_ctl_info *VAR_11,
     u64 VAR_12,
     u8 *VAR_13,
     long *VAR_14,
     u8 *VAR_15,
     char *VAR_16)
{
 struct mem_ctl_info *VAR_17;
 struct sbridge_pvt *VAR_18 = VAR_11->pvt_info;
 char VAR_19[256];
 int VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
 int VAR_25, VAR_26, VAR_27;
 int VAR_28;
 unsigned VAR_29[VAR_1];
 u32 VAR_30;
 u8 VAR_31,VAR_32;
 u32 VAR_33;
 u32 VAR_34;
 u64 VAR_35, VAR_36, VAR_37, VAR_38 = 0;
 if ((VAR_12 > (u64) VAR_18->tolm) && (VAR_12 < (1L << 32))) {
  FUNC_21(VAR_19, "Error at TOLM area, on addr 0x%08Lx", VAR_12);
  FUNC_16(VAR_11, VAR_19);
  return -VAR_0;
 }
 if (VAR_12 >= (u64)VAR_18->tohm) {
  FUNC_21(VAR_19, "Error at MMIOH area, on addr 0x%016Lx", VAR_12);
  FUNC_16(VAR_11, VAR_19);
  return -VAR_0;
 }




 for (VAR_21 = 0; VAR_21 < VAR_3; VAR_21++) {
  FUNC_19(VAR_18->pci_sad0, VAR_5[VAR_21],
          &VAR_30);

  if (!FUNC_0(VAR_30))
   continue;

  VAR_37 = FUNC_6(VAR_30);
  if (VAR_37 <= VAR_38) {
   FUNC_21(VAR_19, "Can't discover the memory socket");
   FUNC_16(VAR_11, VAR_19);
   return -VAR_0;
  }
  if (VAR_12 <= VAR_37)
   break;
  VAR_38 = VAR_37;
 }
 if (VAR_21 == VAR_3) {
  FUNC_21(VAR_19, "Can't discover the memory socket");
  FUNC_16(VAR_11, VAR_19);
  return -VAR_0;
 }
 VAR_16 = FUNC_17(VAR_30);
 VAR_28 = FUNC_1(VAR_30);

 FUNC_19(VAR_18->pci_sad0, VAR_6[VAR_21],
         &VAR_30);
 VAR_25 = FUNC_20(VAR_30, 0);
 for (VAR_23 = 0; VAR_23 < 8; VAR_23++) {
  if (VAR_23 > 0 && VAR_25 == FUNC_20(VAR_30, VAR_23))
   break;
  VAR_29[VAR_23] = FUNC_20(VAR_30, VAR_23);
  FUNC_15("SAD interleave #%d: %d\n",
   VAR_23, VAR_29[VAR_23]);
 }
 FUNC_15("mc#%d: Error detected on SAD#%d: address 0x%016Lx < 0x%016Lx, Interleave [%d:6]%s\n",
  VAR_18->sbridge_dev->mc,
  VAR_21,
  VAR_12,
  VAR_37,
  VAR_23 + 7,
  FUNC_1(VAR_30) ? "" : "XOR[18:16]");
 if (VAR_28)
  VAR_26 = ((VAR_12 >> 6) ^ (VAR_12 >> 16)) & 7;
 else
  VAR_26 = (VAR_12 >> 6) & 7;
 switch (VAR_23) {
 case 1:
  VAR_26 = 0;
  break;
 case 2:
  VAR_26 = VAR_26 & 1;
  break;
 case 4:
  VAR_26 = VAR_26 & 3;
  break;
 case 8:
  break;
 default:
  FUNC_21(VAR_19, "Can't discover socket interleave");
  FUNC_16(VAR_11, VAR_19);
  return -VAR_0;
 }
 *VAR_13 = VAR_29[VAR_26];
 FUNC_15("SAD interleave index: %d (wayness %d) = CPU socket %d\n",
  VAR_26, VAR_23, *VAR_13);





 VAR_17 = FUNC_18(*VAR_13);
 if (!VAR_17) {
  FUNC_21(VAR_19, "Struct for socket #%u wasn't initialized",
   *VAR_13);
  FUNC_16(VAR_11, VAR_19);
  return -VAR_0;
 }
 VAR_11 = VAR_17;
 VAR_18 = VAR_11->pvt_info;




 VAR_38 = 0;
 for (VAR_22 = 0; VAR_22 < VAR_4; VAR_22++) {
  FUNC_19(VAR_18->pci_ha0, VAR_10[VAR_22],
          &VAR_30);
  VAR_37 = FUNC_8(VAR_30);
  if (VAR_37 <= VAR_38) {
   FUNC_21(VAR_19, "Can't discover the memory channel");
   FUNC_16(VAR_11, VAR_19);
   return -VAR_0;
  }
  if (VAR_12 <= VAR_37)
   break;
  VAR_38 = VAR_37;
 }
 VAR_31 = FUNC_7(VAR_30) + 1;
 VAR_32 = FUNC_10(VAR_30) + 1;



 FUNC_19(VAR_18->pci_tad[0],
    VAR_9[VAR_22],
    &VAR_33);

 if (VAR_31 == 3)
  VAR_26 = VAR_12 >> 6;
 else
  VAR_26 = VAR_12 >> (6 + VAR_32);
 VAR_26 = VAR_26 % VAR_31;




 switch (VAR_26) {
 case 0:
  VAR_27 = FUNC_11(VAR_30);
  break;
 case 1:
  VAR_27 = FUNC_12(VAR_30);
  break;
 case 2:
  VAR_27 = FUNC_13(VAR_30);
  break;
 case 3:
  VAR_27 = FUNC_14(VAR_30);
  break;
 default:
  FUNC_21(VAR_19, "Can't discover the TAD target");
  FUNC_16(VAR_11, VAR_19);
  return -VAR_0;
 }
 *VAR_14 = 1 << VAR_27;

 if (VAR_18->is_mirrored) {
  *VAR_14 |= 1 << ((VAR_27 + 2) % 4);
  switch(VAR_31) {
  case 2:
  case 4:
   VAR_24 = 1 << VAR_32 * (VAR_31 >> 1);
   break;
  default:
   FUNC_21(VAR_19, "Invalid mirror set. Can't decode addr");
   FUNC_16(VAR_11, VAR_19);
   return -VAR_0;
  }
 } else
  VAR_24 = (1 << VAR_32) * VAR_31;

 if (VAR_18->is_lockstep)
  *VAR_14 |= 1 << ((VAR_27 + 1) % 4);

 VAR_36 = FUNC_9(VAR_33);

 FUNC_15("TAD#%d: address 0x%016Lx < 0x%016Lx, socket interleave %d, channel interleave %d (offset 0x%08Lx), index %d, base ch: %d, ch mask: 0x%02lx\n",
  VAR_22,
  VAR_12,
  VAR_37,
  (u32)FUNC_10(VAR_30),
  VAR_31,
  VAR_36,
  VAR_26,
  VAR_27,
  *VAR_14);




 if (VAR_36 > VAR_12) {
  FUNC_21(VAR_19, "Can't calculate ch addr: TAD offset 0x%08Lx is too high for addr 0x%08Lx!",
   VAR_36, VAR_12);
  FUNC_16(VAR_11, VAR_19);
  return -VAR_0;
 }
 VAR_12 -= VAR_36;

 VAR_35 = VAR_12 & 0x7f;

 VAR_12 >>= 6;
 VAR_12 /= VAR_24;





 VAR_35 |= VAR_12 << 6;




 for (VAR_20 = 0; VAR_20 < VAR_2; VAR_20++) {
  FUNC_19(VAR_18->pci_tad[VAR_27],
          VAR_8[VAR_20],
          &VAR_30);

  if (!FUNC_2(VAR_30))
   continue;

  VAR_37 = FUNC_3(VAR_30);

  FUNC_15("RIR#%d, limit: %Lu.%03Lu GB (0x%016Lx), way: %d\n",
   VAR_20,
   (VAR_37 >> 20) / 1000, (VAR_37 >> 20) % 1000,
   VAR_37,
   1 << FUNC_5(VAR_30));
  if (VAR_35 <= VAR_37)
   break;
 }
 if (VAR_20 == VAR_2) {
  FUNC_21(VAR_19, "Can't discover the memory rank for ch addr 0x%08Lx",
   VAR_35);
  FUNC_16(VAR_11, VAR_19);
  return -VAR_0;
 }
 VAR_34 = FUNC_5(VAR_30);
 if (VAR_18->is_close_pg)
  VAR_26 = (VAR_35 >> 6);
 else
  VAR_26 = (VAR_35 >> 13);
 VAR_26 %= 1 << VAR_34;

 FUNC_19(VAR_18->pci_tad[VAR_27],
         VAR_7[VAR_20][VAR_26],
         &VAR_30);
 *VAR_15 = FUNC_4(VAR_30);

 FUNC_15("RIR#%d: channel address 0x%08Lx < 0x%08Lx, RIR interleave %d, index %d\n",
  VAR_20,
  VAR_35,
  VAR_37,
  VAR_34,
  VAR_26);

 return 0;
}
