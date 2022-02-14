
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tmp_hsuid ;
struct TYPE_4__ {int hsuid; } ;
struct TYPE_3__ {scalar_t__ type; } ;
struct qeth_card {scalar_t__ state; TYPE_2__ options; TYPE_1__ info; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct qeth_card* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_4,
  struct device_attribute *VAR_5, char *VAR_6)
{
 struct qeth_card *VAR_7 = FUNC_1(VAR_4);
 char VAR_8[9];

 if (!VAR_7)
  return -VAR_1;

 if (VAR_7->info.type != VAR_3)
  return -VAR_2;

 if (VAR_7->state == VAR_0)
  return -VAR_2;

 FUNC_2(VAR_8, VAR_7->options.hsuid, sizeof(VAR_8));
 FUNC_0(VAR_8, 8);
 return FUNC_3(VAR_6, "%s\n", VAR_8);
}
