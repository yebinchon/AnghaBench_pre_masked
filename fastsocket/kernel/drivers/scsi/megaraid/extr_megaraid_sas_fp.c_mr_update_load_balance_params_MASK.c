
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct MR_LD_RAID {int level; int rowSize; int spanDepth; scalar_t__ ldState; } ;
struct MR_FW_RAID_MAP_ALL {int dummy; } ;
struct LD_LOAD_BALANCE_INFO {int loadBalanceFlag; void** raid1DevHandle; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,struct MR_FW_RAID_MAP_ALL*) ;
 scalar_t__ VAR_1 ;
 struct MR_LD_RAID* FUNC_1 (int,struct MR_FW_RAID_MAP_ALL*) ;
 int FUNC_2 (int,int ,struct MR_FW_RAID_MAP_ALL*) ;
 void* FUNC_3 (int ,struct MR_FW_RAID_MAP_ALL*) ;
 int FUNC_4 (int,struct MR_FW_RAID_MAP_ALL*) ;

void
FUNC_5(struct MR_FW_RAID_MAP_ALL *VAR_2,
         struct LD_LOAD_BALANCE_INFO *VAR_3)
{
 int VAR_4;
 u16 VAR_5;
 struct MR_LD_RAID *VAR_6;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_5 = FUNC_4(VAR_4, VAR_2);
  if (VAR_5 >= VAR_0) {
   VAR_3[VAR_4].loadBalanceFlag = 0;
   continue;
  }

  VAR_6 = FUNC_1(VAR_5, VAR_2);


  if ((VAR_6->level == 1) && (VAR_6->rowSize == 2) &&
      (VAR_6->spanDepth == 1) && VAR_6->ldState ==
      VAR_1) {
   u32 VAR_7, VAR_8;

   VAR_3[VAR_4].loadBalanceFlag = 1;


   VAR_8 = FUNC_2(VAR_5, 0, VAR_2);


   VAR_7 = FUNC_0(VAR_8, 0, VAR_2);

   VAR_3[VAR_4].raid1DevHandle[0] =
    FUNC_3(VAR_7, VAR_2);

   VAR_7 = FUNC_0(VAR_8, 1, VAR_2);


   VAR_3[VAR_4].raid1DevHandle[1] =
    FUNC_3(VAR_7, VAR_2);
  } else
   VAR_3[VAR_4].loadBalanceFlag = 0;
 }
}
