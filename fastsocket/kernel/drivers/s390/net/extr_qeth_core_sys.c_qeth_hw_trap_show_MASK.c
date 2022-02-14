
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ hwtrap; } ;
struct qeth_card {TYPE_1__ info; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct qeth_card* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
    struct device_attribute *VAR_2, char *VAR_3)
{
 struct qeth_card *VAR_4 = FUNC_0(VAR_1);

 if (!VAR_4)
  return -VAR_0;
 if (VAR_4->info.hwtrap)
  return FUNC_1(VAR_3, 5, "arm\n");
 else
  return FUNC_1(VAR_3, 8, "disarm\n");
}
