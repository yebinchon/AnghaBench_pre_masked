
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int s16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,char*,int,int,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_5,
       struct device_attribute *VAR_6, char *VAR_7)
{
 int VAR_8;
 s16 VAR_9, VAR_10, VAR_11;

 FUNC_1(&VAR_4);

 VAR_8 = FUNC_0(VAR_1, &VAR_9);
 if (VAR_8)
  goto out;
 VAR_8 = FUNC_0(VAR_2, &VAR_10);
 if (VAR_8)
  goto out;
 VAR_8 = FUNC_0(VAR_3, &VAR_11);
 if (VAR_8)
  goto out;

out:
 FUNC_2(&VAR_4);
 if (VAR_8)
  return VAR_8;
 else
  return FUNC_3(VAR_7, VAR_0, "(%d,%d,%d)\n", VAR_9, VAR_10, VAR_11);
}
