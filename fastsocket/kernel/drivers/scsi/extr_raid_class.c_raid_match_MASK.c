
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_device {TYPE_1__* host; } ;
struct raid_internal {TYPE_2__* f; } ;
struct device {int dummy; } ;
struct attribute_container {int dummy; } ;
struct TYPE_4__ {scalar_t__ cookie; int (* is_raid ) (struct device*) ;} ;
struct TYPE_3__ {scalar_t__ hostt; } ;


 struct raid_internal* FUNC_0 (struct attribute_container*) ;
 scalar_t__ FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 struct scsi_device* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct attribute_container *VAR_0, struct device *VAR_1)
{


 struct raid_internal *VAR_2 = FUNC_0(VAR_0);

 if (FUNC_1(VAR_1)) {
  struct scsi_device *VAR_3 = FUNC_3(VAR_1);

  if (VAR_2->f->cookie != VAR_3->host->hostt)
   return 0;

  return VAR_2->f->is_raid(VAR_1);
 }

 return 0;
}
