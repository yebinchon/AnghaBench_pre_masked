
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
typedef int lunid ;
struct TYPE_4__ {int parent; } ;
struct TYPE_5__ {int LunID; int heads; TYPE_1__ dev; } ;
typedef TYPE_2__ drive_info_struct ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*,int ,int) ;
 int FUNC_1 (char*,int,char*,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 TYPE_2__* FUNC_4 (struct device*) ;
 struct ctlr_info* FUNC_5 (int ) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2,
    struct device_attribute *VAR_3, char *VAR_4)
{
 drive_info_struct *VAR_5 = FUNC_4(VAR_2);
 struct ctlr_info *VAR_6 = FUNC_5(VAR_5->dev.parent);
 unsigned long VAR_7;
 unsigned char VAR_8[8];

 FUNC_2(&VAR_6->lock, VAR_7);
 if (VAR_6->busy_configuring) {
  FUNC_3(&VAR_6->lock, VAR_7);
  return -VAR_0;
 }
 if (!VAR_5->heads) {
  FUNC_3(&VAR_6->lock, VAR_7);
  return -VAR_1;
 }
 FUNC_0(VAR_8, VAR_5->LunID, sizeof(VAR_8));
 FUNC_3(&VAR_6->lock, VAR_7);
 return FUNC_1(VAR_4, 20, "0x%02x%02x%02x%02x%02x%02x%02x%02x\n",
  VAR_8[0], VAR_8[1], VAR_8[2], VAR_8[3],
  VAR_8[4], VAR_8[5], VAR_8[6], VAR_8[7]);
}
