
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device_handler {int dummy; } ;
struct scsi_device {int dummy; } ;
struct notifier_block {int dummy; } ;
struct device {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct device*,int *) ;
 struct scsi_device_handler* FUNC_1 (int *,struct scsi_device*) ;
 int FUNC_2 (struct device*,int *) ;
 int FUNC_3 (struct scsi_device*,struct scsi_device_handler*) ;
 int FUNC_4 (struct scsi_device*,int *) ;
 int VAR_2 ;
 int FUNC_5 (struct device*) ;
 struct scsi_device* FUNC_6 (struct device*) ;

__attribute__((used)) static int FUNC_7(struct notifier_block *VAR_3,
       unsigned long VAR_4, void *VAR_5)
{
 struct device *VAR_6 = VAR_5;
 struct scsi_device *VAR_7;
 int VAR_8 = 0;
 struct scsi_device_handler *VAR_9 = ((void*)0);

 if (!FUNC_5(VAR_6))
  return 0;

 VAR_7 = FUNC_6(VAR_6);

 if (VAR_4 == VAR_0) {
  VAR_8 = FUNC_0(VAR_6, &VAR_2);

  VAR_9 = FUNC_1(((void*)0), VAR_7);
  if (VAR_9)
   VAR_8 = FUNC_3(VAR_7, VAR_9);
 } else if (VAR_4 == VAR_1) {
  FUNC_2(VAR_6, &VAR_2);
  FUNC_4(VAR_7, ((void*)0));
 }
 return VAR_8;
}
