
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct sbridge_pvt {int tolm; int tohm; int * pci_tad; TYPE_1__* channel; int pci_ha0; int pci_sad0; int pci_sad1; } ;
struct mem_ctl_info {struct sbridge_pvt* pvt_info; } ;
struct TYPE_2__ {int dimms; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 scalar_t__ FUNC_13 (int) ;
 scalar_t__ FUNC_14 (int) ;
 scalar_t__ FUNC_15 (int) ;
 scalar_t__ FUNC_16 (int) ;
 scalar_t__ FUNC_17 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_18 (char*,int,int,int,...) ;
 int * VAR_6 ;
 int FUNC_19 (int) ;
 int * VAR_7 ;
 int FUNC_20 (int ,int ,int*) ;
 int ** VAR_8 ;
 int * VAR_9 ;
 int FUNC_21 (int,int) ;
 int * VAR_10 ;
 int * VAR_11 ;

__attribute__((used)) static void FUNC_22(const struct mem_ctl_info *VAR_12)
{
 struct sbridge_pvt *VAR_13 = VAR_12->pvt_info;
 int VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 u32 VAR_20;
 u64 VAR_21, VAR_22 = 0;
 u64 VAR_23;
 u32 VAR_24;






 FUNC_20(VAR_13->pci_sad1, VAR_5,
         &VAR_20);
 VAR_13->tolm = FUNC_2(VAR_20);
 VAR_23 = (1 + VAR_13->tolm) >> 20;

 FUNC_18("TOLM: %Lu.%03Lu GB (0x%016Lx)\n",
  VAR_23 / 1000, VAR_23 % 1000, (u64)VAR_13->tolm);


 FUNC_20(VAR_13->pci_sad1, VAR_4,
         &VAR_20);
 VAR_13->tohm = FUNC_1(VAR_20);
 VAR_23 = (1 + VAR_13->tohm) >> 20;

 FUNC_18("TOHM: %Lu.%03Lu GB (0x%016Lx)",
  VAR_23 / 1000, VAR_23 % 1000, (u64)VAR_13->tohm);







 VAR_22 = 0;
 for (VAR_17 = 0; VAR_17 < VAR_1; VAR_17++) {

  FUNC_20(VAR_13->pci_sad0, VAR_6[VAR_17],
          &VAR_20);
  VAR_21 = FUNC_9(VAR_20);

  if (!FUNC_0(VAR_20))
   continue;

  if (VAR_21 <= VAR_22)
   break;

  VAR_23 = (VAR_21 + 1) >> 20;
  FUNC_18("SAD#%d %s up to %Lu.%03Lu GB (0x%016Lx) %s reg=0x%08x\n",
   VAR_17,
   FUNC_19(VAR_20),
   VAR_23 / 1000, VAR_23 % 1000,
   ((u64)VAR_23) << 20L,
   FUNC_3(VAR_20) ? "Interleave: 8:6" : "Interleave: [8:6]XOR[18:16]",
   VAR_20);
  VAR_22 = VAR_21;

  FUNC_20(VAR_13->pci_sad0, VAR_7[VAR_17],
          &VAR_20);
  VAR_19 = FUNC_21(VAR_20, 0);
  for (VAR_15 = 0; VAR_15 < 8; VAR_15++) {
   if (VAR_15 > 0 && VAR_19 == FUNC_21(VAR_20, VAR_15))
    break;

   FUNC_18("SAD#%d, interleave #%d: %d\n",
   VAR_17, VAR_15, FUNC_21(VAR_20, VAR_15));
  }
 }




 VAR_22 = 0;
 for (VAR_18 = 0; VAR_18 < VAR_2; VAR_18++) {
  FUNC_20(VAR_13->pci_ha0, VAR_11[VAR_18],
          &VAR_20);
  VAR_21 = FUNC_11(VAR_20);
  if (VAR_21 <= VAR_22)
   break;
  VAR_23 = (VAR_21 + 1) >> 20;

  FUNC_18("TAD#%d: up to %Lu.%03Lu GB (0x%016Lx), socket interleave %d, memory interleave %d, TGT: %d, %d, %d, %d, reg=0x%08x\n",
   VAR_18, VAR_23 / 1000, VAR_23 % 1000,
   ((u64)VAR_23) << 20L,
   (u32)FUNC_13(VAR_20),
   (u32)FUNC_10(VAR_20),
   (u32)FUNC_14(VAR_20),
   (u32)FUNC_15(VAR_20),
   (u32)FUNC_16(VAR_20),
   (u32)FUNC_17(VAR_20),
   VAR_20);
  VAR_22 = VAR_23;
 }




 for (VAR_14 = 0; VAR_14 < VAR_3; VAR_14++) {
  if (!VAR_13->channel[VAR_14].dimms)
   continue;
  for (VAR_15 = 0; VAR_15 < VAR_18; VAR_15++) {
   FUNC_20(VAR_13->pci_tad[VAR_14],
           VAR_10[VAR_15],
           &VAR_20);
   VAR_23 = FUNC_12(VAR_20) >> 20;
   FUNC_18("TAD CH#%d, offset #%d: %Lu.%03Lu GB (0x%016Lx), reg=0x%08x\n",
    VAR_14, VAR_15,
    VAR_23 / 1000, VAR_23 % 1000,
    ((u64)VAR_23) << 20L,
    VAR_20);
  }
 }




 for (VAR_14 = 0; VAR_14 < VAR_3; VAR_14++) {
  if (!VAR_13->channel[VAR_14].dimms)
   continue;
  for (VAR_15 = 0; VAR_15 < VAR_0; VAR_15++) {
   FUNC_20(VAR_13->pci_tad[VAR_14],
           VAR_9[VAR_15],
           &VAR_20);

   if (!FUNC_4(VAR_20))
    continue;

   VAR_23 = FUNC_5(VAR_20) >> 20;
   VAR_24 = 1 << FUNC_8(VAR_20);
   FUNC_18("CH#%d RIR#%d, limit: %Lu.%03Lu GB (0x%016Lx), way: %d, reg=0x%08x\n",
    VAR_14, VAR_15,
    VAR_23 / 1000, VAR_23 % 1000,
    ((u64)VAR_23) << 20L,
    VAR_24,
    VAR_20);

   for (VAR_16 = 0; VAR_16 < VAR_24; VAR_16++) {
    FUNC_20(VAR_13->pci_tad[VAR_14],
            VAR_8[VAR_15][VAR_16],
            &VAR_20);
    VAR_23 = FUNC_6(VAR_20) << 6;

    FUNC_18("CH#%d RIR#%d INTL#%d, offset %Lu.%03Lu GB (0x%016Lx), tgt: %d, reg=0x%08x\n",
     VAR_14, VAR_15, VAR_16,
     VAR_23 / 1000, VAR_23 % 1000,
     ((u64)VAR_23) << 20L,
     (u32)FUNC_7(VAR_20),
     VAR_20);
   }
  }
 }
}
