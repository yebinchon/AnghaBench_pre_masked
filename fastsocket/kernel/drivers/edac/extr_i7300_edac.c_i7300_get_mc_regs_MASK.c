
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mem_ctl_info {struct i7300_pvt* pvt_info; } ;
struct i7300_pvt {int tolm; int mc_settings; int mc_settings_a; int* mir; int pci_dev_16_1_fsb_addr_map; scalar_t__ ambase; int pci_dev_16_0_fsb_ctlr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,int,...) ;
 int FUNC_6 (int,int*) ;
 int FUNC_7 (struct mem_ctl_info*) ;
 int FUNC_8 (int ,int ,int*) ;
 int FUNC_9 (int ,int ,int*) ;
 int FUNC_10 (struct i7300_pvt*) ;

__attribute__((used)) static int FUNC_11(struct mem_ctl_info *VAR_8)
{
 struct i7300_pvt *VAR_9;
 u32 VAR_10;
 int VAR_11, VAR_12;

 VAR_9 = VAR_8->pvt_info;

 FUNC_8(VAR_9->pci_dev_16_0_fsb_ctlr, VAR_0,
   (u32 *) &VAR_9->ambase);

 FUNC_5("AMBASE= 0x%lx\n", (long unsigned int)VAR_9->ambase);


 FUNC_9(VAR_9->pci_dev_16_1_fsb_addr_map, VAR_7, &VAR_9->tolm);
 VAR_9->tolm >>= 12;
 FUNC_5("TOLM (number of 256M regions) =%u (0x%x)\n", VAR_9->tolm,
  VAR_9->tolm);

 VAR_10 = (u32) ((1000l * VAR_9->tolm) >> (30 - 28));
 FUNC_5("Actual TOLM byte addr=%u.%03u GB (0x%x)\n",
  VAR_10/1000, VAR_10 % 1000, VAR_9->tolm << 28);


 FUNC_8(VAR_9->pci_dev_16_1_fsb_addr_map, VAR_2,
        &VAR_9->mc_settings);
 FUNC_8(VAR_9->pci_dev_16_1_fsb_addr_map, VAR_3,
        &VAR_9->mc_settings_a);

 if (FUNC_3(VAR_9->mc_settings_a))
  FUNC_4("Memory controller operating on single mode\n");
 else
  FUNC_4("Memory controller operating on %s mode\n",
  FUNC_1(VAR_9->mc_settings) ? "mirrored" : "non-mirrored");

 FUNC_4("Error detection is %s\n",
  FUNC_0(VAR_9->mc_settings) ? "enabled" : "disabled");
 FUNC_4("Retry is %s\n",
  FUNC_2(VAR_9->mc_settings) ? "enabled" : "disabled");


 FUNC_9(VAR_9->pci_dev_16_1_fsb_addr_map, VAR_4,
        &VAR_9->mir[0]);
 FUNC_9(VAR_9->pci_dev_16_1_fsb_addr_map, VAR_5,
        &VAR_9->mir[1]);
 FUNC_9(VAR_9->pci_dev_16_1_fsb_addr_map, VAR_6,
        &VAR_9->mir[2]);


 for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++)
  FUNC_6(VAR_11, VAR_9->mir);

 VAR_12 = FUNC_7(VAR_8);
 if (VAR_12 < 0)
  return VAR_12;



 FUNC_10(VAR_9);

 return 0;
}
