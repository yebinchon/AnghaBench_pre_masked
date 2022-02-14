
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
typedef int sn ;
struct TYPE_4__ {int parent; } ;
struct TYPE_5__ {int serial_no; TYPE_1__ dev; } ;
typedef TYPE_2__ drive_info_struct ;
typedef int __u8 ;


 int VAR_0 ;
 int FUNC_0 (int*,int ,int) ;
 int FUNC_1 (char*,int,char*,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 TYPE_2__* FUNC_4 (struct device*) ;
 struct ctlr_info* FUNC_5 (int ) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
     struct device_attribute *VAR_2,
     char *VAR_3)
{
 drive_info_struct *VAR_4 = FUNC_4(VAR_1);
 struct ctlr_info *VAR_5 = FUNC_5(VAR_4->dev.parent);
 __u8 VAR_6[16];
 unsigned long VAR_7;
 int VAR_8 = 0;

 FUNC_2(&VAR_5->lock, VAR_7);
 if (VAR_5->busy_configuring)
  VAR_8 = -VAR_0;
 else
  FUNC_0(VAR_6, VAR_4->serial_no, sizeof(VAR_6));
 FUNC_3(&VAR_5->lock, VAR_7);

 if (VAR_8)
  return VAR_8;
 else
  return FUNC_1(VAR_3, 16 * 2 + 2,
    "%02X%02X%02X%02X%02X%02X%02X%02X"
    "%02X%02X%02X%02X%02X%02X%02X%02X\n",
    VAR_6[0], VAR_6[1], VAR_6[2], VAR_6[3],
    VAR_6[4], VAR_6[5], VAR_6[6], VAR_6[7],
    VAR_6[8], VAR_6[9], VAR_6[10], VAR_6[11],
    VAR_6[12], VAR_6[13], VAR_6[14], VAR_6[15]);
}
