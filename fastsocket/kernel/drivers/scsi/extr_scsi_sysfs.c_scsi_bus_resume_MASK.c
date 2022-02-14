
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int dummy; } ;
struct device_driver {int (* resume ) (struct device*) ;} ;
struct device {struct device_driver* driver; int * type; } ;


 int VAR_0 ;
 int FUNC_0 (struct scsi_device*) ;
 int FUNC_1 (struct device*) ;
 struct scsi_device* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device * VAR_1)
{
 struct device_driver *VAR_2;
 struct scsi_device *VAR_3;
 int VAR_4 = 0;

 if (VAR_1->type != &VAR_0)
  return 0;

 VAR_2 = VAR_1->driver;
 VAR_3 = FUNC_2(VAR_1);

 if (VAR_2 && VAR_2->resume)
  VAR_4 = VAR_2->resume(VAR_1);

 FUNC_0(VAR_3);

 return VAR_4;
}
