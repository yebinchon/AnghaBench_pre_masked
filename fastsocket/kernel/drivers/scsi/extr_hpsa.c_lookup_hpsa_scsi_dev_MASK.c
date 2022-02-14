
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpsa_scsi_dev_t {int bus; int target; int lun; } ;
struct ctlr_info {int ndevices; struct hpsa_scsi_dev_t** dev; } ;



__attribute__((used)) static struct hpsa_scsi_dev_t *FUNC_0(struct ctlr_info *VAR_0,
 int VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4;
 struct hpsa_scsi_dev_t *VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_0->ndevices; VAR_4++) {
  VAR_5 = VAR_0->dev[VAR_4];
  if (VAR_5->bus == VAR_1 && VAR_5->target == VAR_2 && VAR_5->lun == VAR_3)
   return VAR_5;
 }
 return ((void*)0);
}
