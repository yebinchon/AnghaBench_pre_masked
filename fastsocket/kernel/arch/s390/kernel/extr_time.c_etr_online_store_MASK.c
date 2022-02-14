
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysdev_attribute {int dummy; } ;
struct sys_device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct sys_device VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;
 unsigned int FUNC_5 (char const*,int *,int ) ;
 int FUNC_6 (int ,int *) ;
 int VAR_13 ;

__attribute__((used)) static ssize_t FUNC_7(struct sys_device *VAR_14,
    struct sysdev_attribute *VAR_15,
    const char *VAR_16, size_t VAR_17)
{
 unsigned int VAR_18;

 VAR_18 = FUNC_5(VAR_16, ((void*)0), 0);
 if (VAR_18 != 0 && VAR_18 != 1)
  return -VAR_2;
 if (!FUNC_6(VAR_1, &VAR_6))
  return -VAR_3;
 FUNC_1(&VAR_7);
 if (VAR_14 == &VAR_9) {
  if (VAR_10 == VAR_18)
   goto out;
  VAR_10 = VAR_18;
  if (VAR_10 && VAR_11)
   FUNC_4(VAR_0, &VAR_6);
  else
   FUNC_0(VAR_0, &VAR_6);
  FUNC_4(VAR_4, &VAR_8);
  FUNC_3(VAR_13, &VAR_12);
 } else {
  if (VAR_11 == VAR_18)
   goto out;
  VAR_11 = VAR_18;
  if (VAR_10 && VAR_11)
   FUNC_4(VAR_0, &VAR_6);
  else
   FUNC_0(VAR_0, &VAR_6);
  FUNC_4(VAR_5, &VAR_8);
  FUNC_3(VAR_13, &VAR_12);
 }
out:
 FUNC_2(&VAR_7);
 return VAR_17;
}
