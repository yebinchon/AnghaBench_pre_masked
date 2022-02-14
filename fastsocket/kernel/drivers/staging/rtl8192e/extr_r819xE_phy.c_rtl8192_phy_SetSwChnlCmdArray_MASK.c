
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_3__ {scalar_t__ msDelay; scalar_t__ Para2; scalar_t__ Para1; int CmdID; } ;
typedef int SwChnlCmdID ;
typedef TYPE_1__ SwChnlCmd ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;

__attribute__((used)) static u8 FUNC_1(
 SwChnlCmd* VAR_1,
 u32 VAR_2,
 u32 VAR_3,
 SwChnlCmdID VAR_4,
 u32 VAR_5,
 u32 VAR_6,
 u32 VAR_7
 )
{
 SwChnlCmd* VAR_8;

 if(VAR_1 == ((void*)0))
 {
  FUNC_0(VAR_0, "phy_SetSwChnlCmdArray(): CmdTable cannot be NULL.\n");
  return 0;
 }
 if(VAR_2 >= VAR_3)
 {
  FUNC_0(VAR_0, "phy_SetSwChnlCmdArray(): Access invalid index, please check size of the table, CmdTableIdx:%d, CmdTableSz:%d\n",
    VAR_2, VAR_3);
  return 0;
 }

 VAR_8 = VAR_1 + VAR_2;
 VAR_8->CmdID = VAR_4;
 VAR_8->Para1 = VAR_5;
 VAR_8->Para2 = VAR_6;
 VAR_8->msDelay = VAR_7;

 return 1;
}
