
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u16 ;
struct LD_LOAD_BALANCE_INFO {int * scsi_pending_cmds; int * raid1DevHandle; } ;
struct IO_REQUEST_INFO {int numBlocks; int ldStartBlock; int devHandle; } ;


 int FUNC_0 (int *) ;
 size_t FUNC_1 (struct LD_LOAD_BALANCE_INFO*,size_t,int ,int ) ;

u16 FUNC_2(struct LD_LOAD_BALANCE_INFO *VAR_0,
      struct IO_REQUEST_INFO *VAR_1)
{
 u8 VAR_2, VAR_3;
 u16 VAR_4;

 VAR_3 = VAR_0->raid1DevHandle[0] == VAR_1->devHandle ? 0 : 1;


 VAR_2 = FUNC_1(VAR_0, VAR_3, VAR_1->ldStartBlock,
        VAR_1->numBlocks);
 VAR_4 = VAR_0->raid1DevHandle[VAR_2];
 FUNC_0(&VAR_0->scsi_pending_cmds[VAR_2]);

 return VAR_4;
}
