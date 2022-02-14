
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_4,
    struct device_attribute *VAR_5, char *VAR_6)
{
 char VAR_7[5];
 char VAR_8[6];
 int VAR_9;

 FUNC_2(&VAR_2);

 VAR_9 = FUNC_0(VAR_3, VAR_7);

 if (VAR_9 || !VAR_7[0]) {
  FUNC_3(&VAR_2);

  return -VAR_0;
 }

 VAR_9 = FUNC_1(VAR_7, VAR_8);

 FUNC_3(&VAR_2);

 if (!VAR_9)
  return FUNC_4(VAR_6, VAR_1, "%s\n", VAR_8+1);
 else
  return VAR_9;
}
