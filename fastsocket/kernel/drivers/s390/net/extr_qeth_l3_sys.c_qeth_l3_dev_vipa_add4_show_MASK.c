
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_card {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct qeth_card* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,struct qeth_card*,int ) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_2,
   struct device_attribute *VAR_3, char *VAR_4)
{
 struct qeth_card *VAR_5 = FUNC_0(VAR_2);

 if (!VAR_5)
  return -VAR_0;

 return FUNC_1(VAR_4, VAR_5, VAR_1);
}
