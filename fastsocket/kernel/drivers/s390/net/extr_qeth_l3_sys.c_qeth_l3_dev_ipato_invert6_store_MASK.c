
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int invert6; } ;
struct qeth_card {int conf_mutex; TYPE_1__ ipato; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct qeth_card* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char*) ;
 char* FUNC_4 (char**,char*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
  struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct qeth_card *VAR_5 = FUNC_0(VAR_1);
 char *VAR_6;
 int VAR_7 = 0;

 if (!VAR_5)
  return -VAR_0;

 FUNC_1(&VAR_5->conf_mutex);
 VAR_6 = FUNC_4((char **) &VAR_3, "\n");
 if (!FUNC_3(VAR_6, "toggle")) {
  VAR_5->ipato.invert6 = (VAR_5->ipato.invert6)? 0 : 1;
 } else if (!FUNC_3(VAR_6, "1")) {
  VAR_5->ipato.invert6 = 1;
 } else if (!FUNC_3(VAR_6, "0")) {
  VAR_5->ipato.invert6 = 0;
 } else
  VAR_7 = -VAR_0;
 FUNC_2(&VAR_5->conf_mutex);
 return VAR_7 ? VAR_7 : VAR_4;
}
