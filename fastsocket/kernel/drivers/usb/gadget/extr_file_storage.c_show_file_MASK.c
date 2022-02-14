
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lun {TYPE_1__* filp; } ;
struct fsg_dev {int filesem; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int f_path; } ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 size_t FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct lun*) ;
 char* FUNC_3 (int *,char*,scalar_t__) ;
 struct fsg_dev* FUNC_4 (struct device*) ;
 struct lun* FUNC_5 (struct device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,char*,size_t) ;
 size_t FUNC_8 (char*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_1, struct device_attribute *VAR_2,
  char *VAR_3)
{
 struct lun *VAR_4 = FUNC_5(VAR_1);
 struct fsg_dev *VAR_5 = FUNC_4(VAR_1);
 char *VAR_6;
 ssize_t VAR_7;

 FUNC_6(&VAR_5->filesem);
 if (FUNC_2(VAR_4)) {
  VAR_6 = FUNC_3(&VAR_4->filp->f_path, VAR_3, VAR_0 - 1);
  if (FUNC_0(VAR_6))
   VAR_7 = FUNC_1(VAR_6);
  else {
   VAR_7 = FUNC_8(VAR_6);
   FUNC_7(VAR_3, VAR_6, VAR_7);
   VAR_3[VAR_7] = '\n';
   VAR_3[++VAR_7] = 0;
  }
 } else {
  *VAR_3 = 0;
  VAR_7 = 0;
 }
 FUNC_9(&VAR_5->filesem);
 return VAR_7;
}
