
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_card {scalar_t__ state; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 struct qeth_card* FUNC_0 (struct device*) ;
 int FUNC_1 (struct qeth_card*) ;
 int FUNC_2 (char const*,char**,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_3,
  struct device_attribute *VAR_4, const char *VAR_5, size_t VAR_6)
{
 struct qeth_card *VAR_7 = FUNC_0(VAR_3);
 char *VAR_8;
 int VAR_9;

 if (!VAR_7)
  return -VAR_1;

 if (VAR_7->state != VAR_0)
  return -VAR_2;

 VAR_9 = FUNC_2(VAR_5, &VAR_8, 16);
 if (VAR_9 == 1)
  FUNC_1(VAR_7);

 return VAR_6;
}
