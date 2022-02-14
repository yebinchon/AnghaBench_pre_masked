
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct aac_dev {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct aac_dev*,int) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
           struct device_attribute *VAR_3,
           const char *VAR_4, size_t VAR_5)
{
 int VAR_6 = -VAR_1;

 if (!FUNC_1(VAR_0))
  return VAR_6;
 VAR_6 = FUNC_0((struct aac_dev*)FUNC_2(VAR_2)->hostdata, VAR_4[0] == '!');
 if (VAR_6 >= 0)
  VAR_6 = VAR_5;
 return VAR_6;
}
