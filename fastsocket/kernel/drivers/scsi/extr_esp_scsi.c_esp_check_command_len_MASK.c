
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int cmd_len; } ;
struct esp {int flags; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct esp *VAR_1, struct scsi_cmnd *VAR_2)
{
 if (VAR_2->cmd_len == 6 ||
     VAR_2->cmd_len == 10 ||
     VAR_2->cmd_len == 12) {
  VAR_1->flags &= ~VAR_0;
 } else {
  VAR_1->flags |= VAR_0;
 }
}
