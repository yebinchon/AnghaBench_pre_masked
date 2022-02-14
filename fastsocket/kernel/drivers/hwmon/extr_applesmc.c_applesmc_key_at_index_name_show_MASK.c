
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
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_4,
    struct device_attribute *VAR_5, char *VAR_6)
{
 char VAR_7[5];
 int VAR_8;

 FUNC_1(&VAR_2);

 VAR_8 = FUNC_0(VAR_3, VAR_7);

 FUNC_2(&VAR_2);

 if (!VAR_8 && VAR_7[0])
  return FUNC_3(VAR_6, VAR_1, "%s\n", VAR_7);
 else
  return -VAR_0;
}
