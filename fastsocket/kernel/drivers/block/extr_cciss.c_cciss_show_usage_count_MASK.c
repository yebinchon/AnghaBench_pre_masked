
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
struct TYPE_5__ {int usage_count; TYPE_1__ dev; } ;
typedef TYPE_2__ drive_info_struct ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 TYPE_2__* FUNC_3 (struct device*) ;
 struct ctlr_info* FUNC_4 (int ) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
          struct device_attribute *VAR_2, char *VAR_3)
{
 drive_info_struct *VAR_4 = FUNC_3(VAR_1);
 struct ctlr_info *VAR_5 = FUNC_4(VAR_4->dev.parent);
 unsigned long VAR_6;
 int VAR_7;

 FUNC_1(&VAR_5->lock, VAR_6);
 if (VAR_5->busy_configuring) {
  FUNC_2(&VAR_5->lock, VAR_6);
  return -VAR_0;
 }
 VAR_7 = VAR_4->usage_count;
 FUNC_2(&VAR_5->lock, VAR_6);
 return FUNC_0(VAR_3, 20, "%d\n", VAR_7);
}
