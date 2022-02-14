
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device_handler {scalar_t__ detach; } ;
struct scsi_device {TYPE_1__* scsi_dh_data; } ;
struct TYPE_2__ {int kref; struct scsi_device_handler* scsi_dh; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(struct scsi_device *VAR_1,
       struct scsi_device_handler *VAR_2)
{
 if (!VAR_1->scsi_dh_data)
  return;

 if (VAR_2 && VAR_2 != VAR_1->scsi_dh_data->scsi_dh)
  return;

 if (!VAR_2)
  VAR_2 = VAR_1->scsi_dh_data->scsi_dh;

 if (VAR_2 && VAR_2->detach)
  FUNC_0(&VAR_1->scsi_dh_data->kref, VAR_0);
}
