
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ub_scsi_cmd {int dummy; } ;
struct ub_lun {int* cmda; struct ub_scsi_cmd* cmdv; } ;



__attribute__((used)) static struct ub_scsi_cmd *FUNC_0(struct ub_lun *VAR_0)
{
 struct ub_scsi_cmd *VAR_1;

 if (VAR_0->cmda[0])
  return ((void*)0);
 VAR_1 = &VAR_0->cmdv[0];
 VAR_0->cmda[0] = 1;
 return VAR_1;
}
