
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device_handler {int dummy; } ;
struct scsi_device {int dummy; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct scsi_device_handler*,struct scsi_device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct scsi_device*,struct scsi_device_handler*) ;
 int FUNC_4 (struct device*) ;
 struct scsi_device* FUNC_5 (struct device*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_0, void *VAR_1)
{
 struct scsi_device_handler *VAR_2 = VAR_1;
 struct scsi_device *VAR_3;

 if (!FUNC_4(VAR_0))
  return 0;

 if (!FUNC_1(VAR_0))
  return 0;

 VAR_3 = FUNC_5(VAR_0);

 if (FUNC_0(VAR_2, VAR_3))
  FUNC_3(VAR_3, VAR_2);

 FUNC_2(VAR_0);

 return 0;
}
