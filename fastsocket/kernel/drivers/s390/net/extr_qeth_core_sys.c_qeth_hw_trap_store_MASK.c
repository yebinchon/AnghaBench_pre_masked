
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hwtrap; } ;
struct qeth_card {scalar_t__ state; int conf_mutex; TYPE_1__ info; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct qeth_card* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct qeth_card*,int ) ;
 scalar_t__ FUNC_4 (struct qeth_card*,int ) ;
 int FUNC_5 (char*,char*) ;
 char* FUNC_6 (char**,char*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_7,
  struct device_attribute *VAR_8, const char *VAR_9, size_t VAR_10)
{
 struct qeth_card *VAR_11 = FUNC_0(VAR_7);
 int VAR_12 = 0;
 char *VAR_13, *VAR_14;
 int VAR_15 = 0;
 VAR_14 = (char *)VAR_9;

 if (!VAR_11)
  return -VAR_2;

 FUNC_1(&VAR_11->conf_mutex);
 if (VAR_11->state == VAR_0 || VAR_11->state == VAR_1)
  VAR_15 = 1;
 VAR_13 = FUNC_6(&VAR_14, "\n");

 if (!FUNC_5(VAR_13, "arm") && !VAR_11->info.hwtrap) {
  if (VAR_15) {
   if (FUNC_4(VAR_11,
       VAR_3)) {
    VAR_12 = FUNC_3(VAR_11, VAR_4);
    if (!VAR_12)
     VAR_11->info.hwtrap = 1;
   } else
    VAR_12 = -VAR_2;
  } else
   VAR_11->info.hwtrap = 1;
 } else if (!FUNC_5(VAR_13, "disarm") && VAR_11->info.hwtrap) {
  if (VAR_15) {
   VAR_12 = FUNC_3(VAR_11, VAR_6);
   if (!VAR_12)
    VAR_11->info.hwtrap = 0;
  } else
   VAR_11->info.hwtrap = 0;
 } else if (!FUNC_5(VAR_13, "trap") && VAR_15 && VAR_11->info.hwtrap)
  VAR_12 = FUNC_3(VAR_11, VAR_5);
 else
  VAR_12 = -VAR_2;

 FUNC_2(&VAR_11->conf_mutex);
 return VAR_12 ? VAR_12 : VAR_10;
}
