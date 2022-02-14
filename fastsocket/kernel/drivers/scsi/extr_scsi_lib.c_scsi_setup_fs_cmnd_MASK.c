
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_device {TYPE_2__* scsi_dh_data; } ;
struct scsi_cmnd {int cmnd; } ;
struct request {int nr_phys_segments; } ;
struct TYPE_4__ {TYPE_1__* scsi_dh; } ;
struct TYPE_3__ {int (* prep_fn ) (struct scsi_device*,struct request*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ) ;
 struct scsi_cmnd* FUNC_2 (struct scsi_device*,struct request*) ;
 int FUNC_3 (struct scsi_cmnd*,int ) ;
 int FUNC_4 (struct scsi_device*,struct request*) ;
 int FUNC_5 (struct scsi_device*,struct request*) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(struct scsi_device *VAR_4, struct request *VAR_5)
{
 struct scsi_cmnd *VAR_6;
 int VAR_7 = FUNC_4(VAR_4, VAR_5);

 if (VAR_7 != VAR_1)
  return VAR_7;

 if (FUNC_6(VAR_4->scsi_dh_data && VAR_4->scsi_dh_data->scsi_dh
    && VAR_4->scsi_dh_data->scsi_dh->prep_fn)) {
  VAR_7 = VAR_4->scsi_dh_data->scsi_dh->prep_fn(VAR_4, VAR_5);
  if (VAR_7 != VAR_1)
   return VAR_7;
 }




 FUNC_0(!VAR_5->nr_phys_segments);

 VAR_6 = FUNC_2(VAR_4, VAR_5);
 if (FUNC_6(!VAR_6))
  return VAR_0;

 FUNC_1(VAR_6->cmnd, 0, VAR_2);
 return FUNC_3(VAR_6, VAR_3);
}
