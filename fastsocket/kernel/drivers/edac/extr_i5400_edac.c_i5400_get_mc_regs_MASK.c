
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct mem_ctl_info {struct i5400_pvt* pvt_info; } ;
struct i5400_pvt {int maxdimmperch; int maxch; int tolm; int mir0; int mir1; int* b0_mtr; int* b1_mtr; int b0_ambpresent0; int b0_ambpresent1; int b1_ambpresent0; int b1_ambpresent1; int branch_1; int branch_0; int branchmap_werrors; scalar_t__ ambase; int system_address; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct i5400_pvt*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ,scalar_t__,int*) ;
 int FUNC_4 (int ,int,int*) ;

__attribute__((used)) static void FUNC_5(struct mem_ctl_info *VAR_9)
{
 struct i5400_pvt *VAR_10;
 u32 VAR_11;
 u16 VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16, VAR_17;

 VAR_10 = VAR_9->pvt_info;

 FUNC_3(VAR_10->system_address, VAR_0,
   (u32 *) &VAR_10->ambase);
 FUNC_3(VAR_10->system_address, VAR_0 + sizeof(u32),
   ((u32 *) &VAR_10->ambase) + sizeof(u32));

 VAR_15 = VAR_10->maxdimmperch;
 VAR_14 = VAR_10->maxch;

 FUNC_1("AMBASE= 0x%lx  MAXCH= %d  MAX-DIMM-Per-CH= %d\n",
  (long unsigned int)VAR_10->ambase, VAR_10->maxch, VAR_10->maxdimmperch);


 FUNC_4(VAR_10->branchmap_werrors, VAR_8, &VAR_10->tolm);
 VAR_10->tolm >>= 12;
 FUNC_1("\nTOLM (number of 256M regions) =%u (0x%x)\n", VAR_10->tolm,
  VAR_10->tolm);

 VAR_11 = (u32) ((1000l * VAR_10->tolm) >> (30 - 28));
 FUNC_1("Actual TOLM byte addr=%u.%03u GB (0x%x)\n",
  VAR_11/1000, VAR_11 % 1000, VAR_10->tolm << 28);

 FUNC_4(VAR_10->branchmap_werrors, VAR_4, &VAR_10->mir0);
 FUNC_4(VAR_10->branchmap_werrors, VAR_5, &VAR_10->mir1);


 VAR_12 = (VAR_10->mir0 >> 4) & 0x0fff;
 VAR_16 = VAR_10->mir0 & 0x1;
 VAR_17 = VAR_10->mir0 & 0x2;
 FUNC_1("MIR0: limit= 0x%x  WAY1= %u  WAY0= %x\n", VAR_12, VAR_17, VAR_16);
 VAR_12 = (VAR_10->mir1 >> 4) & 0xfff;
 VAR_16 = VAR_10->mir1 & 0x1;
 VAR_17 = VAR_10->mir1 & 0x2;
 FUNC_1("MIR1: limit= 0x%x  WAY1= %u  WAY0= %x\n", VAR_12, VAR_17, VAR_16);


 for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++) {
  int VAR_18 = VAR_6 + (VAR_13 * sizeof(u16));


  FUNC_4(VAR_10->branch_0, VAR_18,
    &VAR_10->b0_mtr[VAR_13]);

  FUNC_1("MTR%d where=0x%x B0 value=0x%x\n", VAR_13, VAR_18,
   VAR_10->b0_mtr[VAR_13]);

  if (VAR_10->maxch < VAR_3) {
   VAR_10->b1_mtr[VAR_13] = 0;
   continue;
  }


  FUNC_4(VAR_10->branch_1, VAR_18,
    &VAR_10->b1_mtr[VAR_13]);
  FUNC_1("MTR%d where=0x%x B1 value=0x%x\n", VAR_13, VAR_18,
   VAR_10->b1_mtr[VAR_13]);
 }


 FUNC_1("\nMemory Technology Registers:\n");
 FUNC_1("   Branch 0:\n");
 for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++)
  FUNC_2(VAR_13, VAR_10->b0_mtr[VAR_13]);

 FUNC_4(VAR_10->branch_0, VAR_1,
   &VAR_10->b0_ambpresent0);
 FUNC_1("\t\tAMB-Branch 0-present0 0x%x:\n", VAR_10->b0_ambpresent0);
 FUNC_4(VAR_10->branch_0, VAR_2,
   &VAR_10->b0_ambpresent1);
 FUNC_1("\t\tAMB-Branch 0-present1 0x%x:\n", VAR_10->b0_ambpresent1);


 if (VAR_10->maxch < VAR_3) {
  VAR_10->b1_ambpresent0 = 0;
  VAR_10->b1_ambpresent1 = 0;
 } else {

  FUNC_1("   Branch 1:\n");
  for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++)
   FUNC_2(VAR_13, VAR_10->b1_mtr[VAR_13]);

  FUNC_4(VAR_10->branch_1, VAR_1,
    &VAR_10->b1_ambpresent0);
  FUNC_1("\t\tAMB-Branch 1-present0 0x%x:\n",
   VAR_10->b1_ambpresent0);
  FUNC_4(VAR_10->branch_1, VAR_2,
    &VAR_10->b1_ambpresent1);
  FUNC_1("\t\tAMB-Branch 1-present1 0x%x:\n",
   VAR_10->b1_ambpresent1);
 }



 FUNC_0(VAR_10);
}
