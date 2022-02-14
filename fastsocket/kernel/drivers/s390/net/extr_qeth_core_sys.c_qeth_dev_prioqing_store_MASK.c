
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int no_out_queues; int default_out_queue; void* do_prio_queueing; } ;
struct qeth_card {scalar_t__ state; int conf_mutex; TYPE_1__ qdio; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 struct qeth_card* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char*) ;
 char* FUNC_4 (char**,char*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_9,
  struct device_attribute *VAR_10, const char *VAR_11, size_t VAR_12)
{
 struct qeth_card *VAR_13 = FUNC_0(VAR_9);
 char *VAR_14;
 int VAR_15 = 0;

 if (!VAR_13)
  return -VAR_2;

 FUNC_1(&VAR_13->conf_mutex);
 if ((VAR_13->state != VAR_0) &&
     (VAR_13->state != VAR_1)) {
  VAR_15 = -VAR_3;
  goto out;
 }




 if (VAR_13->qdio.no_out_queues == 1) {
  VAR_13->qdio.do_prio_queueing = VAR_6;
  VAR_15 = -VAR_3;
  goto out;
 }

 VAR_14 = FUNC_4((char **) &VAR_11, "\n");
 if (!FUNC_3(VAR_14, "prio_queueing_prec"))
  VAR_13->qdio.do_prio_queueing = VAR_7;
 else if (!FUNC_3(VAR_14, "prio_queueing_tos"))
  VAR_13->qdio.do_prio_queueing = VAR_8;
 else if (!FUNC_3(VAR_14, "no_prio_queueing:0")) {
  VAR_13->qdio.do_prio_queueing = VAR_5;
  VAR_13->qdio.default_out_queue = 0;
 } else if (!FUNC_3(VAR_14, "no_prio_queueing:1")) {
  VAR_13->qdio.do_prio_queueing = VAR_5;
  VAR_13->qdio.default_out_queue = 1;
 } else if (!FUNC_3(VAR_14, "no_prio_queueing:2")) {
  VAR_13->qdio.do_prio_queueing = VAR_5;
  VAR_13->qdio.default_out_queue = 2;
 } else if (!FUNC_3(VAR_14, "no_prio_queueing:3")) {
  VAR_13->qdio.do_prio_queueing = VAR_5;
  VAR_13->qdio.default_out_queue = 3;
 } else if (!FUNC_3(VAR_14, "no_prio_queueing")) {
  VAR_13->qdio.do_prio_queueing = VAR_5;
  VAR_13->qdio.default_out_queue = VAR_4;
 } else
  VAR_15 = -VAR_2;
out:
 FUNC_2(&VAR_13->conf_mutex);
 return VAR_15 ? VAR_15 : VAR_12;
}
