
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ broadcast_mode; } ;
struct TYPE_3__ {scalar_t__ link_type; } ;
struct qeth_card {TYPE_2__ options; TYPE_1__ info; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct qeth_card* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_4,
    struct device_attribute *VAR_5, char *VAR_6)
{
 struct qeth_card *VAR_7 = FUNC_0(VAR_4);

 if (!VAR_7)
  return -VAR_0;

 if (!((VAR_7->info.link_type == VAR_1) ||
       (VAR_7->info.link_type == VAR_2)))
  return FUNC_1(VAR_6, "n/a\n");

 return FUNC_1(VAR_6, "%s\n", (VAR_7->options.broadcast_mode ==
         VAR_3)?
         "all rings":"local");
}
