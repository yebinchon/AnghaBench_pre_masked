
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_ctrl_blk {struct scsi_ctrl_blk* next; int status; } ;
struct initio_host {struct scsi_ctrl_blk* last_pending; struct scsi_ctrl_blk* first_pending; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct scsi_ctrl_blk*) ;

__attribute__((used)) static void FUNC_1(struct initio_host * VAR_1, struct scsi_ctrl_blk * VAR_2)
{




 VAR_2->status = VAR_0;
 VAR_2->next = ((void*)0);
 if (VAR_1->last_pending != ((void*)0)) {
  VAR_1->last_pending->next = VAR_2;
  VAR_1->last_pending = VAR_2;
 } else {
  VAR_1->first_pending = VAR_2;
  VAR_1->last_pending = VAR_2;
 }
}
