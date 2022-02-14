
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int field; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,char*,int ) ;
 TYPE_1__* FUNC_2 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
      struct device_attribute *VAR_2,
      char *VAR_3)
{
 int VAR_4 = FUNC_2(VAR_2)->field;
 ssize_t VAR_5;
 VAR_5 = FUNC_1(VAR_3, VAR_0, "%s\n", FUNC_0(VAR_4));
 VAR_3[VAR_5-1] = '\n';
 return VAR_5;
}
