
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {struct hpsa_scsi_dev_t* hostdata; int lun; } ;
struct hpsa_scsi_dev_t {int dummy; } ;
struct ctlr_info {int devlock; } ;


 struct hpsa_scsi_dev_t* FUNC_0 (struct ctlr_info*,int ,int ,int ) ;
 int FUNC_1 (struct scsi_device*) ;
 int FUNC_2 (struct scsi_device*) ;
 struct ctlr_info* FUNC_3 (struct scsi_device*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct scsi_device *VAR_0)
{
 struct hpsa_scsi_dev_t *VAR_1;
 unsigned long VAR_2;
 struct ctlr_info *VAR_3;

 VAR_3 = FUNC_3(VAR_0);
 FUNC_4(&VAR_3->devlock, VAR_2);
 VAR_1 = FUNC_0(VAR_3, FUNC_1(VAR_0),
  FUNC_2(VAR_0), VAR_0->lun);
 if (VAR_1 != ((void*)0))
  VAR_0->hostdata = VAR_1;
 FUNC_5(&VAR_3->devlock, VAR_2);
 return 0;
}
