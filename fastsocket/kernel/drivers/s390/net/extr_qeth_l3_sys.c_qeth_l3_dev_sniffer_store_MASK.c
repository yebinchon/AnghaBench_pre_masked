
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int buf_count; } ;
struct TYPE_9__ {TYPE_3__ init_pool; } ;
struct TYPE_7__ {scalar_t__ cq; unsigned long sniffer; } ;
struct TYPE_10__ {int qdioac2; } ;
struct TYPE_6__ {scalar_t__ type; } ;
struct qeth_card {scalar_t__ state; int conf_mutex; TYPE_4__ qdio; TYPE_2__ options; TYPE_5__ ssqd; TYPE_1__ info; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct qeth_card*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct qeth_card* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,TYPE_5__*) ;
 int FUNC_5 (struct qeth_card*,int ) ;
 int FUNC_6 (char const*,int,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_8,
  struct device_attribute *VAR_9, const char *VAR_10, size_t VAR_11)
{
 struct qeth_card *VAR_12 = FUNC_1(VAR_8);
 int VAR_13 = 0;
 unsigned long VAR_14;

 if (!VAR_12)
  return -VAR_2;

 if (VAR_12->info.type != VAR_4)
  return -VAR_3;
 if (VAR_12->options.cq == VAR_5)
  return -VAR_3;

 FUNC_2(&VAR_12->conf_mutex);
 if ((VAR_12->state != VAR_0) &&
     (VAR_12->state != VAR_1)) {
  VAR_13 = -VAR_3;
  goto out;
 }

 VAR_13 = FUNC_6(VAR_10, 16, &VAR_14);
 if (VAR_13) {
  VAR_13 = -VAR_2;
  goto out;
 }
 switch (VAR_14) {
 case 0:
  VAR_12->options.sniffer = VAR_14;
  break;
 case 1:
  FUNC_4(FUNC_0(VAR_12), &VAR_12->ssqd);
  if (VAR_12->ssqd.qdioac2 & VAR_7) {
   VAR_12->options.sniffer = VAR_14;
   if (VAR_12->qdio.init_pool.buf_count !=
     VAR_6)
    FUNC_5(VAR_12,
     VAR_6);
   break;
  } else
   VAR_13 = -VAR_3;
 default:
  VAR_13 = -VAR_2;
 }
out:
 FUNC_3(&VAR_12->conf_mutex);
 return VAR_13 ? VAR_13 : VAR_11;
}
