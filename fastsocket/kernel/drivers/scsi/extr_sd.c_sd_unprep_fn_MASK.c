
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {scalar_t__ cmd_len; int * cmnd; } ;
struct request_queue {int dummy; } ;
struct request {int cmd_flags; int * cmd; int * buffer; struct scsi_cmnd* special; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct request_queue *VAR_2, struct request *VAR_3)
{
 struct scsi_cmnd *VAR_4 = VAR_3->special;

 if (VAR_3->cmd_flags & VAR_0) {
  FUNC_0((unsigned long)VAR_3->buffer);
  VAR_3->buffer = ((void*)0);
 }
 if (VAR_4->cmnd != VAR_3->cmd) {
  FUNC_1(VAR_4->cmnd, VAR_1);
  VAR_4->cmnd = ((void*)0);
  VAR_4->cmd_len = 0;
 }
}
