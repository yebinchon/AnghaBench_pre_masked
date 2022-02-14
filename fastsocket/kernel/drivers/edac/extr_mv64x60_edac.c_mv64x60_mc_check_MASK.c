
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mv64x60_mc_pdata {scalar_t__ mc_vbase; } ;
struct mem_ctl_info {int ctl_name; struct mv64x60_mc_pdata* pvt_info; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mem_ctl_info*,int,int,int,int ,int ,int ) ;
 int FUNC_1 (struct mem_ctl_info*,int,int,int ,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_4(struct mem_ctl_info *VAR_5)
{
 struct mv64x60_mc_pdata *VAR_6 = VAR_5->pvt_info;
 u32 VAR_7;
 u32 VAR_8;
 u32 VAR_9;
 u32 VAR_10;
 u32 VAR_11;

 VAR_7 = FUNC_2(VAR_6->mc_vbase + VAR_0);
 if (!VAR_7)
  return;

 VAR_8 = VAR_7 & ~0x3;
 VAR_9 = FUNC_2(VAR_6->mc_vbase + VAR_2);
 VAR_10 = FUNC_2(VAR_6->mc_vbase + VAR_1);
 VAR_11 = VAR_9 ^ VAR_10;


 if (!(VAR_7 & 0x1))
  FUNC_0(VAR_5, VAR_8 >> VAR_4,
      VAR_8 & VAR_3, VAR_11, 0, 0,
      VAR_5->ctl_name);
 else
  FUNC_1(VAR_5, VAR_8 >> VAR_4,
      VAR_8 & VAR_3, 0, VAR_5->ctl_name);


 FUNC_3(VAR_6->mc_vbase + VAR_0, 0);
}
