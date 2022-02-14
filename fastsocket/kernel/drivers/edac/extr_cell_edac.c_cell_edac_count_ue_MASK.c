
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mem_ctl_info {int dev; struct csrow_info* csrows; struct cell_edac_priv* pvt_info; } ;
struct csrow_info {scalar_t__ first_page; } ;
struct cell_edac_priv {int chanmask; int node; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int ,char*,int ,int,int) ;
 int FUNC_1 (struct mem_ctl_info*,scalar_t__,unsigned long,int ,char*) ;

__attribute__((used)) static void FUNC_2(struct mem_ctl_info *VAR_2, int VAR_3, u64 VAR_4)
{
 struct cell_edac_priv *VAR_5 = VAR_2->pvt_info;
 struct csrow_info *VAR_6 = &VAR_2->csrows[0];
 unsigned long VAR_7, VAR_8, VAR_9;

 FUNC_0(VAR_2->dev, "ECC UE err on node %d, channel %d, ar = 0x%016llx\n",
  VAR_5->node, VAR_3, VAR_4);


 VAR_7 = (VAR_4 & 0xffffffffe0000000ul) >> 29;
 if (VAR_5->chanmask == 0x3)
  VAR_7 = (VAR_7 << 1) | VAR_3;
 VAR_8 = VAR_7 >> VAR_1;
 VAR_9 = VAR_7 & ~VAR_0;


 FUNC_1(VAR_2, VAR_6->first_page + VAR_8, VAR_9, 0, "");
}
