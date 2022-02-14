
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int dummy; } ;
typedef enum blk_eh_timer_return { ____Placeholder_blk_eh_timer_return } blk_eh_timer_return ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct scsi_cmnd*,char*,struct scsi_cmnd*) ;

enum blk_eh_timer_return FUNC_1(struct scsi_cmnd *VAR_2)
{
 FUNC_0(VAR_1, VAR_2, "command %p timed out\n", VAR_2);

 return VAR_0;
}
