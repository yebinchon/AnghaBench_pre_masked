
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_card {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct qeth_card* FUNC_0 (struct device*) ;
 char* FUNC_1 (struct qeth_card*) ;
 int FUNC_2 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
   struct device_attribute *VAR_2, char *VAR_3)
{
 struct qeth_card *VAR_4 = FUNC_0(VAR_1);

 if (!VAR_4)
  return -VAR_0;

 return FUNC_2(VAR_3, "%s checksumming\n",
   FUNC_1(VAR_4));
}
