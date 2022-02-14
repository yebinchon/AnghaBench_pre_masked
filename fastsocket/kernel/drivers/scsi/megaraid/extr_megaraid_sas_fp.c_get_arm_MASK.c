
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u8 ;
typedef int u64 ;
typedef unsigned long u32 ;
struct megasas_instance {int dummy; } ;
struct MR_LD_RAID {int level; } ;
struct MR_FW_RAID_MAP_ALL {int dummy; } ;


 struct MR_LD_RAID* FUNC_0 (unsigned long,struct MR_FW_RAID_MAP_ALL*) ;
 int FUNC_1 (struct MR_FW_RAID_MAP_ALL*,unsigned long,unsigned long) ;
 unsigned long FUNC_2 (struct megasas_instance*,unsigned long,int ,struct MR_FW_RAID_MAP_ALL*) ;
 unsigned long FUNC_3 (int ,int ) ;

u8 FUNC_4(struct megasas_instance *VAR_0, u32 VAR_1, u8 VAR_2, u64 VAR_3,
  struct MR_FW_RAID_MAP_ALL *VAR_4)
{
 struct MR_LD_RAID *VAR_5 = FUNC_0(VAR_1, VAR_4);

 u32 VAR_6 = 0;

 switch (VAR_5->level) {
 case 0:
 case 5:
 case 6:
  VAR_6 = FUNC_3(VAR_3, FUNC_1(VAR_4, VAR_1, VAR_2));
  break;
 case 1:

  VAR_6 = FUNC_2(VAR_0, VAR_1, VAR_3, VAR_4);
  if (VAR_6 != -1UL)
   VAR_6 *= 2;
  break;
 }

 return VAR_6;
}
