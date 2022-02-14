
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mpc85xx_mc_pdata {scalar_t__ mc_vbase; } ;
struct mem_ctl_info {int nr_csrows; int ctl_name; struct csrow_info* csrows; struct mpc85xx_mc_pdata* pvt_info; } ;
struct csrow_info {int first_page; int last_page; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct mem_ctl_info*,int,int,int,int,int ,int ) ;
 int FUNC_1 (struct mem_ctl_info*,int,int,int,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct mem_ctl_info*,int ,char*,...) ;
 int FUNC_4 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_5(struct mem_ctl_info *VAR_10)
{
 struct mpc85xx_mc_pdata *VAR_11 = VAR_10->pvt_info;
 struct csrow_info *VAR_12;
 u32 VAR_13;
 u32 VAR_14;
 u32 VAR_15;
 u32 VAR_16;
 int VAR_17;

 VAR_13 = FUNC_2(VAR_11->mc_vbase + VAR_7);
 if (!VAR_13)
  return;

 FUNC_3(VAR_10, VAR_2, "Err Detect Register: %#8.8x\n",
     VAR_13);


 if (!(VAR_13 & (VAR_1 | VAR_0))) {
  FUNC_4(VAR_11->mc_vbase + VAR_7, VAR_13);
  return;
 }

 VAR_14 = FUNC_2(VAR_11->mc_vbase + VAR_6);
 VAR_15 = FUNC_2(VAR_11->mc_vbase + VAR_3);
 VAR_16 = VAR_15 >> VAR_9;

 for (VAR_17 = 0; VAR_17 < VAR_10->nr_csrows; VAR_17++) {
  VAR_12 = &VAR_10->csrows[VAR_17];
  if ((VAR_16 >= VAR_12->first_page) && (VAR_16 <= VAR_12->last_page))
   break;
 }

 FUNC_3(VAR_10, VAR_2, "Capture Data High: %#8.8x\n",
     FUNC_2(VAR_11->mc_vbase +
      VAR_4));
 FUNC_3(VAR_10, VAR_2, "Capture Data Low: %#8.8x\n",
     FUNC_2(VAR_11->mc_vbase +
      VAR_5));
 FUNC_3(VAR_10, VAR_2, "syndrome: %#8.8x\n", VAR_14);
 FUNC_3(VAR_10, VAR_2, "err addr: %#8.8x\n", VAR_15);
 FUNC_3(VAR_10, VAR_2, "PFN: %#8.8x\n", VAR_16);


 if (VAR_17 == VAR_10->nr_csrows)
  FUNC_3(VAR_10, VAR_2, "PFN out of range!\n");

 if (VAR_13 & VAR_1)
  FUNC_0(VAR_10, VAR_16, VAR_15 & VAR_8,
      VAR_14, VAR_17, 0, VAR_10->ctl_name);

 if (VAR_13 & VAR_0)
  FUNC_1(VAR_10, VAR_16, VAR_15 & VAR_8,
      VAR_17, VAR_10->ctl_name);

 FUNC_4(VAR_11->mc_vbase + VAR_7, VAR_13);
}
