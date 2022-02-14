
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int dummy; } ;
struct scsi_cmnd {int prot_op; int cmnd; struct request* request; int tag; } ;
struct request {int cmd; int tag; struct scsi_cmnd* special; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct scsi_cmnd* FUNC_0 (struct scsi_device*,int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static struct scsi_cmnd *FUNC_2(struct scsi_device *VAR_2,
  struct request *VAR_3)
{
 struct scsi_cmnd *VAR_4;

 if (!VAR_3->special) {
  VAR_4 = FUNC_0(VAR_2, VAR_0);
  if (FUNC_1(!VAR_4))
   return ((void*)0);
  VAR_3->special = VAR_4;
 } else {
  VAR_4 = VAR_3->special;
 }


 VAR_4->tag = VAR_3->tag;
 VAR_4->request = VAR_3;

 VAR_4->cmnd = VAR_3->cmd;
 VAR_4->prot_op = VAR_1;

 return VAR_4;
}
