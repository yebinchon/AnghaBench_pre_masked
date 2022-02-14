
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct scsi_lun {int dummy; } ;
struct Scsi_Host {int host_no; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int,int ,struct scsi_lun*,void*) ;

int FUNC_2(struct Scsi_Host *VAR_0, u64 VAR_1,
         int VAR_2, u64 VAR_3, struct scsi_lun *VAR_4,
         void *VAR_5)
{
 int VAR_6;


 VAR_6 = FUNC_1(VAR_0->host_no, VAR_1,
         VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_6 < 0)
  FUNC_0("The task management request lost!\n");
 return VAR_6;
}
