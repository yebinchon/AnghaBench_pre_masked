
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_driver {int owner; int (* rescan ) (struct device*) ;} ;
struct device {int driver; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*) ;
 struct scsi_driver* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

void FUNC_4(struct device *VAR_0)
{
 struct scsi_driver *VAR_1;

 if (!VAR_0->driver)
  return;

 VAR_1 = FUNC_2(VAR_0->driver);
 if (FUNC_3(VAR_1->owner)) {
  if (VAR_1->rescan)
   VAR_1->rescan(VAR_0);
  FUNC_0(VAR_1->owner);
 }
}
