
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,char*) ;
 int VAR_1 ;
 int FUNC_2 (char*,char*,char) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_3,
    struct device_attribute *VAR_4, char *VAR_5)
{
 char VAR_6[5];
 char VAR_7[6];
 int VAR_8;

 FUNC_3(&VAR_1);

 VAR_8 = FUNC_0(VAR_2, VAR_6);

 if (VAR_8 || !VAR_6[0]) {
  FUNC_4(&VAR_1);

  return -VAR_0;
 }

 VAR_8 = FUNC_1(VAR_6, VAR_7);

 if (VAR_8) {
  FUNC_4(&VAR_1);

  return VAR_8;
 }





 VAR_8 = FUNC_2(VAR_6, VAR_5, VAR_7[0]);

 FUNC_4(&VAR_1);

 if (!VAR_8) {
  return VAR_7[0];
 } else {
  return VAR_8;
 }
}
