
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ctcm_priv {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct ctcm_priv*) ;
 struct ctcm_priv* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
    struct device_attribute *VAR_2, char *VAR_3)
{
 struct ctcm_priv *VAR_4 = FUNC_1(VAR_1);
 if (!VAR_4)
  return -VAR_0;
 FUNC_0(VAR_4);
 return FUNC_2(VAR_3, "0\n");
}
