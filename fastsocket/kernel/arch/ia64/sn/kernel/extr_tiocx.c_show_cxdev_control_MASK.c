
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int nasid; int part_num; int mfg_num; } ;
struct cx_dev {int bt; TYPE_1__ cx_id; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int,int,int,int) ;
 struct cx_dev* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0, struct device_attribute *VAR_1, char *VAR_2)
{
 struct cx_dev *VAR_3 = FUNC_1(VAR_0);

 return FUNC_0(VAR_2, "0x%x 0x%x 0x%x 0x%x\n",
         VAR_3->cx_id.nasid,
         VAR_3->cx_id.part_num, VAR_3->cx_id.mfg_num,
         VAR_3->bt);
}
