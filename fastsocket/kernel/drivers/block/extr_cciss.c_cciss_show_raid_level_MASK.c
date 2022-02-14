
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ctlr_info {int lock; scalar_t__ busy_configuring; } ;
typedef int ssize_t ;
struct TYPE_4__ {int parent; } ;
struct TYPE_5__ {int raid_level; TYPE_1__ dev; } ;
typedef TYPE_2__ drive_info_struct ;


 int VAR_0 ;
 int VAR_1 ;
 char** VAR_2 ;
 int FUNC_0 (char*,scalar_t__,char*,char*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 scalar_t__ FUNC_3 (char*) ;
 TYPE_2__* FUNC_4 (struct device*) ;
 struct ctlr_info* FUNC_5 (int ) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_3,
         struct device_attribute *VAR_4, char *VAR_5)
{
 drive_info_struct *VAR_6 = FUNC_4(VAR_3);
 struct ctlr_info *VAR_7 = FUNC_5(VAR_6->dev.parent);
 int VAR_8;
 unsigned long VAR_9;

 FUNC_1(&VAR_7->lock, VAR_9);
 if (VAR_7->busy_configuring) {
  FUNC_2(&VAR_7->lock, VAR_9);
  return -VAR_0;
 }
 VAR_8 = VAR_6->raid_level;
 FUNC_2(&VAR_7->lock, VAR_9);
 if (VAR_8 < 0 || VAR_8 > VAR_1)
  VAR_8 = VAR_1;

 return FUNC_0(VAR_5, FUNC_3(VAR_2[VAR_8]) + 7, "RAID %s\n",
   VAR_2[VAR_8]);
}
