
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lun {int ro; } ;
struct fsg_dev {int filesem; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct lun*,char*,...) ;
 scalar_t__ FUNC_1 (struct lun*) ;
 struct fsg_dev* FUNC_2 (struct device*) ;
 struct lun* FUNC_3 (struct device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char const*,char*,int*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_2, struct device_attribute *VAR_3,
  const char *VAR_4, size_t VAR_5)
{
 ssize_t VAR_6 = VAR_5;
 struct lun *VAR_7 = FUNC_3(VAR_2);
 struct fsg_dev *VAR_8 = FUNC_2(VAR_2);
 int VAR_9;

 if (FUNC_5(VAR_4, "%d", &VAR_9) != 1)
  return -VAR_1;



 FUNC_4(&VAR_8->filesem);
 if (FUNC_1(VAR_7)) {
  FUNC_0(VAR_7, "read-only status change prevented\n");
  VAR_6 = -VAR_0;
 } else {
  VAR_7->ro = !!VAR_9;
  FUNC_0(VAR_7, "read-only status set to %d\n", VAR_7->ro);
 }
 FUNC_6(&VAR_8->filesem);
 return VAR_6;
}
