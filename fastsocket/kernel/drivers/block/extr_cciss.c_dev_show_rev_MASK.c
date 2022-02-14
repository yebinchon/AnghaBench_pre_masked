
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
typedef int rev ;
struct TYPE_4__ {int parent; } ;
struct TYPE_5__ {char* rev; TYPE_1__ dev; } ;
typedef TYPE_2__ drive_info_struct ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,int,char*,char*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 TYPE_2__* FUNC_4 (struct device*) ;
 struct ctlr_info* FUNC_5 (int ) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2,
       struct device_attribute *VAR_3,
       char *VAR_4)
{
 drive_info_struct *VAR_5 = FUNC_4(VAR_2);
 struct ctlr_info *VAR_6 = FUNC_5(VAR_5->dev.parent);
 char VAR_7[VAR_1 + 1];
 unsigned long VAR_8;
 int VAR_9 = 0;

 FUNC_2(&VAR_6->lock, VAR_8);
 if (VAR_6->busy_configuring)
  VAR_9 = -VAR_0;
 else
  FUNC_0(VAR_7, VAR_5->rev, VAR_1 + 1);
 FUNC_3(&VAR_6->lock, VAR_8);

 if (VAR_9)
  return VAR_9;
 else
  return FUNC_1(VAR_4, sizeof(VAR_7) + 1, "%s\n", VAR_5->rev);
}
