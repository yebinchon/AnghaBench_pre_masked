
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct mem_ctl_info {int ctl_name; struct cpc925_mc_pdata* pvt_info; } ;
struct cpc925_mc_pdata {scalar_t__ vbase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct mem_ctl_info*,int) ;
 int FUNC_2 (struct mem_ctl_info*,int,unsigned long*,unsigned long*,int*) ;
 int FUNC_3 (struct mem_ctl_info*,int ,char*,...) ;
 int FUNC_4 (struct mem_ctl_info*,unsigned long,unsigned long,int,int,int,int ) ;
 int FUNC_5 (struct mem_ctl_info*,unsigned long,unsigned long,int,int ) ;

__attribute__((used)) static void FUNC_6(struct mem_ctl_info *VAR_16)
{
 struct cpc925_mc_pdata *VAR_17 = VAR_16->pvt_info;
 u32 VAR_18;
 u32 VAR_19;
 u32 VAR_20;
 u16 VAR_21;
 unsigned long VAR_22 = 0, VAR_23 = 0;
 int VAR_24 = 0, VAR_25 = 0;


 VAR_18 = FUNC_0(VAR_17->vbase + VAR_5);
 if ((VAR_18 & VAR_1) == 0)
  return;

 VAR_20 = FUNC_0(VAR_17->vbase + VAR_10);
 VAR_21 = VAR_20 | (VAR_3 | VAR_4);

 VAR_19 = FUNC_0(VAR_17->vbase + VAR_9);


 FUNC_2(VAR_16, VAR_19, &VAR_22, &VAR_23, &VAR_24);

 if (VAR_18 & VAR_0) {
  FUNC_3(VAR_16, VAR_2, "DRAM CECC Fault\n");
  VAR_25 = FUNC_1(VAR_16, VAR_21);
  FUNC_4(VAR_16, VAR_22, VAR_23, VAR_21,
      VAR_24, VAR_25, VAR_16->ctl_name);
 }

 if (VAR_18 & VAR_15) {
  FUNC_3(VAR_16, VAR_2, "DRAM UECC Fault\n");
  FUNC_5(VAR_16, VAR_22, VAR_23, VAR_24, VAR_16->ctl_name);
 }

 FUNC_3(VAR_16, VAR_2, "Dump registers:\n");
 FUNC_3(VAR_16, VAR_2, "APIMASK		0x%08x\n",
  FUNC_0(VAR_17->vbase + VAR_6));
 FUNC_3(VAR_16, VAR_2, "APIEXCP		0x%08x\n",
  VAR_18);
 FUNC_3(VAR_16, VAR_2, "Mem Scrub Ctrl	0x%08x\n",
  FUNC_0(VAR_17->vbase + VAR_11));
 FUNC_3(VAR_16, VAR_2, "Mem Scrub Rge Start	0x%08x\n",
  FUNC_0(VAR_17->vbase + VAR_14));
 FUNC_3(VAR_16, VAR_2, "Mem Scrub Rge End	0x%08x\n",
  FUNC_0(VAR_17->vbase + VAR_13));
 FUNC_3(VAR_16, VAR_2, "Mem Scrub Pattern	0x%08x\n",
  FUNC_0(VAR_17->vbase + VAR_12));
 FUNC_3(VAR_16, VAR_2, "Mem Chk Ctrl		0x%08x\n",
  FUNC_0(VAR_17->vbase + VAR_7));
 FUNC_3(VAR_16, VAR_2, "Mem Chk Rge End	0x%08x\n",
  FUNC_0(VAR_17->vbase + VAR_8));
 FUNC_3(VAR_16, VAR_2, "Mem Err Address	0x%08x\n",
  VAR_20);
 FUNC_3(VAR_16, VAR_2, "Mem Err Syndrome	0x%08x\n",
  VAR_21);
}
