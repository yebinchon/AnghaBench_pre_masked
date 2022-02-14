
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* portname; } ;
struct qeth_card {scalar_t__ state; int conf_mutex; TYPE_1__ info; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct qeth_card* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char**,char*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_4,
  struct device_attribute *VAR_5, const char *VAR_6, size_t VAR_7)
{
 struct qeth_card *VAR_8 = FUNC_1(VAR_4);
 char *VAR_9;
 int VAR_10, VAR_11 = 0;

 if (!VAR_8)
  return -VAR_2;

 FUNC_2(&VAR_8->conf_mutex);
 if ((VAR_8->state != VAR_0) &&
     (VAR_8->state != VAR_1)) {
  VAR_11 = -VAR_3;
  goto out;
 }

 VAR_9 = FUNC_6((char **) &VAR_6, "\n");
 if ((FUNC_5(VAR_9) > 8) || (FUNC_5(VAR_9) == 0)) {
  VAR_11 = -VAR_2;
  goto out;
 }

 VAR_8->info.portname[0] = FUNC_5(VAR_9);

 for (VAR_10 = 1; VAR_10 < 9; VAR_10++)
  VAR_8->info.portname[VAR_10] = ' ';
 FUNC_4(VAR_8->info.portname + 1, VAR_9);
 FUNC_0(VAR_8->info.portname + 1, 8);
out:
 FUNC_3(&VAR_8->conf_mutex);
 return VAR_11 ? VAR_11 : VAR_7;
}
