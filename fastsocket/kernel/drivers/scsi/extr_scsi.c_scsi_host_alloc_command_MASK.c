
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int prot_sdb; } ;
struct Scsi_Host {int cmd_pool; } ;
typedef int gfp_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct Scsi_Host*) ;
 struct scsi_cmnd* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,struct scsi_cmnd*) ;
 int VAR_1 ;

__attribute__((used)) static struct scsi_cmnd *
FUNC_4(struct Scsi_Host *VAR_2, gfp_t VAR_3)
{
 struct scsi_cmnd *VAR_4;

 VAR_4 = FUNC_2(VAR_2->cmd_pool, VAR_3);
 if (!VAR_4)
  return ((void*)0);

 if (FUNC_1(VAR_2) >= VAR_0) {
  VAR_4->prot_sdb = FUNC_0(VAR_1, VAR_3);

  if (!VAR_4->prot_sdb) {
   FUNC_3(VAR_2->cmd_pool, VAR_4);
   return ((void*)0);
  }
 }

 return VAR_4;
}
