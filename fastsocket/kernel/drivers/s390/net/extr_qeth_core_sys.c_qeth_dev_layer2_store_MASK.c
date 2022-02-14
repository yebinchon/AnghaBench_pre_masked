
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* ccwgdriver; } ;
struct TYPE_6__ {scalar_t__ mac_bits; } ;
struct TYPE_5__ {int layer2; } ;
struct qeth_card {scalar_t__ state; int discipline_mutex; int gdev; TYPE_4__ discipline; TYPE_2__ info; TYPE_1__ options; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef enum qeth_discipline_id { ____Placeholder_qeth_discipline_id } qeth_discipline_id ;
struct TYPE_7__ {int (* probe ) (int ) ;int (* remove ) (int ) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct qeth_card* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct qeth_card*) ;
 int FUNC_4 (struct qeth_card*,int) ;
 int FUNC_5 (char const*,char**,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_5,
  struct device_attribute *VAR_6, const char *VAR_7, size_t VAR_8)
{
 struct qeth_card *VAR_9 = FUNC_0(VAR_5);
 char *VAR_10;
 int VAR_11, VAR_12 = 0;
 enum qeth_discipline_id VAR_13;

 if (!VAR_9)
  return -VAR_1;

 FUNC_1(&VAR_9->discipline_mutex);
 if (VAR_9->state != VAR_0) {
  VAR_12 = -VAR_2;
  goto out;
 }

 VAR_11 = FUNC_5(VAR_7, &VAR_10, 16);
 switch (VAR_11) {
 case 0:
  VAR_13 = VAR_4;
  break;
 case 1:
  VAR_13 = VAR_3;
  break;
 default:
  VAR_12 = -VAR_1;
  goto out;
 }

 if (VAR_9->options.layer2 == VAR_13)
  goto out;
 else {
  VAR_9->info.mac_bits = 0;
  if (VAR_9->discipline.ccwgdriver) {
   VAR_9->discipline.ccwgdriver->remove(VAR_9->gdev);
   FUNC_3(VAR_9);
  }
 }

 VAR_12 = FUNC_4(VAR_9, VAR_13);
 if (VAR_12)
  goto out;

 VAR_12 = VAR_9->discipline.ccwgdriver->probe(VAR_9->gdev);
out:
 FUNC_2(&VAR_9->discipline_mutex);
 return VAR_12 ? VAR_12 : VAR_8;
}
