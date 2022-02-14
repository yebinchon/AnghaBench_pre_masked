
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lbs_private {int monitormode; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {struct lbs_private* ml_priv; } ;


 int FUNC_0 (char*,int,char*,int) ;
 TYPE_1__* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
  struct device_attribute *VAR_1, char * VAR_2)
{
 struct lbs_private *VAR_3 = FUNC_1(VAR_0)->ml_priv;
 return FUNC_0(VAR_2, 5, "0x%X\n", VAR_3->monitormode);
}
