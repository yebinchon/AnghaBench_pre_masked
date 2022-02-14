
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int dummy; } ;
struct device_driver {int (* suspend ) (struct device*,int ) ;} ;
struct device {struct device_driver* driver; int * type; } ;
typedef int pm_message_t ;


 int VAR_0 ;
 int FUNC_0 (struct scsi_device*) ;
 int FUNC_1 (struct device*,int ) ;
 struct scsi_device* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device * VAR_1, pm_message_t VAR_2)
{
 struct device_driver *VAR_3;
 struct scsi_device *VAR_4;
 int VAR_5;

 if (VAR_1->type != &VAR_0)
  return 0;

 VAR_3 = VAR_1->driver;
 VAR_4 = FUNC_2(VAR_1);

 VAR_5 = FUNC_0(VAR_4);
 if (VAR_5)
  return VAR_5;

 if (VAR_3 && VAR_3->suspend) {
  VAR_5 = VAR_3->suspend(VAR_1, VAR_2);
  if (VAR_5)
   return VAR_5;
 }

 return 0;
}
