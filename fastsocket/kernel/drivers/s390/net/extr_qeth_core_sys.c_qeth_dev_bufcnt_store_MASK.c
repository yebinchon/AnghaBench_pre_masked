
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buf_count; } ;
struct TYPE_4__ {TYPE_1__ in_buf_pool; } ;
struct qeth_card {scalar_t__ state; int conf_mutex; TYPE_2__ qdio; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct qeth_card* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct qeth_card*,int) ;
 int FUNC_4 (char const*,char**,int) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_6,
  struct device_attribute *VAR_7, const char *VAR_8, size_t VAR_9)
{
 struct qeth_card *VAR_10 = FUNC_0(VAR_6);
 char *VAR_11;
 int VAR_12, VAR_13;
 int VAR_14 = 0;

 if (!VAR_10)
  return -VAR_2;

 FUNC_1(&VAR_10->conf_mutex);
 if ((VAR_10->state != VAR_0) &&
     (VAR_10->state != VAR_1)) {
  VAR_14 = -VAR_3;
  goto out;
 }

 VAR_13 = VAR_10->qdio.in_buf_pool.buf_count;
 VAR_12 = FUNC_4(VAR_8, &VAR_11, 10);
 VAR_12 = (VAR_12 < VAR_5) ? VAR_5 :
  ((VAR_12 > VAR_4) ? VAR_4 : VAR_12);
 if (VAR_13 != VAR_12) {
  VAR_14 = FUNC_3(VAR_10, VAR_12);
 }
out:
 FUNC_2(&VAR_10->conf_mutex);
 return VAR_14 ? VAR_14 : VAR_9;
}
