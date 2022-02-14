
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int device; } ;
struct fc_rport {scalar_t__ port_state; } ;
typedef enum blk_eh_timer_return { ____Placeholder_blk_eh_timer_return } blk_eh_timer_return ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 struct fc_rport* FUNC_1 (int ) ;

__attribute__((used)) static enum blk_eh_timer_return
FUNC_2(struct scsi_cmnd *VAR_3)
{
 struct fc_rport *VAR_4 = FUNC_1(FUNC_0(VAR_3->device));

 if (VAR_4->port_state == VAR_2)
  return VAR_1;

 return VAR_0;
}
