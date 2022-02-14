
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device_handler {int dummy; } ;
struct scsi_device {int dummy; } ;


 struct scsi_device_handler* FUNC_0 (struct scsi_device*) ;

__attribute__((used)) static struct scsi_device_handler *
FUNC_1(struct scsi_device_handler *VAR_0,
       struct scsi_device *VAR_1)
{
 struct scsi_device_handler *VAR_2;

 VAR_2 = FUNC_0(VAR_1);

 if (VAR_0 && VAR_2 != VAR_0)
  VAR_2 = ((void*)0);

 return VAR_2;
}
