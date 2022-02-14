
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device_handler {int dummy; } ;
struct scsi_device {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct scsi_device*,struct scsi_device_handler*) ;
 int FUNC_3 (struct device*) ;
 struct scsi_device* FUNC_4 (struct device*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_0, void *VAR_1)
{
 struct scsi_device_handler *VAR_2 = VAR_1;
 struct scsi_device *VAR_3;

 if (!FUNC_3(VAR_0))
  return 0;

 if (!FUNC_0(VAR_0))
  return 0;

 VAR_3 = FUNC_4(VAR_0);

 FUNC_2(VAR_3, VAR_2);

 FUNC_1(VAR_0);

 return 0;
}
