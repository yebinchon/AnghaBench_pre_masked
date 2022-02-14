
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
typedef int u16 ;
struct mem_ctl_info {struct i7300_pvt* pvt_info; } ;
struct i7300_pvt {int tmp_prt_buffer; int pci_dev_16_1_fsb_addr_map; int pci_dev_16_2_fsb_err_regs; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 char* FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (unsigned long) ;
 int VAR_5 ;
 unsigned int FUNC_4 (int ) ;
 unsigned int FUNC_5 (int ) ;
 int VAR_6 ;
 unsigned int FUNC_6 (unsigned long) ;
 int FUNC_7 (unsigned long) ;
 unsigned int FUNC_8 (unsigned long) ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int FUNC_9 (int ) ;
 unsigned int FUNC_10 (int ) ;
 int VAR_9 ;
 unsigned int FUNC_11 (unsigned long) ;
 int FUNC_12 (unsigned long) ;
 unsigned int FUNC_13 (unsigned long) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_14 (struct mem_ctl_info*,unsigned int,unsigned int,int ) ;
 int FUNC_15 (struct mem_ctl_info*,unsigned int,unsigned int,unsigned int,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned long FUNC_16 (unsigned long*,int ) ;
 int FUNC_17 (int ,int ,unsigned long*) ;
 int FUNC_18 (int ,int ,int *) ;
 int FUNC_19 (int ,int ,unsigned long) ;
 int FUNC_20 (int ,int ,char*,unsigned int,unsigned int,...) ;
 scalar_t__ FUNC_21 (unsigned long) ;

__attribute__((used)) static void FUNC_22(struct mem_ctl_info *VAR_14)
{
 struct i7300_pvt *VAR_15;
 u32 VAR_16, VAR_17;
 u16 VAR_18;
 unsigned VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
 u32 VAR_25;

 unsigned long VAR_26;
 const char *VAR_27;
 bool VAR_28;

 VAR_15 = VAR_14->pvt_info;


 FUNC_17(VAR_15->pci_dev_16_1_fsb_addr_map,
         VAR_0, &VAR_17);
 if (FUNC_21(VAR_17 & VAR_1)) {
  VAR_26 = VAR_17 & VAR_1 ;
  VAR_16 = FUNC_16(&VAR_26,
     FUNC_0(VAR_12));
  VAR_27 = FUNC_1(VAR_12, VAR_16);

  VAR_19 = (FUNC_2(VAR_17) == 2) ? 1 : 0;
  FUNC_18(VAR_15->pci_dev_16_1_fsb_addr_map,
         VAR_5, &VAR_18);
  VAR_21 = FUNC_4(VAR_18);
  VAR_22 = FUNC_5(VAR_18);

  FUNC_17(VAR_15->pci_dev_16_1_fsb_addr_map,
    VAR_6, &VAR_17);

  VAR_28 = FUNC_7(VAR_17);
  VAR_23 = FUNC_6(VAR_17);
  VAR_24 = FUNC_8(VAR_17);

  FUNC_20(VAR_15->tmp_prt_buffer, VAR_7,
   "FATAL (Branch=%d DRAM-Bank=%d %s "
   "RAS=%d CAS=%d Err=0x%lx (%s))",
   VAR_19, VAR_21,
   VAR_28 ? "RDWR" : "RD",
   VAR_24, VAR_23,
   VAR_26, VAR_27);


  FUNC_15(VAR_14, VAR_22, VAR_19 << 1,
          (VAR_19 << 1) + 1,
          VAR_15->tmp_prt_buffer);
 }


 FUNC_17(VAR_15->pci_dev_16_1_fsb_addr_map,
         VAR_3, &VAR_17);
 if (FUNC_21(VAR_17 & VAR_4)) {
  VAR_26 = VAR_17 & VAR_4;
  VAR_16 = FUNC_16(&VAR_26,
     FUNC_0(VAR_13));
  VAR_27 = FUNC_1(VAR_13, VAR_16);


  FUNC_19(VAR_15->pci_dev_16_2_fsb_err_regs,
           VAR_2, VAR_17);

  FUNC_17(VAR_15->pci_dev_16_1_fsb_addr_map,
   VAR_10, &VAR_25);

  VAR_19 = (FUNC_2(VAR_17) == 2) ? 1 : 0;
  FUNC_18(VAR_15->pci_dev_16_1_fsb_addr_map,
         VAR_8, &VAR_18);
  VAR_21 = FUNC_9(VAR_18);
  VAR_22 = FUNC_10(VAR_18);

  FUNC_17(VAR_15->pci_dev_16_1_fsb_addr_map,
    VAR_9, &VAR_17);

  VAR_28 = FUNC_12(VAR_17);
  VAR_23 = FUNC_11(VAR_17);
  VAR_24 = FUNC_13(VAR_17);

  FUNC_17(VAR_15->pci_dev_16_1_fsb_addr_map,
         VAR_11, &VAR_17);

  VAR_20 = (VAR_19 << 1);
  if (FUNC_3(VAR_17))
   VAR_20++;


  FUNC_20(VAR_15->tmp_prt_buffer, VAR_7,
   "Corrected error (Branch=%d, Channel %d), "
   " DRAM-Bank=%d %s "
   "RAS=%d CAS=%d, CE Err=0x%lx, Syndrome=0x%08x(%s))",
   VAR_19, VAR_20,
   VAR_21,
   VAR_28 ? "RDWR" : "RD",
   VAR_24, VAR_23,
   VAR_26, VAR_25, VAR_27);







  FUNC_14(VAR_14, VAR_22, VAR_20,
          VAR_15->tmp_prt_buffer);
 }
 return;
}
