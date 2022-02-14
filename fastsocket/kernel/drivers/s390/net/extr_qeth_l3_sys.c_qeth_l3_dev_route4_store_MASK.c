
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int route4; } ;
struct qeth_card {TYPE_1__ options; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct qeth_card* FUNC_0 (struct device*) ;
 int FUNC_1 (struct qeth_card*,int *,int ,char const*,size_t) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_2,
  struct device_attribute *VAR_3, const char *VAR_4, size_t VAR_5)
{
 struct qeth_card *VAR_6 = FUNC_0(VAR_2);

 if (!VAR_6)
  return -VAR_0;

 return FUNC_1(VAR_6, &VAR_6->options.route4,
    VAR_1, VAR_4, VAR_5);
}
