
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwc_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct pwc_device* FUNC_0 (struct device*) ;
 int FUNC_1 (struct pwc_device*,int) ;
 int FUNC_2 (struct pwc_device*,int,int) ;
 scalar_t__ FUNC_3 (char const*,char*,int*,int*) ;
 int FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
         struct device_attribute *VAR_2,
         const char *VAR_3, size_t VAR_4)
{
 struct pwc_device *VAR_5 = FUNC_0(VAR_1);
 int VAR_6, VAR_7;
 int VAR_8 = -VAR_0;

 if (FUNC_5(VAR_3, "reset", 5) == 0)
  VAR_8 = FUNC_1(VAR_5, 0x3);

 else if (FUNC_3(VAR_3, "%d %d", &VAR_6, &VAR_7) > 0)
  VAR_8 = FUNC_2(VAR_5, VAR_6, VAR_7);

 if (VAR_8 < 0)
  return VAR_8;
 return FUNC_4(VAR_3);
}
