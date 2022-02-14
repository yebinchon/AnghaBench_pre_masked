
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ portname; scalar_t__ portname_required; } ;
struct qeth_card {TYPE_1__ info; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 struct qeth_card* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,scalar_t__,int) ;
 int FUNC_3 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
    struct device_attribute *VAR_2, char *VAR_3)
{
 struct qeth_card *VAR_4 = FUNC_1(VAR_1);
 char VAR_5[9] = {0, };

 if (!VAR_4)
  return -VAR_0;

 if (VAR_4->info.portname_required) {
  FUNC_2(VAR_5, VAR_4->info.portname + 1, 8);
  FUNC_0(VAR_5, 8);
  return FUNC_3(VAR_3, "%s\n", VAR_5);
 } else
  return FUNC_3(VAR_3, "no portname required\n");
}
