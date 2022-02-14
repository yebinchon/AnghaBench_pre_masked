
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int dummy; } ;
struct osd_dev {int version; int def_timeout; struct scsi_device* scsi_device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct osd_dev*,int ,int) ;

void FUNC_1(struct osd_dev *VAR_2, struct scsi_device *VAR_3)
{
 FUNC_0(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->scsi_device = VAR_3;
 VAR_2->def_timeout = VAR_0;




}
