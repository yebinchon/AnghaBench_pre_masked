
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct LD_LOAD_BALANCE_INFO {scalar_t__* last_accessed_block; int * scsi_pending_cmds; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;

u8 FUNC_2(struct LD_LOAD_BALANCE_INFO *VAR_0, u8 VAR_1, u64 VAR_2,
   u32 VAR_3)
{
 u16 VAR_4, VAR_5;
 u64 VAR_6, VAR_7;
 u8 VAR_8;


 VAR_4 = FUNC_1(&VAR_0->scsi_pending_cmds[0]);
 VAR_5 = FUNC_1(&VAR_0->scsi_pending_cmds[1]);


 VAR_6 = FUNC_0(VAR_2, VAR_0->last_accessed_block[0]);
 VAR_7 = FUNC_0(VAR_2, VAR_0->last_accessed_block[1]);
 VAR_8 = (VAR_6 <= VAR_7 ? 0 : 1);


 if ((VAR_8 == VAR_1 && VAR_4 > VAR_5 + 4) ||
     (VAR_8 != VAR_1 && VAR_5 > VAR_4 + 4))
  VAR_8 ^= 1;


 VAR_0->last_accessed_block[VAR_8] = VAR_2 + VAR_3 - 1;

 return VAR_8;
}
