
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct aac_dev {scalar_t__ in_reset; } ;
typedef int ssize_t ;
struct TYPE_2__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct aac_dev*) ;
 TYPE_1__* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
          struct device_attribute *VAR_3,
          char *VAR_4)
{
 struct aac_dev *VAR_5 = (struct aac_dev*)FUNC_1(VAR_2)->hostdata;
 int VAR_6, VAR_7;

 VAR_7 = FUNC_0(VAR_5);
 if ((VAR_7 == 0) && VAR_5->in_reset)
  VAR_7 = -VAR_0;
 VAR_6 = FUNC_2(VAR_4, VAR_1, "0x%x\n", VAR_7);
 return VAR_6;
}
