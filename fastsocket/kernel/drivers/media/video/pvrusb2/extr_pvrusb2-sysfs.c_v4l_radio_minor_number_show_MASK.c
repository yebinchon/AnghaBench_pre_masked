
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hdw; } ;
struct pvr2_sysfs {TYPE_1__ channel; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct pvr2_sysfs* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (char*,int ,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_3,
        struct device_attribute *VAR_4,
        char *VAR_5)
{
 struct pvr2_sysfs *VAR_6;
 VAR_6 = FUNC_0(VAR_3);
 if (!VAR_6) return -VAR_0;
 return FUNC_2(VAR_5,VAR_1,"%d\n",
    FUNC_1(VAR_6->channel.hdw,
             VAR_2));
}
